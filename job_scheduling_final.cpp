#include <iostream>
#include <windows.h>
using namespace std;


void printMaxActivities(int p[], int d[], int n)
{
    int i, j;

    cout<<"\nFollowing activities are selected \n";
    int max=d[0];
	 for(i=1;i<n;i++)
	 {
		if(max<d[i])
		{
			max=d[i];
		}
			
	 }
	 cout<<"Maximum offered DeadLine"<<max<<endl;
	 int slot[max];
	 slot[d[0]-1]=p[0];
	// cout<<d[0]-1<<" "<<slot[d[0]-1];
	 int trav[10];
	 int tra=0;
	 trav[tra]=d[0]-1;
	 tra++;
	 
	 for(int j=1;j<n;j++){
	
		int counter=0;
		for(i=0;i<tra;i++){
				if(trav[i]==(d[j]-1))
				counter++;
		}
			cout<<endl<<counter<<endl;
		if(counter==0)
		{
			slot[d[j]-1]=p[j];
			trav[tra]=d[j]-1;
			tra++;
		}
}
	 cout<<"Works than can be done are with profits : "<<endl;
	 for(i=0;i<max;i++)
	 {
			// First activity is always selected
			cout<<slot[i]<<" ";
	 }
   
}


void quicksort(int *my,int *x,int first,int last){
    int pivot,j,temp,mytemp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
					mytemp=my[i];
					my[i]=my[j];
					my[j]=mytemp;
             }
         }

         temp=x[pivot];
         mytemp=my[pivot];
         x[pivot]=x[j];
         my[pivot]=my[j];
         x[j]=temp;
         my[j]=mytemp;
         quicksort(my,x,first,j-1);
         quicksort(my,x,j+1,last);

    }
}
void reverse(int *d,int *p,int n)
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=d[n-i-1];
		d[n-i-1]=d[i];
		d[i]=temp;
        temp=p[n-i-1];
		p[n-i-1]=p[i];
		p[i]=temp;
		
	}
}

int main()
{
    int p[] =  {18,9,13,11};
    int d[] =  {2,3,1,2};
int n = sizeof(p)/sizeof(int);
    quicksort(d,p,0,n-1);
    reverse(d,p,n);
	int i;
	  
cout<<"Sorted Elements \n";
  	for(i=0;i<n;i++){
	cout<<p[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{cout<<d[i]<<" ";
	}

    printMaxActivities(p, d, n);
    system("pause");
    return 0;
}

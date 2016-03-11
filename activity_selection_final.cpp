#include <iostream>
#include <windows.h>
using namespace std;


void printMaxActivities(int s[], int f[], int n)
{
    int i, j;

    cout<<"\nFollowing activities are selected \n";

// First activity is always selected
    i = 0;
    cout<<s[i]<<"to"<<f[i]<<endl;

    for (j = 1; j < n; j++)
    {

      if (s[j] >= f[i])
      {
          cout<<s[j]<<"to"<<f[j]<<endl;
          i = j;
      }
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

int main()
{
    int s[] =  {1,3,0,5,3,5,6,8,8,2,12};
    int f[] =  {4,5,6,7,8,9,10,11,12,13,14};

    quicksort(s,f,0,5);
	int i;
	  int n = sizeof(s)/sizeof(int);
cout<<"Sorted Elements \n";
  	for(i=0;i<n;i++){
	cout<<s[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{cout<<f[i]<<" ";
	}

    printMaxActivities(s, f, n);
    system("pause");
    return 0;
}

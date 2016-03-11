#include <iostream>
#include<windows.h>
using namespace std;
int count=0;
	int a[20],l,u,i,j;
	int n;
void quick(int *,int,int);
int main()
{
	cout<<"\nEnter the number of elements : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i] = rand()%99;
	}
	l=0;
	u=n-1;
	quick(a,l,u);
	cout <<"\nSORTED ARRAY IS : ";
	for(i=0;i<n;i++)
	cout << a[i] << ",";
	 cout <<"\n"; cout <<"\n";
	system("pause");
}

void quick(int a[],int l,int u)
{
   int p,temp;
   if(l<u)
   {
   p=a[l];
   i=l;
   j=u;
    while(i<j)
   {
      while(a[i] <= p && i<j )
	 		i++;
      while(a[j]>p && i<=j )
	   		j--;
      if(i<=j)
      {
      		temp=a[i];
      		a[i]=a[j];
      		a[j]=temp;
	  }
  }
  temp=a[j];
  a[j]=a[l];
  a[l]=temp;
  cout <<"\n";
  ::count+=1;
  cout<<"\nARRAY AFTER PASS "<< ::count <<" : ";
  for(i=0;i<n;i++)
  {
		
        cout <<a[i]<<",";
  }
  quick(a,l,j-1);
  quick(a,j+1,u);
 }
}

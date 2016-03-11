#include <iostream>
using namespace std;
void activity_schedule(int *arr[], int m, int n)
{

}

void quick_sort(int *array[], int first, int last)
{
    int pivot,j,temp1,temp2,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(array[1][j]<=array[1][pivot]&&i<last)
                 i++;
             while(array[1][j]>array[1][pivot])
                 j--;
             if(i<j){
                 temp1=array[0][i];
                 temp2=array[1][i];
                  array[0][i]=array[0][j];
                  array[1][i]=array[1][j];
                  array[0][j]=temp1;
                  array[1][j]=temp2;
             }
         }

         temp1=array[0][pivot];
         temp2=array[1][pivot];
         array[0][pivot]=array[0][j];
         array[1][pivot]=array[1][j];
         array[0][j]=temp1;
         array[1][j]=temp2;
         quick_sort(array,first,j-1);
         quick_sort(array,j+1,last);

    }
}

int main()
{
	cout<<"Enter the no of activities required \n";
	int a;
	cin>>a;
	int array[2][a];
	for(int i=0;i<a;i++)
	{
		cout<<"activity no : "<<i+1<<"Enter Start Time :";
		cin>>array[0][i];
		cout<<"\nEnter End Time : ";
		cin>>array[1][i];
		
	}
	quick_sort((int **)array, 0, a-1);
    for(int i=0;i<a;i++)
	{
		cout<<"activity no : "<<i+1<<"Enter Start Time : "<<array[0][i];
		cout<<" End Time : "<<array[1][i];
		

	}
 	activity_schedule((int **)array,0,a-1);
}



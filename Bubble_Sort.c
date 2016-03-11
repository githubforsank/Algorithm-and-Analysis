#include "stdio.h"
#include "time.h"
main()
{
	time_t t;
	srand((unsigned) time(&t));
	printf("Enter the array size \n");
	int a;
	scanf("%d",&a);
	int arr[a];
	int i=0;
	printf("Entering Elements Randomly\n");
	sleep(1);
	for(i=0;i<a;i++)
	{
		arr[i]=rand()%100;
	}
	printf("Elements entered into the array\n");
	for(i=0;i<a;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	bubble_sort(arr,a);
	printf("Array sorted through bubble sort\n");
	for(i=0;i<a;i++)
        {
                printf("%d ",*(arr+i));
        }
	printf("\nTerminating Program ...\n");
	exit(0);

}
int bubble_sort(int *arr,int a)
{
	int counter=0;
	int i=0,j=0;
	for(i=a-1;i>=0;i--)
	{
		for(j=i-1;j>=0;j--)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				counter++;
			}
		}
	}
	printf("\nCounter Iterations %d \n",counter);
}

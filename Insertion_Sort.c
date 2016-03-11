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
	insertion_sort(arr,a);
	printf("Array sorted through insertion sort\n");
	for(i=0;i<a;i++)
        {
                printf("%d ",*(arr+i));
        }
	printf("\nTerminating Program ...\n");
	exit(0);

}
int insertion_sort(int *arr,int a)
{
	int i=1,j=0;
	int shift=0;
	for(i=1;i<a;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				printf("Now inserting %d ",temp);
				int k=0;
				for(k=i;k>0;k--)
				{	
					printf("%d",++shift);
					arr[k]=arr[k-1];
				}
				arr[j]=temp;
				printf("\n");
			}
		}
	}
}

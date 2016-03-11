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
	selection_sort(arr,a);
	printf("Array sorted through selection sort\n");
	for(i=0;i<a;i++)
        {
                printf("%d ",*(arr+i));
        }
	printf("\nTerminating Program ...\n");
	exit(0);

}
int selection_sort(int *arr,int a)
{
	int min=1000;
	int i;
	int counter=0;
	for(i=0;i<a;i++)
	{
		int j=0;
		int index=i;
		min=1000;
		for(j=i;j<a;j++)
		{
			if(min>=arr[j])
			{
				min=arr[j];
				index=j;	
				counter++;
			}
			
		}
		int temp=arr[i];
		arr[i]=arr[index];
		arr[index]=temp;
		
		
	}
	
	printf("Counter %d\n",counter);
}

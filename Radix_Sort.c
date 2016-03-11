#include "stdio.h"
#include "time.h"
#include "math.h"

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
	radix_sort(arr,a);
	printf("Array sorted through radix sort\n");
	for(i=0;i<a;i++)
        {
                printf("%d ",*(arr+i));
        }
	printf("\nTerminating Program ...\n");
	exit(0);

}
int radix_sort(int *arr,int a)
{
	int i=0;
	int new_arr[a];
	int c=0;
	int n=arr[0];
	printf("DEBUG \n");
	while(n>0)
	{
		n=n/10;
		c++;
	}	

	for(i=1;i<=c;i++)
	{
		int ele=10;
		for(i=1;i<i;i++)
		{
			ele=ele*ele;
		}
		//printf("debug\n");
		for(i=0;i<a;i++)
		 	new_arr[i]=arr[i]%ele;
                 insertion_sort(new_arr,arr,a);
		for(i=0;i<a;i++)
			new_arr[i]=new_arr[i]/10;
	}
	
}
int insertion_sort(int *arr,int *array,int a)
{
        int i=1,j=0;
        int shift=0;
        for(i=1;i<a;i++)
        {
                for(j=0;j<i;j++)
                {
                        if(arr[i]<arr[j])
                        {
                                int temp1=arr[i];
				int temp2=array[i];
                             //   printf("Now inserting %d ",temp);
                                int k=0;
                                for(k=i;k>0;k--)
                                {       
                                        printf("%d",++shift);
                                        arr[k]=arr[k-1];
					array[k]=array[k-1];
                                }
                                arr[j]=temp1;
				array[j]=temp2;
                                printf("\n");
                        }
                }
        }
}



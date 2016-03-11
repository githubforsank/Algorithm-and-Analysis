#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
int n;
int shift(int arr[][2]);
struct node
{
	char ch;
	int f;
	int weight;
	struct node *next;
	struct node *pre;
}*start=NULL,*new_node=NULL,*cp=NULL,*dp=NULL,*none=NULL;
//............................................
void quicksort(int x[][2],int first,int last){
    int pivot,j,temp1,temp2,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i][1]<=x[pivot][1]&&i<last)
                 i++;
             while(x[j][1]>x[pivot][1])
                 j--;
             if(i<j){
                 temp1=x[i][0];
                 temp2=x[i][1];
                  x[i][0]=x[j][0];
                  x[i][1]=x[j][1];
                  x[j][0]=temp1;
                  x[j][1]=temp2;
             }
         }

         temp1=x[pivot][0];
         temp2=x[pivot][1];
         x[pivot][0]=x[j][0];
         x[pivot][1]=x[j][1];
         x[j][0]=temp1;
         x[j][1]=temp2;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
void display(int arr[][2])
{
	for(int i=0;i<n;i++)
	{
		cout<<endl<<arr[i][0]<<"------"<<arr[i][1]<<endl;
	}
}
int count=0;
//..............................................................\

void first_step(int arr[][2])
{
    
    cp= new node;
	cp->ch=arr[0][0];
	cp->f=arr[0][1];
	cp->weight=arr[0][1];
	cp->next=NULL;
	cp->pre=NULL;
	dp=new node;
    dp->ch=arr[1][0];
	dp->f=arr[1][1];
	dp->weight=arr[1][1];
	dp->next=NULL;
	dp->pre=NULL;
	struct node *none=new node;
	none->ch='!';
	none->f=0;
	none->next=dp;
	none->pre=cp;
	none->weight=none->next->weight+none->pre->weight;

		shift(arr);
		shift(arr);
}
void rest_time(int arr[][2])
{
	static int i=0;
	while(i<n)
	{
		if(arr[i][1]>none->weight)
		{

		}
	}
}

int shift(int arr[][2])
{
	for(int i=0;i<n;i++)
	{
		arr[i][0]=arr[i+1][0];
		arr[i][1]=arr[i+1][1];
	}
	n--;
}
int main()
{
	int n;
	cout<<"\n<<<<<<<---- HOFFMAN's CODING---->>>>>>>>>";
	cout<<"\nEnter the no of elements";
	cin>>n;
	 int a[n][2];
	 char ch;
	 int f;
	 for(int i=0;i<n;i++)
	 {
			cout<<"\nEnter character ";
			cin>>ch;
			cout<<"\nEnter frequency ";
			cin>>f;
			a[i][0]=ch;
			a[i][1]=f;

	 }
	 //make_hoffman_tree(a);
	 getch();
}

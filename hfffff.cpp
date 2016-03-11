#include <iostream>
using namespace std;

void make_huff(int *arr);
struct tree
{
	struct node *next;
	struct node *pre;
	int flag;
};
struct node
{
	char ch;
	int f;
	int weight;
	int code;
}*new_node=NULL;


void quicksort(int x[10],int first,int last){
    int pivot,j,temp,i;

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
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}






int n;
int main()
{
	//int n;
	cout<<"\n Enter array size \n";
	cin>>n;
	int arr[n];
	struct node *p[n];
	char ch;
	int f;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter character";
		cin>>ch;
		cout<<"Enter frequency";
		cin>>f;
		new_node = new node ;
		new_node->weight=f;
		new_node->ch=ch;
		arr[i]=f;
		p[i]=new_node;
	}
    quicksort(arr,0,n-1);
    make_huff(arr);
}
void make_huff(int *arr)
{
	tree *node=new tree;
	tree->next=
}

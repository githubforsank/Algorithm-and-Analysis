#include <iostream>
using namespace std;



struct node
{
	char ch;
	int f;
	int
}










int main()
{
	int n;
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
		new_node->next=NULL;
		new_node->pre=NULL;
		new_node->weight=f;
		new_node->ch=ch;
		start=new_node;
		cp=start;
		arr[i]=f;
	}
	
}

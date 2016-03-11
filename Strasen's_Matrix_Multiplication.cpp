#include<bits/stdc++.h>

using namespace std;

int main()
{

	
	int arr[2][2],brr[2][2],crr[2][2];
	
	cout<<"Enter the elements of matrix 1"<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"Enter the elements of matrix 2"<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>brr[i][j];
		}
	}
	
	int s1,s2,s3,s4,s5,s6,s7;
	
	s1 = (arr[0][0]*(brr[0][1]-brr[1][1]));
	
	s2 = (brr[1][1]*(arr[0][0]+arr[0][1]));
	
	s3 = (brr[0][0]*(arr[1][0]+arr[1][1]));
	
	s4 = (arr[1][1]*(brr[1][0]-brr[0][0]));
	
	s5 = ((arr[0][0]+arr[1][1])*(brr[0][0]+brr[1][1]));
	
	s6 = ((arr[0][1]-arr[1][1])*(brr[1][0]+brr[1][1]));
	
	s7 = ((arr[0][0]-arr[1][0])*(brr[0][0]-brr[0][1]));
	
	crr[0][0] = s5+s4-s2+s6;
	crr[0][1] = s1+s2;
	crr[1][0] = s3+s4;
	crr[1][1] = s5+s1-s3-s7;
	
	cout<<"Multiplied matrix"<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<crr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	system("pause");
	
}

#include<bits/stdc++.h>

using namespace std;

int getlength(int value)
{
	int counter = 0;
	while (value != 0)
	{
		counter++;
		value = value/10;
	}
	return counter;
}

int kar(int a,int b)
{
	int m = getlength(a);
	int n = getlength(b);
	
	int size;
	
	if(m>n)
	{
		size = m;
	}
	
	else
	{
		size = n;
	}
	
	int x,y,z,l;
	
	int f = pow(10,size/2);
	
	x = a/pow(10,size/2);
	y = a%f;
	
	z = b/pow(10,size/2);
	l = b%f;
	
	long int k;
	
	k = (x*z)*pow(10,size)+(x*l+y*z)*pow(10,size/2)+y*l;
	
	return k;
}

int main()
{
	cout<<"Enter the first number"<<endl;
	int a;
	cin>>a;
	cout<<"Enter the second number"<<endl;
	int b;
	cin>>b;
	
	int result;
	
	result = kar(a,b);
	
	cout<<endl<<endl<<endl;
   
    cout<<result<<endl;
    
    system("pause");
}

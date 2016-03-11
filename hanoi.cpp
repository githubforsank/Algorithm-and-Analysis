#include <iostream>
using namespace std;
#include <windows.h>
#include <conio.h>

int moves=0;
void hanoi(int m,char a,char b,char c)
{
	moves++;
	if(m==1)
	{
		cout<<"Move disk "<<m<<" from"<<a<<"to"<<c<<endl;
	}
	else
	{
		hanoi(m-1,a,c,b);
		cout<<"Move disk "<<m<<" from"<<a<<"to"<<c<<endl;
		hanoi(m-1,b,a,c);
	}
}
int main()
{
	int disk;
	cout<<"Enter no of disks \n";
	cin>>disk;
	hanoi(disk,'A','B','C');
	cout<<"taken "<<moves<<" moves \n";
	getch();
}

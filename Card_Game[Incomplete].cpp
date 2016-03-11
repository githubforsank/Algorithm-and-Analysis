#include<bits/stdc++.h>

using namespace std;

struct deck
{
	string symbol;
	int val;
	deck *next;
}
*front = NULL,*cp,*point,*card,*shuff,*p,*temp,*a,*b,*c,*d;

struct player
{
	string symbol;
	int val;
}

;

void create(int i,string s)
{

	
		card = new deck;
        
        card->symbol = s;
        
		card->val=i;
        
		/*if(2<=i<10)
		{
			card->val = i+47+1;
		}
		
		else if(i==1)
		{
			card->val = 'l';
		}
		
		
		else if(i==10)
		{
			card->val = 'l';
		}
		
		else if(i==11)
		{
			card->val = 'J';
		}

        else if(i==12)
		{
			card->val = 'Q';
		}

        else if(i==13)
		{
			card->val = 'K';
		}*/

	
	if(front==NULL)
	{
		front = card;
		cp = card;
		card->next = NULL;
	}
	
	else
	{
		cp->next = card;
		card->next = NULL;
		cp = card;
	}

}

void shuffle()
{

	
	int r = rand()%52+1;
	
	int count = 0;
	p = front;
	while(count!=r)
	{
	
		p= p->next;
		count++;
	}
	if(p->next!=NULL)
	{
	
	temp = p->next;
	p->next = temp->next;

	temp->next = front->next;
	front= temp;
	}
	
}

void display()
{
	for(point = front;point!= NULL;point = point->next)
	{
		cout<<point->symbol<<endl;
		cout<<point->val<<endl;
	}
}

void dis(struct deck *t)
{
	while(t->next!=NULL)
	{
		cout<<t->symbol<<endl;
		cout<<t->val<<endl;
		t = t->next;
	}
}

void distribute()
{

	a = front;
	cp = a;
		for(int j=0;j<13;j++)
		{
			cp = cp->next;
		}
		
	b = cp->next;
	cp->next=NULL;
	cp = b;
	
		
		for(int j=0;j<13;j++)
		{
			cp = cp->next;
		}
    c = cp->next;
	cp->next=NULL;
	cp = c;

		for(int j=0;j<13;j++)
		{
			cp = cp->next;
		}
		
 	d = cp->next;
	cp->next=NULL;
	cp = d;
	
	for(int j=0;j<13;j++)
		{
			cp = cp->next;
		}
		
		cp->next = NULL;

	
}

int main()
{
	cout<<"Hello Welcome to casino"<<endl;
	
	for(int i=1;i<14;i++)
	{

	create(i,"Hearts");
	create(i,"Spade");
	create(i,"Diamonds");
	create(i,"Clubs");
}
	display();
	
	cout<<"shuffled array ----"<<endl;
	for(int i=0;i<10;i++)
	{

	shuffle();
   }
	display();
	

	
	system("pause");

}

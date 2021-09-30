#include<iostream>

using namespace std;

typedef struct Node
{
	int data;
	Node *next; //link
}Nodetype;
typedef Nodetype *Nodeptr;

//Ham tao nut
Nodeptr CreateNode(int x)
{
	Nodeptr p;
	p=new Node;
	p->data=x;
	p->next=NULL;
	return p;	
}


int main()
{
	
	Nodeptr Head, Tail;
	//khoi tao xau rong
	Head=Tail=NULL;	
	
	Nodeptr p;
	p=CreateNode(11);
	if(Head==NULL)
	{
		Head=p;
		Tail=p;
	}
	Nodeptr q;
	q=CreateNode(13);
	if(Head!=NULL)
	{
		Tail->next=q;
		Tail=q;
		
	}
	cout<<Tail->data<<"\t"<<Tail->next<<endl;
	Nodeptr g;
	g=CreateNode(4);
	if(Head!=NULL)
	{
		Tail->next=g;
		Tail=g;
		
	}
	
	cout<<Tail->data<<"\t"<<Tail->next<<endl;
	return 0;
}
#include<iostream>
using namespace std;

typedef struct Node
{
	int data;
	Node *Next;	//*link;
}Nodetype;

typedef Nodetype *Nodeptr;//typedef Node *Nodeptr ;

Nodeptr CreateNode(int x)
{
	Nodeptr p;
	p=new Node;
	p->data=x;
	p->Next=NULL;
	return p;
}
void InsertLast(Nodeptr &Head,Nodeptr &Tail,Nodeptr p)
{

	if(Head==NULL)
	{
		Head=p;
		Tail=p;
	}
	else
	{
		Tail->Next=p;
		Tail=p;
	}
}

void CreateList(Nodeptr &Head,Nodeptr &Tail)
{
	int x;
	Nodeptr p;
	while(1)//0 false 1 true
	{
		cout<<"\n nhap x, Nhap -1 de ket thuc ";cin>>x;
		if(x==-1)break;
		p=CreateNode(x);
		InsertLast(Head,Tail,p);
	}
}
void Print(Nodeptr &Head,Nodeptr &Tail)
{
	Nodeptr p=Head;
	if(Head==NULL) cout<<"\n Danh sach rong";
	else 
		while(p!=NULL)
		{
			cout<<"\t"<<p->data;
			p=p->Next;
		}
}
void InTheoYeucau(Nodeptr &Head,Nodeptr &Tail)
{
	Nodeptr p=Head;
	if(Head==NULL) cout<<"\n Danh sach rong";
	else 
		while(p!=NULL)
		{
			if(p->data%2==0)
				if(p->data>10 && p->data<20)
					cout<<"\t"<<p->data;
			p=p->Next;
		}
}

int main()
{
	Nodeptr Head,Tail;
	Head=Tail=NULL;
	int chon;
	do{
		cout<<"\n 1. Nhap N phan tu:";
		cout<<"\n 2. Xuat ra man hình cac so chan lon hon 10 va nho hon 20 ";
		cout<<"\n 3. Ket thuc";
		cout<<"\n Ban chon: ";cin>>chon;
		switch(chon)
		{
			case 1: 
					CreateList(Head,Tail);
					cout<<"\n Danh sach da nhap "<<endl;
					Print(Head,Tail);
					break;
			case 2:  
					cout<<"\n Danh sach cac gia tri lon hon 10 nho hon 20:"<<endl;
					InTheoYeucau(Head,Tail);break;			
		}
	}while(chon!=3);

	
	
	delete Head,Tail,Head2,Tail2;
	return 0;
}
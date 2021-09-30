#include<iostream>
using namespace std;
struct mathang
{
	string ma;
	string loai;
	string ten;
	int soluong;
	float donggia;
	string quatang;
};
typedef struct Node
{
	mathang Data;
	Node *Next;
}Nodetype;
typedef Nodetype*Nodeptr;
Nodeptr CreateNode(mathang x)
{
	Nodeptr p;
	p=new Node;
	p->Data=x;
	p->Next=NULL;
	return p;
}
void InserterLast(Nodeptr &Head, Nodeptr &Tail, Nodeptr p)
{
	if(Head==NULL)Head=Tail=p;
	else
	{
		Tail->Next=p;
		Tail=p;
	}
}
void Nhap(mathang &x)
{
	getline(cin,x.ma);
	getline(cin,x.loai);
	getline(cin,x.ten);
	cin>>x.soluong;
	cin>>x.donggia;
	getline(cin,x.quatang);
} 
void CreateList(Nodeptr &Head, Nodeptr &Tail)
{
	Head=Tail=NULL;
	Nodeptr p;
	mathang x[3]=
	{
		{"MH01","banh Snack","Snack cua",1000,10,"co"},
		{"MH02","keo","keo mut",500,2,"khong"},
		{"MH03","banh trang","Bon Bon",600,6,"co"}
	};
		for(int i=0;i<3;i++)
	{
		p=CreateNode(x[i]);
		InserterLast(Head,Tail,p);
	}
}
void Inmathang(mathang x)
{
	cout<<"\n"<<x.ma<<"\t"<<x.loai<<"\t"<<x.ten<<"\t\t"<<x.soluong;
	cout<<"\t"<<x.donggia<<"\t"<<x.quatang<<endl; 
}
void Print(Nodeptr &Head, Nodeptr &Tail)
{
	int dem=0;
	Nodeptr p=Head;
	while(p!=NULL)
	{
		Inmathang(p->Data);
		p=p->Next;
	}
}
int InTheoYeuCau(Nodeptr &Head, Nodeptr &Tail)
{
	int dem=0;
	Nodeptr p=Head;
	while(p!=NULL)
	{
		if(p->Data.quatang=="co")
			Inmathang(p->Data);
		p=p->Next;
	}
	return dem;
}
int main()
{
	Nodeptr Head, Tail;
	Head=NULL;
	Tail=NULL;
	int chon;
	do{
		
		cout<<"\n 1. Nhap Danh sach";
		cout<<"\n 2. In danh sach cac mat hang thoa dieu kien";
		cout<<"\n 3. Ket thuc";
		cout<<"\n ban chon: ";
		cin>>chon;
		switch(chon)
		{
			case 1:
					CreateList(Head, Tail);
					cout<<"\n Danh sach vu nhap: ";
					Print(Head, Tail);
					break;
			case 2:
					cout<<"\n In Danh sach cac mat hang thoa dieu kien: ";
					InTheoYeuCau(Head, Tail);
					break;
		}
	}while(chon!=3);

	return 0;
}
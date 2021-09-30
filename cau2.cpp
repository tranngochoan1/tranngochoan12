#include<iostream>
using namespace std;
struct hang
{
	string ma;
	string loai;
	string ten;
	int soluong;
	float donggia;
	string quatang;
	
};
int main()
{
	
		hang x[3]=
		{
			{"MH01","Banh snack","snack cua",1000,10,"co"},
			{"MH02","Keo","keo mut",500,2,"khong"},
			{"MH03","banh trang","Bon Bon",600,6,"co"}
		};
		for(int i=0;i<3;i++)
		{
			cout<<"\n "<<x[i].ma;
			cout<<"\t "<<x[i].loai;
			cout<<"\t "<<x[i].ten;
			cout<<"\t "<<x[i].soluong;
			cout<<"\t "<<x[i].donggia;
			cout<<"\t "<<x[i].quatang;
		}
		cout<<"\n danh sach cac mat hang qua tang: "<<endl;
		for(int i=0;i<3;i++)
		if(x[i].quatang=="co")
		{
			cout<<"\n "<<x[i].ma;
			cout<<"\t "<<x[i].loai;
			cout<<"\t "<<x[i].ten;
			cout<<"\t "<<x[i].soluong;
			cout<<"\t "<<x[i].donggia;
			cout<<"\t "<<x[i].quatang;
		} 
		cout<<"\n";
	return 0;
	
}
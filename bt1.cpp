#include<iostream>
using namespace std;
int main()
{
	char *pi;
	pi=new char;
	cout<<"\n nhap ky tu :";
	cin>>*pi;
	if((*pi>='0'&&*pi<='9')||(*pi>='a'&&*pi<='z')||(*pi>='A'&&*pi<='Z'))
	{
		cout<<"\n ma ASCII tuong ung:"<<int(*pi);
	}
	else cout<<"\n chinh no:"<<*pi<<endl;
	delete pi;
	
}
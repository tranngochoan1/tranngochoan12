#include<iostream>
using namespace std;
int main()
{
	int *p;
	int n;
	cout<<"\n nhap n: ";
	cin>>n;
	p=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<" \n nhap gia tri thu "<<i<<":";
		cin>>*(p+i);	
	}
	cout<<"\n day so da nhap la: "<<endl;
		for(int i=0;i<n;i++)
		cout<<*(p+i)<<"\t";
		
		int dem=0;
		for(int i=0;i<n;i++)
		if(*(p+i)%2==0 )
		if(*(p+i)>10 && *(p+i)<20)
		dem=dem+1;
		cout<<"\n dem duoc co "<<dem<<"so thoa dieu kien ";
		int *pm;
		int m=0;
		pm=new int[dem];
		for(int i=0;i<n;i++)
			if(*(p+i)%2==0 )
		if(*(p+i)>10 && *(p+i)<20)
		{
			*(pm+m)=*(p+i);
			m++;
		}
		cout<<"\n day pm duoc tro toi pm la: "<<endl;
		for(int i=0;i<m;i++)
		 cout<<*(pm+i)<<"\t";
		 delete[]p;
		 delete[]pm;
		
	return 0;


}


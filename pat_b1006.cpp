#include<iostream>

using namespace std;

int main()

{
	int n;
	int bai,shi,ge;
//	flag1=flag2=0;
	cin>>n;
	ge=n%10;
	n/=10;
	shi=n%10;
	n/=10;
	bai=n%10;
	

	for(int i=0;i<bai;i++)
	cout<<"B";
	for(int j=0;j<shi;j++)
	cout<<"S";
	for(int m=1;m<=ge;m++)
	cout<<m;	
	
	cout<<endl;
	return 0;
} 

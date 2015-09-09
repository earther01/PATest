#include<iostream>
//#include<iomanip>
using namespace std;

int main()
{
	const int N=1001;
	int n,j,i=0,flag=1;
	int a[N]={0};
	int a1,a2,a3,a4,a5;
	float avg=0.0;
	a1=a2=a3=a4=a5=0;
	
	cin>>n;
	
	while(i<n)
	{
		cin>>a[i];
		i++;
	}

	for(j=0;j<n;j++)
	{
		if(a[j]%5==0&&a[j]%2==0)a1+=a[j];
		if(a[j]%5==1)
			{
			flag++;
			if(flag%2==0)a2=a2+a[j];
			else a2=a2-a[j];
			}
		if(a[j]%5==2)a3++;
		if(a[j]%5==3)
		{
			avg+=a[j];
			a4++;
		}
		if(a[j]%5==4)
		{
			if(a5<a[j])a5=a[j];
		}
	}

	if(a1==0)cout<<"N"<<" ";
	else cout<<a1<<" ";
	if(flag==1)cout<<"N"<<" ";
	else cout<<a2<<" ";
	if(a3==0)cout<<"N"<<" ";
	else cout<<a3<<" ";

	if(a4>0){
	cout.precision(1);
	cout<<fixed<<avg/a4<<" ";
	//cout.precision(0);
	}
	else cout<<"N"<<" ";
	if(a5==0)cout<<"N"<<endl;
	else cout<<a5<<endl;
	
	return 0;
}

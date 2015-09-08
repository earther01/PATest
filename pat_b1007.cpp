#include<iostream>
#include<math.h>

using namespace std;

int main()
{ 
 	const int N=100001;
	int n,m,flag,sum=0;
	int su[N]={0};
	int count=1;
	su[0]=2;
	cin>>n;
	
	for(int i=3;i<=n;i++)
	{ 
		m=sqrt(i);
		flag=0;
		for(int j=2;j<=m;j++)
		{
			if(i%j==0)
			{	
				flag=1;
				break;
			}
			
		}
     	//cout<<flag;
		if(flag==0){
		su[count++]=i;
		//cout<<i;
		}
	}
	
	for(int k=0;k<n-1;k++)
	{
		if(su[k+1]-su[k]==2)sum++;
	}
	cout<<sum<<endl;
	return 0;
}

#include<iostream>
#include<math.h>

using namespace std;
bool issushu(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return false;
	}
	return true;
}

int main()
{
	const int N=1000001;
	int m,n,flag=0,j=2,count=0;
	cin>>m>>n;
	while(j<N)
	{
		if(issushu(j))
		{
			count++;
			if(count>=m)
			{
			
			flag++;
			if(flag%10==1)cout<<j;
			else if(flag%10==0)cout<<" "<<j<<endl;
			else cout<<" "<<j;
			}
		    if(count==n)
			{
				//sign=1;
				//cout<<endl;
				break;
			}
		}
	j++;
	}
	
	
	
	return 0;
 } 

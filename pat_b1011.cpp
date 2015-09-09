#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long long a ,b ,c,n,i=1;
//	unsigned int e,f,g;
	//int a1,b1,c1;
	//a1=b1=c1=0;
	cin>>n;
	while(i<=n)
	{
		cin>>a>>b>>c;
	    if(a-c>-b)cout<<"Case #"<<i<<": true"<<endl;
		else cout<<"Case #"<<i<<": false"<<endl;
		
		i++;
	}
	
	
	return 0;
}

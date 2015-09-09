#include<iostream>

using namespace std;

int main()
{
	int a,b;
	int count=0;
	while(cin>>a>>b)
	{
		
		if(count==0){
		
		if(a==0||b==0)
		cout<<0<<" "<<0;
	   else cout<<a*b<<" "<<b-1;
	}
	else
	{
		if(a==0||b==0);
		//cout<<" "<<0<<" "<<0;
		//if(b==0)cout<<" "<<a<<" "<<0;
		else cout<<" "<<a*b<<" "<<b-1;
		
	}
		count++;
	}
	
	
	
	return 0;
}

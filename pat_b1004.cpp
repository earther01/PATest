#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{

	int n,i,max,min,flag1,flag2;
	cin>>n;
	i=0;
	flag1=flag2=max=min=0;
	string a[n][2];
	int b[n];
	while(i<n)
	{
		cin>>a[i][0]>>a[i][1];
		cin>>b[i];
		i++;
	}
	for(int j=0;j<n;j++)
	{
		
		if(b[max]<b[j])
		max=j;			
		if(b[min]>b[j])
		min=j;
		
	}
	
//	if(a[0][2]<a[1][2])cout<<"YES"<<endl;
//cout<<a[0][2]<<" "<<a[1][2]<<endl;
cout<<a[max][0]<<" "<<a[max][1]<<endl;
cout<<a[min][0]<<" "<<a[min][1]<<endl;
return 0;
}

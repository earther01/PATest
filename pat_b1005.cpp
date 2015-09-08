#include<iostream>
#include<algorithm>

using namespace std;

int num[101];
int mark[101]={0};
int num2[101];

bool cmp(int a,int b)
{
	return a>b;
}

void check(int number,int data)
{
	int c[101];
	int j=0;
	while(data!=1)
	{
		if(data%2==0)
		{
		data/=2;
		c[j]=data;
		}
		else 
		{
			data=(data*3+1)/2;
			c[j]=data;
		}
		j++;
	}
	//±ê¼ÇÒÑ³öÏÖµÄÊý×Ö
	for(int k=0;k<j;k++)
	{
	for(int d=0;d<number;d++)
	{
		if(c[k]==num[d])
		{
			mark[d]=1;
			break;
		}
	 } 
	}
}
int main()
{
	int n,i=0;
	int count=0;
	cin>>n;
	while(i<n)
	{
		cin>>num[i];
		i++;
	}
	for(i=0;i<n;i++)
	{
		if(mark[i]!=1)check(n,num[i]);
		
	}
	//½«·Ç¹Ø¼üÊý´æÈënum2 
	for(i=0;i<n;i++)
	{
		if(mark[i]!=1)num2[count++]=num[i];
	 } 
	sort(num2,num2+count,cmp);
	
	for(i=0;i<count-1;i++)
	cout<<num2[i]<<" ";
	cout<<num2[count-1]<<endl;
	
return 0;}

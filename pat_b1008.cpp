#include<iostream>
using namespace std;
int main()
{
	const int N=206;
	int n,m,i=0;
	int a[N]={0};
	cin>>n>>m;
	while(i<n)cin>>a[i++];
	m%=n;
	for(int j=n-1;j>=0;j--)a[j+m]=a[j];
	for(int k=0;k<m;k++)a[k]=a[n+k];
	
	for(int b=0;b<n-1;b++)
	cout<<a[b]<<" ";
	cout<<a[n-1]<<endl;
		
	return 0;
}

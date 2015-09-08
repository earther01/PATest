#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
int k,count=0;
cin>>k;
while(k!=1)
{
if(k%2==0)
{
	k/=2;
}
else if(k%2!=0)
{
	k=(k*3+1)/2;
}
count++;
}

cout<<count;
	
return 0;
}

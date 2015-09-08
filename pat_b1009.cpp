#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char inStr[81]={0};
	char outStr[41][81]={0};
	
	int i,j,num=0;
    	gets(inStr);
	
	int len=strlen(inStr);
	j=0;
	for(i=0;i<len;i++)
	{
		if(inStr[i]==' ')
		{
			num++;
			j=0;
			continue;
		}
		outStr[num][j++]=inStr[i];
	}
	
	while(num>0)
	{
		cout<<outStr[num--]<<" ";
	}
	cout<<outStr[0]<<endl;

	return 0;
}


//http://pat.zju.edu.cn/contests/pat-b-practise/1002

#include<iostream>
#include<string>

using namespace std;
int main()
{
	int sum=0;
	string s;
	int count=0;
	const string pin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string result;
	//for(int m=0;m<10;m++)
	//cout<<pin[m];
cin>>s;
	for(int i=0;i<s.length();i++)
	{
		sum+=(s[i])-'0';
	}
	while(sum!=0)
	{
		int tmp = sum%10;
		result[count++]=tmp;
		sum/=10;
	}
//	while(count!=0)
//	{
	//	if(count-1!=0)
	//		cout<<result[--count]<<" ";
	//	else
	//		cout<<result[--count];



//	}
for(int j=count-1;j>0;j--)
cout<<pin[result[j]]<<" ";
cout<<pin[result[0]]<<endl;
//	system("pause");
	return 0;
}

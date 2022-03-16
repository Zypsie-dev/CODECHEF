#include <iostream>
using namespace std;

int main() 
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
	// your code goes here
	string s; cin>>s;
	int i=0; int j=i+1;
	while(i<n-1)
	{
		swap(s[i],s[j]);
		i=j+1;
		j=i+1;
	}
	for(int i=0;i<n;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]='a'-s[i]+'z';
		}
	}
	cout<<s<<"\n";
	}
	return 0;
}
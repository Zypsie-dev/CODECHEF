#include<iostream>
using namespace std;
void encode()
{
    int i=0,j=i+1,n;
    cin>>n;
    char *s=new char[n];
    char *ans=new char[n];
    cin>>s;
    //swap
	while(i<n-1)
	{
		swap(s[i],s[j]);
		i=j+1;
		j=i+1;
	}

//change the value
    int a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int b[26]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
    for(i=0;i<n;i++)
    {
        for(j=0;j<26;j++)
        {
            if(s[i]==a[j])
            {
                ans[i]=b[j];
            }
        }
    }
    cout<<ans;
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        encode();
    return 0;
}
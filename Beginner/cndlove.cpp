#include<iostream>
using namespace std;
void test()
{
    int n,i,candy,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>candy;
        sum+=candy;
    }
    if(sum%2==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        test();
    }
    return 0;
}
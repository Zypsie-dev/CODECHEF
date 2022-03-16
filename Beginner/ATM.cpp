#include<iostream>
using namespace std;
int test()
{
    int n,k,a;
    cin>>n>>k;
    while(n!=0)
    {
        cin>>a;
        if(a<=k)
        {
            cout<<1;
            k-=a;
        }
        else
            cout<<0;
        n--;
    }
    cout<<endl;
}
int main()
{
    int t,i;
    cin>>t;
    while(t!=0)
    {
        test();
        t--;
    }
    return 0;
}
#include<iostream>
using namespace std;
void test()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a<=e && (b+c)<=d)
        cout<<"YES"<<endl;
    else if(b<=e && (a+c)<=d)
        cout<<"YES"<<endl;
    else if(c<=e && (a+b)<=d)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
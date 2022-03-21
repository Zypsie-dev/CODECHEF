#include<iostream>
using namespace std;
void test()
{
    unsigned int n;
    cin>>n;
    if(n>=1 && n<=1000000000)
    {
        cout<<n/6<<endl;
    }
    else
        cout<<0<<endl;
}
int main()
{
    int t;
    cin>>t;
    if(t>0&&t<=100)
    {
        while(t--)
        {
            test(); 
        }
    }
    return 0;
}
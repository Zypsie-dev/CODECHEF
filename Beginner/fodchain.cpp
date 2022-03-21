#include<iostream>
using namespace std;
void test()
{
    int E,K;
    cin>>E>>K;
    int count=1;
    while((E/K)!=0)
    {
        E=E/K;
        count++;
    }
    cout<<count<<endl;
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
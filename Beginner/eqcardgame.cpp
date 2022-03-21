#include<iostream>
using namespace std;
void test()
{
    int k;
    int decks=52;
    cin>>k;
    if(k<=decks)
        cout<<decks%k<<endl;
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
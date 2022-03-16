#include<iostream>
using namespace std;
int test()
{
    int a[2],b[2],c[2];
    cin>>a[0]>>a[1];
    cin>>b[0]>>b[1];
    cin>>c[0]>>c[1];
    if(a[0]==b[0] || a[0]==b[1])
    {
        if(a[1]==b[1]||a[1]==b[0])
            return 1;
        else
            return 0;
    }
    else if(a[0]==c[0] || a[0]==c[1])
    {
        if(a[1]==c[1]||a[1]==c[0])
            return 2;
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        cout<<test()<<endl;
        t--;
    }
    return 0;
}
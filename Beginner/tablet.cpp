#include<iostream>
using namespace std;
void tester()
{
    int i,a[2],n,b;
    int w,h,p;
    a[1]=0;
    cin>>n>>b;
    for(i=0;i<n;i++)
    {
        cin>>w>>h>>p;
        a[0]=w*h;
        if(p<=b)
        {
            if(a[0]>a[1])
            {
                a[1]=a[0];
            }
        }
    }
    if(a[1]!=0)
        cout<<a[1]<<endl;
    else
        cout<<"no tablet"<<endl;
}
int main()
{
    int t,n,b;
    cin>>t;
    while(t--)
    {
        tester();
    }
    return 0;
}
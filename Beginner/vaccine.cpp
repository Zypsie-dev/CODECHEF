#include<iostream>
using namespace std;
int vaccine()
{
    int i,n,p,x,y,time=0;
    cin>>n>>p>>x>>y;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i<=p)
        {
            if(a[i]==0)
                time+=x;
            else if(a[i]==1)
                time+=y;
        }
    }
    return time;
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        cout<<vaccine()<<endl;
        t--;
    }
    return 0;
}
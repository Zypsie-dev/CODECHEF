#include<iostream>
using namespace std;
int main()
{
    int n,x,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x<=15)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
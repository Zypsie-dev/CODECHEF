#include<iostream>
using namespace std;
int main()
{
    int t;
    int x,y,z;
    cin>>t;
    while(t--)
    {
    cin>>x>>y>>z;
    if((x+y+z)<=101)
    {
        if(x>50)
            cout<<"A"<<endl;
        else if(y>50)
            cout<<"B"<<endl;
        else if(z>50)
            cout<<"C"<<endl;
        else
            cout<<"NOTA"<<endl;
    }
    else
    {
        cout<<"NOTA"<<endl;
    }
    }
    return 0;
}
#include<iostream>
using namespace std;
void test()
{
}
int main()
{    
    int t;
    cin>>t;
    //if(t>0 && t<101)
    //{
        while(t--)
        {
            float a,b,c;
            cin>>a>>b>>c;
            //if(a>0 && b>0 && c>0 && a<101 && b<101 && c<101)
            //{
            if(a>=b &&a>=c)
                cout<<a<<endl;
            else if(b>=a&&b>=c)
                cout<<b<<endl;
            else
                cout<<c<<endl;
    //}
        }
    //}
    return 0;
}
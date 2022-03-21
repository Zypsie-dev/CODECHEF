#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    char s[6];
    char test[6];
    while(t--)
    {
        cin>>s;
        cin>>test;
        for(i=0;i<5;i++)
        {
            if(int(s[i])==int(test[i]))
            {
                cout<<'g';
            }
            else
                cout<<'b';
        }
        cout<<endl;
    }
    return 0;
}
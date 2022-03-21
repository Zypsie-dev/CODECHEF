#include<iostream>
#include<string>
using namespace std;
string change(string &std)
{
    int i;
    for ( i = 0; i < std.length(); i++)
    {
        if(std[i]=='<')
        {
            std[i]='>';
        }
        else if(std[i]=='>')
        {
            std[i]='<';
        }
        else
            continue;
    }
    return std;
}
void test()
{
    string s;
    int i,count=0,j,flag;
    cin>>s;
    s=change(s);
    for(i=0;i<s.length()-1;i++)
    {
        if(s[i]=='<'&&s[i+1]=='<' || s[i]=='>'&&s[i+1]=='>' )
        {
            flag=0;
            break;
        }
        else
        {
            if(s[i]=='>'&&s[i+1]=='<')
            {
                count++;
            }
            flag=1;
        }
    }
    if(flag!=0)
        cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        test();
    }
    return 0;
}
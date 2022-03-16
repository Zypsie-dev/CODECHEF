#include<iostream>
using namespace std;
inline void test()
{
    int d[3],s[3],i,total[2]={0,0},check=0;
    cin>>d[0]>>d[1]>>d[2];
    cin>>s[0]>>s[1]>>s[2];
    total[0]=d[0]+d[1]+d[2];
    total[1]=s[0]+s[1]+s[2];
    if(total[0]>total[1])
    {
        cout<<"DRAGON"<<endl;
        check=1;
    }
    else if(total[1]>total[0])
    {
        cout<<"SLOTH"<<endl;
        check=1;
    }
    else
    for(i=0;i<3;i++)
    {
    if(d[i]>s[i])
    {
        cout<<"DRAGON"<<endl;
        check=1;
        break;
    }
    else if(d[i]<s[i])
    {
        cout<<"SLOTH"<<endl;
        check=1;
        break;
    }
    }
    if(check==0)
    {
        cout<<"TIE"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        test();
        t--;
    }
    return 0;
}
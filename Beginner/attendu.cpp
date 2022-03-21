#include<iostream>
using namespace std;
const int total=120;
void test()
{
    int n,i,count=0,left,present;
    string num;
    cin>>n;
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(num[i]=='1')
        {
            count++;
        }
    }
    left=total-n;
    present=left+count;
    if(present>=90)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
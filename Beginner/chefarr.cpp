#include<iostream>
using namespace std;
void test(){
    int i ,j ,n;
    int a[50];
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int cn = 0;
    for ( i = 0; i < n; i++)
    {
    int sum=0;
    int pro=1;
        for(j=i;j<n;j++)
        {
            sum+=a[j];
            pro*=a[j];
            if(sum==pro)
            {
                cn++;
            }
        }
    }
    cout<<cn<<endl;
}
int main()
{
    unsigned int t;
    cin>>t;
    if(t<=50)
    {
        while(t--)
        {
            test();
        }
    }
    return 0;
}
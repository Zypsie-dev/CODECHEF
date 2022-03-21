#include<iostream>
using namespace std;
void test()
{
    int i,j,n;
    cin>>n;
    int *day=new int[n];
    if(n<=50)
    {
        for(i=0;i<n;i++)
        {
            cin>>day[i];
        }
        int count=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {                
                if(day[i]==day[j])
                {
                    count++;
                    break;
                }   
            }
        }
        cout<<n-count<<endl;   
    }
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
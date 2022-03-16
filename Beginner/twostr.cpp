#include<iostream>
#include <cstring>
using namespace std;
void str(){
    char str1[100],str2[100];
    int n,i,max=0,min=0;
    cin>>str1;
    cin>>str2;
    n=strlen(str1);
    if(n!=(strlen(str2)))
    {
        cout<<"Error both string should be equal size."<<endl;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(str1[i]=='?' || str2[i]=='?')
            {
                max++;
            }
            else if(str1[i]!=str2[i])
            {
                min++;
                max++;
            }
            else
            {
                continue;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        str();
    }
    return 0;
}
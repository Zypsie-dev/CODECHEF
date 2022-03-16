#include<iostream>
using namespace std;
std::string remove_char( std::string str, char ch )
{
    // remove all occurrences of char ch from str
    str.erase( std::remove( str.begin(), str.end(), ch ), str.end() ) ;
    return str ;
}
void test()
{
    int n;
    cin>>n;
    std::string str;
    cin>>str;
    int i,j,count;
    char test;
    for (i = 0; i < str.length(); i++)
    {
        count=0;
        test=str[i];
        for ( j = 0; j < str.length(); j++)
        {
            if(str[j]==test)
                count++;
        }
        if((count%2)==0)
        {
            str=remove_char(str,test);
        }
    }
    if(str.empty())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int t;
    while(t--)
    {
        test();
    }
    return 0;
}
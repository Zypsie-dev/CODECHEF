#include<iostream>
using namespace std;
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    int min=w1+x1*m;
	    int max=w1+x2*m;
	    if(min<=w2 && w2<=max)
	     {
            cout<<"1"<<endl;
        }
	    else
	       cout<<"0"<<endl;
	    }
    return 0;
}
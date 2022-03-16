#include<iostream>
using namespace std;
void game()
{
    int a,b,i=1,j;
    int total[2]={0,0};
    cin>>a>>b;
    while(true)
    {
        j=i+1;
        total[0]+=i;
        total[1]+=j;
        i+=2;
        if(total[0]>a)
        {
            cout<<"Bob"<<endl;
            break;
        }
        else if(total[1]>b)
        {
            cout<<"Limak"<<endl;
            break;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        game();
    }
    return 0;
}
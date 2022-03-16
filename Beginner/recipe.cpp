#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
int main()
{
    int t,n,i,divisor;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int *recipe= new int[n];
        for(i=0;i<n;i++)
        {
            cin>>recipe[i];
        }
        divisor=findGCD(recipe,n);
        for ( i = 0; i < n; i++)
        {
            cout<<recipe[i]/divisor<<" ";
        }
        cout<<endl;
    }
    return 0;
}
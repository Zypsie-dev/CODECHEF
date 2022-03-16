#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,K,rest=0,day=0;
	    cin>>N>>K;
	    int A[N];
	    for(int i=1;i<=N;i++){
	        cin>>A[i];
	    }
	    
	    for(int i=1;i<=N;i++){
	        if(A[i]>=K){
	            day++;
	            rest = A[i]-K;
	            A[i+1] = A[i+1]+rest;
	        }
	        else if(A[i]<K){
	            cout<<"NO"<<" "<<i<<"\n";
	            break;
	        }
	    }
	    if(day==N){
	        cout<<"YES"<<"\n";
	    }
	    
	}
	return 0;
}	
	

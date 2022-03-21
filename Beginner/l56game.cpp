#include <iostream>
using namespace std;

int main() {
     int t;
     cin >> t;
     while(t--)
     {
          int N,A[100],odd=0;
          cin >> N;
          for(int i=0; i<N; i++)
          {
               cin >> A[i];
          }
          for(int i=0; i<N; i++)
          {
               if(A[i]%2==1)  odd++;
          }
          if(odd%2==1 && N!=1) cout << "2" << endl;
          else cout << "1" << endl;
     }
	return 0;
}

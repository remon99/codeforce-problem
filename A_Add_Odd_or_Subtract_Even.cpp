#include<bits/stdc++.h>
using namespace std;
#define pys cout<<"YES"<<endl
#define pyn cout<<"NO"<<endl
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define s second 
typedef vector<int>		vi;
typedef long long ll;

void solve() {
    int a,b;
    cin>>a>>b;
    if(a==b) cout<<0<<endl;
    else{
            if(a>b){
                if((a%2==0 and b%2==0) or (a%2!=0 and b%2!=0)) cout<<1<<endl;
                else cout<<2<<endl;
            }
            else{
                if((a%2==0 and b%2==0) or (a%2!=0 and b%2!=0)) cout<<2<<endl;
                else cout<<1<<endl;
            }
    }    
    
    
  }
  
  int main() {
      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  
      int t = 1;
      cin >> t;
      while(t--) {
        solve();
      }
  
      return 0;
  }

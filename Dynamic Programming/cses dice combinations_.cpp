//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void IO(){
      #ifndef ONLINE_JUDGE
         freopen("in.txt","r", stdin);
        //freopen("out.txt", "w", stdout);
         freopen("Error.txt", "w", stderr);
      #endif // ONLINE_JUDGE 
}

const int MOD = 1000000000 + 7;

void solve(int t){   
   int n;
   cin >> n;

   int ans[n+1] = {};
   ans[0] = 1;

   rep(i,1,n+1){
      rep(j,1,min(7LL,i+1)){
         ans[i] += ans[i-j];
         ans[i] %= MOD;
      }
   }

   cout << ans[n] << '\n';
}

int32_t main()
{
      IO();    
      
      int T = 1;
     // cin >> T;

      rep(i,1,T+1){
         solve(i);
      }

     return 0;
}
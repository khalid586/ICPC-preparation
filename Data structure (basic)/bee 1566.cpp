//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void IO(){
      std::ios::sync_with_stdio(false);cin.tie(NULL);
      #ifndef ONLINE_JUDGE
         freopen("in.txt","r", stdin);
        //freopen("out.txt", "w", stdout);
         freopen("Error.txt", "w", stderr);
      #endif // ONLINE_JUDGE 
}

void solve(int t){   
   int n;
   cin >> n;

   int a[300] = {};
   rep(i,0,n){
      int x;
      cin >> x;
      a[x]++;
   }
   
   vector<int> ans;

   rep(i,0,300){
      int sz = a[i];
      rep(j,0,sz){
         ans.push_back(i);
      }
   }
   rep(i,0,ans.size()){
      cout << ans[i];
      cout << (i == n-1 ? '\n':' ');
   }
}

int32_t main()
{
      IO();    
      
      int T = 1;
      cin >> T;

      rep(i,1,T+1){
         solve(i);
      }

     return 0;
}


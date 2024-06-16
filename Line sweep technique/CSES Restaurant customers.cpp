//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void solve(int t){
   int n ;
   cin >> n;

   vector<pair<int,int>> time;

   rep(i,0,n){
      int a,b;
      cin >> a >> b;
      time.push_back({a,1});
      time.push_back({b,-1});      
   }

   sort(time.begin(),time.end());
   int curr = 0 , mx = 0 , sz = time.size();

   rep(i,0,sz){
      curr += time[i].second;
      mx = max(curr,mx);
   }

   cout << mx << '\n';

}

int32_t main()
{
        #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
     //freopen("out.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE     
     int T = 1;
  //   cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}


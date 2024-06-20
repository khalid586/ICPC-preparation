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

void solve(){   
   int n , k;
   cin >> n >> k;

   double a[n];
   rep(i,0,n){
      cin >> a[i];
   }

   double ans , low = 0, high = 1e8;

   while(low <= high){
      double mid = low + (high - low) / 2.0;

      int count = 0;

      for (auto x:a){
         count += (x / mid);
      }


      if(count >= k){
         ans = mid;
         low = mid + 0.000001;
      }else{
         high = mid - 0.000001;
      }
   }

   cout << setprecision(6) << fixed << ans << '\n';
}

int32_t main()
{
      IO();    
      
      solve();

     return 0;
}
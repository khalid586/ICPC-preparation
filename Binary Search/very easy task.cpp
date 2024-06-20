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

void solve(int t){
   int n , x , y;
   cin >> n >> x >> y;

   int low = 1 , high = INT_MAX, ans = INT_MAX;

   while(low <= high){
      int mid = low + (high - low) / 2;

      int mn = min(x,y) , mx = max(x,y);

      int copies = mid / mn + (mid - mn) / mx;

      if(copies >= n){
         ans = mid;
         high = mid - 1;
      }else{
         low = mid + 1;
      }
   }
   cout << ans << '\n';
}

int32_t main()
{
      IO();    
      
      int T = 1;
  //   cin >> T;

      rep(i,1,T+1){
         solve(i);
      }

     return 0;
}


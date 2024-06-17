//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)
#define lcm(a,b)        (a*b)/(__gcd(a,b))

void IO(){
      #ifndef ONLINE_JUDGE
         freopen("in.txt","r", stdin);
        //freopen("out.txt", "w", stdout);
         freopen("Error.txt", "w", stderr);
      #endif // ONLINE_JUDGE 
}

void solve(int tt){   
   int n , x;
   cin >> n >> x;

   int a[n] , mx = -1;

   rep(i,0,n){
      cin >> a[i];
      mx = max(mx,a[i]);
   }

   int hi = mx * x, low = 0;

   while(low < hi){
      int mid = low + (hi - low) / 2;      
      int t = 0;

      for(auto time:a){
         t += mid / time;
         
         if(t >= x){
            break;
         }
      }

      if(t >= x){
         hi = mid;
      }else{
         low = mid + 1;
      }
   }

   cout << low << '\n';
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


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
   int h, w , n;
   cin >> w >> h >> n;

   int ans = INT_MAX, low = 1, high = 1e18;
   // cout << high << ' ';

   while(low <= high){
      int mid = low + (high - low) / 2;

      int length = mid;
      int count = min((length / w), 1000000000ll) * min((length / h),1000000000ll);

      if(count >= n){
         high = mid - 1;
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
    //  cin >> T;

      rep(i,1,T+1){
         solve(i);
      }

     return 0;
}
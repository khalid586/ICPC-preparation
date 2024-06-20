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

int TotalDamage(int a[],int time[],int n, int target,int mid){
      int damage = 0;
      rep(i,0,n){
         int hit = min(1000000000LL,(mid-1) / time[i]);
         damage += hit * a[i];

         if(damage >= target) break; // without this WA on test case 16
      }
      return damage;
}

void solve(int t){
   int target , n;
   cin >> target >> n;

   int a[n] , time[n] , initial = 0;

   rep(i,0,n){
      cin >> a[i];
      initial += a[i];
   }
   rep(i,0,n){
      cin >> time[i];
   }

   int ans = INT_MAX, low =  1 , high = 1e12;

   while(low <= high){
      int mid = low + (high - low) / 2;

      int damage = initial + TotalDamage(a,time,n,target,mid);

      if(damage >= target){
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
     cin >> T;

      rep(i,1,T+1){
         solve(i);
      }

     return 0;
}


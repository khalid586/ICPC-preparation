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
    int n , k;
    cin >> n >> k;

    int a[n];
    vector<int> cost(n,INT_MAX);
    cost[0] = 0;

    rep(i,0,n){
        cin >> a[i];
    }

    rep(i,1,n){
        rep(j,1,min(i+1,k+1)){
            cost[i] = min(cost[i],cost[i-j] + abs(a[i] - a[i - j]));
        }
    }

    cout << cost[n-1] << '\n';
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


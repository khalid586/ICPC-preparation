#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


//Starting in the name of Allah(THE ALMIGHTY)

#define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          // freopen("out.txt", "w", stdout);
          // freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}


const int N = 1e6+7;

void solve(int test){
    int n,t;
    cin >> n >> t;  

    int a[n];

    rep(i,0,n){
        cin >> a[i];
    }

    int curr = (a[0] <= t ? 1:0) , mx = 0 , l = 0 , r = 1;
    int sm = a[l];

    while(r < n){
        if(sm < t){
            sm += a[r];
            ++r;
        }else{
            sm -= a[l];
            ++l;
        }

        if(sm <= t){
            curr = (r-l);
        }
        mx = max(curr,mx);
    }

    mx = max(mx,curr);

    cout << mx << '\n';
}

int32_t main()
{
     FastIO();

     // cout << 14*14 << '\n';

     int T = 1;
   //  cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}


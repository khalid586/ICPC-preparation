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
    int n,k;
    cin >> n >> k;

    int  ans = 1e8 , ev = 0;

    rep(i,0,n){
        int x;
        cin >> x;

        if(x % 2 == 0) ++ev;

        if(x % k == 0){
            ans = 0;
        }else{
            ans = min(ans,k - (x%k));
        }
    }

    if(k == 4){
        ans = min(ans,max(0ll, 2 - ev));
    }

    cout << ans << '\n';
}

int32_t main()
{
     FastIO();

     // cout << 14*14 << '\n';

     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}




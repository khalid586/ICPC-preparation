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

bool cmp(int a,int b){
    return a > b;
}

void solve(int test){
    int n , target;
    cin >> n >> target;

    int a[n];
    rep(i,0,n){
        cin >> a[i];
    }

    int sm[n]  = {};
    sm[0] = a[0];

    rep(i,1,n){
        sm[i] = sm[i-1] + a[i];
    }

    int firstHit = lower_bound(sm,sm+n,target) - sm;
    int ans = n - firstHit;

    rep(i,firstHit,n){
        int curr = upper_bound(sm,sm+i,sm[i] - target) - sm;
        ans += curr;
    }

    cout << ans << '\n';
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


// https://codeforces.com/edu/course/2/lesson/9/2/practice
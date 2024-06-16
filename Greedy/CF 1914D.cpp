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

bool cmp(pair<int,int> a , pair<int,int> b){
     return a.first > b.first;
}


void solve(int t){
    int n;
    cin >> n;

    pair<int,int> a[n],b[n],c[n];
    int mx[n];

    rep(i,0,n){
      cin >> a[i].first;
      a[i].second = i;
    }
    rep(i,0,n){
      cin >> b[i].first;
      b[i].second = i;
    }
    rep(i,0,n){
      cin >> c[i].first;
      c[i].second = i;
    }

    sort(a,a+n , cmp); 
    sort(b,b+n , cmp); 
    sort(c,c+n , cmp);

    int ans = 0;

    rep(i,0,min(10ll,n)){
      rep(j,0,min(10ll,n)){
          if(a[i].second != b[j].second){
               rep(k,0,min(10ll,n)){
                    if(c[k].second != a[i].second and c[k].second != b[j].second){
                         ans = max(ans,a[i].first + b[j].first + c[k].first);
                    }
               }               
          }
      }
    }

    cout << ans << '\n';


    // int aMax[n] , bMax[n] , cMax[n];

    // aMax[0] = a[0] , bMax[0] = b[0] , cMax[0] = c[0];
    // rep(i,1,n){
    //   aMax[i] = max(aMax[i-1],a[i]);
    //   bMax[i] = max(bMax[i-1],b[i]);
    //   cMax[i] = max(cMax[i-1],c[i]);
    // }

    // cout << ans << '\n';
}

int32_t main()
{
     FastIO();

     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}


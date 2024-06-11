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
    string s;
    cin >> s;

    int zero = 0 , one = 0, cnt = 0, n = s.size();

    rep(i,0,n){
        if(s[i] - '0') ++one;
        else ++zero;
    }


    rep(i,0,n){
        if(s[i] - '0'){
            if(zero) --zero;
            else break;
        }
        else{
            if(one) --one;
            else break;
        }
        ++cnt;
    }
    // cout << one << ' ' << zero << ' ' << cnt << '\n';

    cout << n - cnt << '\n';
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
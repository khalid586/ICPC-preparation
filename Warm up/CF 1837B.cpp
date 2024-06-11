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
    if(a.first == b.first){
        return a.second < b.second;
    }

    return a.first > b.first;
}

void solve(int test){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int mx = 2 , cnt = 2;

    rep(i,1,n){
        if(s[i] == s[i-1]) ++cnt;
        else cnt = 2;

        mx = max(mx,cnt);
    }
    cout << mx << '\n';
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


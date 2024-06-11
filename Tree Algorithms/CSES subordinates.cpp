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
vector<int> g[N];
int employee[N];


int dfs(int par){
    int cnt = 0;

    for(auto child:g[par]){
        cnt += 1 + dfs(child);
    }

    employee[par] = cnt;
    return cnt;
}


void solve(int test){
    int n;
    cin >> n;

    rep(i,2,n+1){
        int parent;
        cin >> parent;

        g[parent].push_back(i);
    }

    dfs(1);

    rep(i,1,n+1){
        cout << employee[i] << ' ';
    }
    cout << '\n';
}

int32_t main()
{
     FastIO();

     // cout << 14*14 << '\n';

     int T = 1;
    // cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}


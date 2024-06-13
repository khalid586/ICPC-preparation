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
    int n , sum;
    cin >> n >> sum;

    int b[n+1] = {};
    pair<int,int> a[n+1];

    rep(i,1,n+1){
        int x;
        cin >> x;

        a[i] = {x,i};
        b[i] = x;
    }

    if(n < 3){
        cout << "IMPOSSIBLE\n";
        return;
    }

    sort(a+1,a+n+1);
    sort(b+1,b+n+1);

    for(int i = 1; i < n-1 ; i++){
        int l = i+1 , r = n;

        while(l < r){
            int currSum = b[i] + b[l] + b[r];
            if(currSum == sum){
                cout << a[i].second << ' ' << a[l].second << ' ' << a[r].second << '\n';
                return;
            } 
            else{
                if(currSum < sum){
                    ++l;
                }
                else{
                    --r;
                }
            }

        }
    }

    cout << "IMPOSSIBLE\n";

}

int32_t main()
{
     FastIO();

     int T = 1;
     // cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}


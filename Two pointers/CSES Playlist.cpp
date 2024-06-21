#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'
void IO()
{
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //    freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
 #define int long long int
#define all(x) x.begin(),x.end()

const int N = 2e5 + 7;

void solve(int t){
     int n;
     cin >> n;

     int a[n];
     rep(i,0,n){
          cin >> a[i];
     }

     int start = 0 , ans = 0;
     map<int,int> currentPositions;

     rep(end,0,n){
          if(currentPositions.count(a[end])){
               if(currentPositions[a[end]] >= start) // if the previously inserted element exists within the current segment
                    start = currentPositions[a[end]] + 1;
          }
          currentPositions[a[end]] = end;
          ans = max(ans , end - start + 1);
     }

     cout << ans << '\n';
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();
     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     } 
   
   return 0;
}


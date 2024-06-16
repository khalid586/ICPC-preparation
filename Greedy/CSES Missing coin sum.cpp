//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void solve(int t){
   int n;
   cin >> n;

   int a[n];

   rep(i,0,n){
      cin >> a[i];
   }

   sort(a,a+n);

   int missing = 1;

   rep(i,0,n){
      if(a[i] > missing){
         break;
      }
      missing += a[i];
   }

   cout << missing << '\n';
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
     //freopen("out.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE     
     int T = 1;
  //   cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}


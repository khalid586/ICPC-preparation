//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

int cnt = 0 , y = 0;

int recur(int x){
   ++y;
   if(x < 2){ 
      if(x <= 0) return 0;
      
      ++cnt;
      return x;
   }
   return recur(x-1) + recur(x-2);
}

void solve(int t){   
   int n;
   cin >> n;

   int p = recur(n);

   cout << "fib(" << n << ") = " << y-1 << " calls = " << cnt << '\n';

}

int32_t main()
{
        #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
     //freopen("out.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE     
     int T = 1;
     cin >> T;

     rep(i,1,T+1){
         cnt  = 0 , y = 0;
         solve(i);
     }
     return 0;
}


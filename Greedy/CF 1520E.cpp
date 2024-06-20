//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void IO(){
      #ifndef ONLINE_JUDGE
         freopen("in.txt","r", stdin);
        //freopen("out.txt", "w", stdout);
         freopen("Error.txt", "w", stderr);
      #endif // ONLINE_JUDGE 
}

void solve(int t){   
   int n;
   cin >> n;

   string s;
   cin >> s;

   int found = 0 ,total = 0 , ans = 0;

   rep(i,0,n){
      total += (s[i] == '*');
   }
   
   rep(i,0,n){
      if(s[i] == '*') ++found;
      else ans += min(found , total - found);
   }
   cout << ans << '\n';
}

int32_t main()
{
      IO();    
      
      int T = 1;
      cin >> T;

      rep(i,1,T+1){
         solve(i);
      }

     return 0;
}
//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

#define int long long
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)


void solve(string s){   
   int n = s.size();
   stack<char> pot;

   rep(i,0,n){
      if(s[i] == ')'){
         if(!pot.size()){
            cout << "incorrect\n";
            return;
         }
         if(pot.top() != '('){
            cout << "incorrect\n";
            return;
         }else{
            pot.pop();
         }
      }else if(s[i] == '('){
         pot.push('(');
      }
   }

   cout << (pot.size() ? "incorrect":"correct") << '\n';
}

int32_t main()
{
   #ifndef ONLINE_JUDGE
      freopen("in.txt","r", stdin);
     //freopen("out.txt", "w", stdout);
      freopen("Error.txt", "w", stderr);
   #endif // ONLINE_JUDGE     
     int T = 1;
   //  cin >> T;

     // rep(i,1,T+1){
     //     solve(i);
     // }

     string s;
     while(cin >> s){
      solve(s);
     }
     return 0;
}


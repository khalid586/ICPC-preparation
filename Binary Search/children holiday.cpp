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
   int m , n;
   cin >> m >> n;

   int a[n] , work[n] , restTime[n];
   rep(i,0,n){
      cin >> a[i] >> work[i] >> restTime[i];
   }

   int low = 0 , high = 1e18 , ans = 0;
   vector<int> balloonsPerPerson;

   // first identify the time it takes to inflate the first balloon
   // after that we will divide the time(mid) by work[i] * a[i]

   while(low <= high){
      int mid = low + (high - low) / 2;
      vector<int> currAnswer; // currAnswer.pb(count);

      int total = 0;

      rep(i,0,n){
         int time = mid;
         time -= a[i] * work[i];
         int count = work[i];

         if(time <= 0){
            count = mid / a[i];
            total += count;
            currAnswer.push_back(count);
            continue;
         }   

         int segment = min(1000000000LL,time / (a[i] * work[i] + restTime[i])); // overflow 
         count += segment * work[i];

         int remainingTime = time % (a[i] * work[i] + restTime[i]);
         remainingTime -= restTime[i];

         if(remainingTime > 0){
            count += remainingTime / a[i];
         }

         total += count;
         currAnswer.push_back(count);        
      }

      if(total >= m){
         ans = mid;
         balloonsPerPerson = currAnswer;
         high = mid - 1;
      }else{
         low = mid + 1;
      }
   }

   cout << ans << '\n';
   int sz = balloonsPerPerson.size() , left = m;

   rep(i,0,sz){
      cout << min(balloonsPerPerson[i],left) << (i == sz - 1 ? "\n":" ");
      left -= balloonsPerPerson[i];
      left = max(0LL,left);
   }
}

int32_t main()
{
      IO();    
      
      int T = 1;
     // cin >> T;

      rep(i,1,T+1){
         solve(i);
      }

     return 0;
}
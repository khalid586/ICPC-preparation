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

int closestToLeft(int a[],int n,int target){
   int low = 0 , high = n-1 , ans = n;

   while(low <= high){
      int mid = low + (high - low)/2;

      if(a[mid] > target){
         ans = mid;
         high = mid - 1;
      }else{
         low = mid + 1;
      }
   }

   return ans;
}

void solve(int t){   
   int n , k;
   cin >> n >> k;

   int a[n];
   rep(i,0,n){
      cin >> a[i];
   }  

   rep(i,0,k){
      int target;
      cin >> target;

      int found = closestToLeft(a,n,target);

      cout << found << '\n';
   }
}

int32_t main()
{
      IO();    
      
      int T = 1;
    //  cin >> T;

      rep(i,1,T+1){
         solve(i);
      }

     return 0;
}


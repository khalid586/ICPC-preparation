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


void solve(int t){
    int a,b,x1,y1,x2,y2;
    cin >> a >> b;

    cin >> x1 >> y1 >> x2 >> y2;

    pair<int,int> places[8];

    places[0] = {x1-a,y1-b};
    places[1] = {x1-a,y1+b};
    places[2] = {x1+a,y1-b};
    places[3] = {x1+a,y1+b};
    places[4] = {x1-b,y1-a};
    places[5] = {x1-b,y1+a};
    places[6] = {x1+b,y1-a};
    places[7] = {x1+b,y1+a};

    int cnt = 0;
    set<pair<int,int>> ans;

    rep(i,0,8){
             if(places[i].first - a == x2 && places[i].second - b == y2) {ans.insert({places[i].first,places[i].second});}
        else if(places[i].first - a == x2 && places[i].second + b == y2) {ans.insert({places[i].first,places[i].second});}
        else if(places[i].first + a == x2 && places[i].second - b == y2) {ans.insert({places[i].first,places[i].second});}
        else if(places[i].first + a == x2 && places[i].second + b == y2) {ans.insert({places[i].first,places[i].second});}
        else if(places[i].first - b == x2 && places[i].second - a == y2) {ans.insert({places[i].first,places[i].second});}
        else if(places[i].first - b == x2 && places[i].second + a == y2) {ans.insert({places[i].first,places[i].second});}
        else if(places[i].first + b == x2 && places[i].second - a == y2) {ans.insert({places[i].first,places[i].second});}
        else if(places[i].first + b == x2 && places[i].second + a == y2) {ans.insert({places[i].first,places[i].second});}

    }

    cout <<  ans.size() << '\n';

}
int32_t main()
{
     FastIO();

     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}
/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/698/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
const ll maxn = 1e2 + 2;
const ll md = 998244353;
const int inf = 2e9;

int a[maxn];
int dp[maxn][3];


int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test = 1;
    //cin>>test;
    while(test--){
        int n;
        cin>>n;
        for(int i = 1; i <= n; ++i){
            cin>>a[i];
        }
        for(int i = 1; i <= n; ++i){
            for(int j = 0; j <= 2; ++j){
                dp[i][j] = inf;
            }
        }
        dp[1][0] = 1;
        if(a[1] == 1){
            dp[1][2] = 0;
        }
        if(a[1] == 2){
            dp[1][1] = 0;
        }
        if(a[1] == 3){
            dp[1][1] = dp[1][2] = 0;
        }
        for(int i = 2; i <= n; ++i){
            dp[i][0] = min({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + 1;
            if(a[i] == 0){
                dp[i][1] = inf;
                dp[i][2] = inf;
            }
            if(a[i] == 1){
                dp[i][1] = inf;
                dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]); 
            }
            if(a[i] == 2){
                dp[i][2] = inf;
                dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
            }
            if(a[i] == 3){
                dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
                dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]); 
            }
        }
        ll cnt = min({dp[n][0], dp[n][1], dp[n][2]});
        cout<<cnt<<'\n';



    }

	return 0;
}

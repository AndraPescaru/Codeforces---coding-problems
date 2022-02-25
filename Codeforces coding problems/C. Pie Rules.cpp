/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/859/problem/C
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
int dp[maxn][2];

// dp[i][j][k] = Suntem la placinta i si persoana j, iar k are medalionul in mana

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test = 1;
    //cin>>test;
    while(test--){
        int n;
        ll sum = 0;
        cin>>n;
        for(int i = 1; i <= n; ++i){
            cin>>a[i];
            sum += a[i];
        }
        dp[n][0] = a[n];
        for(int i = n - 1; i >= 1; --i){
            dp[i][0] = max(dp[i + 1][0], dp[i + 1][1] + a[i]);
            dp[i][1] = min(dp[i + 1][1] + a[i], dp[i + 1][0]);
        }
        cout<<dp[1][1]<<" "<<sum - dp[1][1]<<'\n';
        

    }

	return 0;
}

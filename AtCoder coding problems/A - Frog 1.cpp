/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://atcoder.jp/contests/dp/tasks/dp_a
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
int v[100001], dp[100001];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
 
    int test = 1;
    //cin>>test;
    while(test--){
     int n;
     cin>>n;
     for(int i = 1;i <= n;i ++)
     cin>>v[i];
     long long sum = 0;
        dp[1] = 0;
        dp[2] = abs(v[1] - v[2]);
        for (int i = 3; i <= n; i ++){
            dp[i] = min(dp[i - 1] + abs(v[i] - v[i - 1]), dp[i - 2] + abs(v[i] - v[i - 2]));
        }
        cout<<dp[n]<<'\n';
    }   
    return 0;
}

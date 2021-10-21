/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.pbinfo.ro/probleme/1991/trepte2
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
     int n, k;
     cin>>n>>k;
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i <= n; i ++){
          for(int j = 1; j <= k; j++)
          if(i - j >= 1)
          dp[i] += dp[i-j];
          dp[i] = dp[i] % 9001;
        }
        cout<<dp[n]<<'\n';
    }   
    return 0;
}

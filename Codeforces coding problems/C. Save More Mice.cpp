/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1593/problem/C
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
const ll maxn = 4e5 + 4;
const ll md = 1e9 + 7;
const int inf = 2e9;

ll v[400008];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    ll test = 1;
    cin>>test;
    while(test--){
      ll n, k, nn;
      ll i;
      cin>>n>>k;
      nn = n;
      ll nr = 0;
      for(i = 1; i <= k; i++)
      cin>>v[i];
      sort(v + 1, v + k + 1);
      bool ok = 1;
      
      for(i = k; i >= 1 && ok; i--){
          if(n > nn - v[i])
          nr++, n = n - (nn - v[i]);
          else
          ok = 0;
      }
      cout<<nr<<'\n';
    }
    

	return 0;
}

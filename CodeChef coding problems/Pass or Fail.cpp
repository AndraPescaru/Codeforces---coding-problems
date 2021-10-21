/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/START16C/problems/PASSORFAIL
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
const ll maxn = 1e5 + 2;
const ll md = 1e9 + 7;
const int inf = 2e9;

int v[103];

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    while(test--){
      int n, x, p;
      cin>>n>>x>>p;

      if(x * 3 + (n - x) * (-1) >= p)
      cout<<"PASS"<<'\n';
      else
      cout<<"FAIL"<<'\n';
    }
    

	return 0;
}

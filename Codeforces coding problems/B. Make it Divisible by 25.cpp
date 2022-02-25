/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1593/problem/B
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


int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    while(test--){
      ll n;
      cin>>n;
      bool ok = 1;
      ll  nr = 0;
      ll nr0 = 0, nr5 = 0, nr7 = 0, nr2 = 0;
      while(ok && n){
          if(n % 10 == 0){
            nr0++;
            if(nr0 == 2)
            ok = 0;
          }
          if(n % 10 == 2){
               nr2++;
               if(nr5)
               ok = 0;
          }
          if(n % 10 == 5){
              nr5++;
              if(nr0)
              ok = 0;
          }
          if(n % 10 == 7){
              nr7++;
              if(nr5)
              ok = 0;
          }
          if(ok){
              n /= 10;
              nr++;
          }

      }
      cout<<nr - 1<<'\n';
    }
    

	return 0;
}

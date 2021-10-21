/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/START16C/problems/HCAGMAM1
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
string s;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    while(test--){
      int x, y;
      cin>>x>>y;
      ll sum = 0;
      int nr = 0;
      int nr1 = 0;
      int nn = 0;
      string s;
      cin>>s;
      int i;
      int maxi = -1;
      for( i = 0; s[i]; i++){
          if(s[i] == '1')
          nr1 ++, nr ++;
          else{
              maxi = max(maxi, nr);
              nr = 0;
          }
      }
      maxi = max(maxi,nr);

      cout<<nr1 * x + y * maxi<<'\n';
    }
    

	return 0;
}

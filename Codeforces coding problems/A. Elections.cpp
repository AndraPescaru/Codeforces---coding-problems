/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1593/problem/A
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

ll v[maxn];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    while(test--){
      ll a, b, c;
      cin>>a>>b>>c;
      ll maxi = a;
      maxi = max(maxi,b);
      maxi = max(maxi,c);
      if(a == b && b == c)
    {
          cout<<1<<" "<<1<<" "<<1<<'\n';
          continue;
    }
    if(maxi == a && a == b && a !=c)
    {
        cout<<1<<" "<<1<<" "<<a - c + 1<<'\n';
        continue;
    }
    if(maxi == b && c == b && a !=c)
    {
        cout<<b - a + 1<<" "<<1<<" "<<1<<'\n';
        continue;
    }
    if(maxi == a && a == c && a !=b)
    {
        cout<<1<<" "<<a - b + 1<<" "<<1<<'\n';
        continue;
    }
      if(a == maxi && b != a && c != a)
     {
          cout<<0<<" "<<a - b + 1<<" "<<a - c + 1<<'\n';
          continue;
     }
      if(b == maxi && b != c && b != a)
      {
          cout<<b - a + 1<<" "<<0<<" "<<b - c + 1<<'\n';
          continue;
      }
      if(c == maxi && b != c && c != a)
     {
          cout<<c - a + 1<<" "<<c - b + 1<<" "<<0<<'\n';
          continue;
     }
      
    }
    

	return 0;
}

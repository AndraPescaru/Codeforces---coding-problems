/*
  Programmer : Anamaria-Andra Pescaru
  Link to the problem : https://codeforces.com/contest/1591/problem/B
*/
#include<bits/stdc++.h>
using namespace std;

// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout

long long v[200002];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    

    int test = 1;
     cin >> test;

    while (test--) {
       int n;
       cin >> n;
       for (int  i = 1; i <= n; i ++) {
           cin >> v[i];
       }
       if (n == 1) {
           cout << "0"<< '\n';
           continue;
       }
       int pozitie = 0;
       long long maxi = -1;

       for (int  i = 1; i <= n; i++) {
    
           if ( maxi < v[i] ) {
        
               maxi = v[i];
               pozitie = i;
           }

       }
       if (v[n] == maxi) {
           cout << '0' << '\n';
           continue;
       }
       long long maxi1 = v[n];
       long long nr = 0;
      for (int i = n; i > pozitie; i--) {
          if (maxi1 < v[i-1])  {
              maxi1 = v[i-1], nr++;
          }
      }
      cout << nr << '\n';
    }
    
	return 0;
}

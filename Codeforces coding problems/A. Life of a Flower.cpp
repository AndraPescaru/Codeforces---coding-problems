/*
  Programmer : Anamaria-Andra Pescaru
  Link to the problem : https://codeforces.com/contest/1591/problem/A
*/
#include<bits/stdc++.h>
using namespace std;

// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout

int v[101];
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

       long long sum = 1;
       int nr = 0;
       if (v[1] == 0) {
           nr++;
       } else {
           sum++;
       }
       int ok = 1;
       for (int  i = 2; i <= n && ok; i++) {
           if (v[i] == 1 && v[i-1] == 1) {
               sum += 5;
               nr = 0;
               
           }
           
           if (v[i] == 1 && v[i-1] == 0) {
               sum += 1;
             nr = 0;
           }
           if ( v[i] == 0) {
               nr++;
           }
           if (nr == 2) {
               ok = 0;
           }
       }
       if (ok == 0) {
           cout << "-1" << '\n';
       }
       else {
           cout << sum << '\n';
       }
    }
    
	return 0;
}

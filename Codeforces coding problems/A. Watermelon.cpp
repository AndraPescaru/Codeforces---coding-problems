/*
  Programmer : Anamaria-Andra Pescaru
  Link to the problem : https://codeforces.com/problemset/problem/4/A
*/
#include<bits/stdc++.h>
using namespace std;

// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    

    int test = 1;
    // cin >> test;

    while (test--) {
       int n;
       cin >> n;

       if ( n == 2 || n == 1 || n == 0) {
           cout << "NO"<<endl;
           continue;
       }
       if ( n % 2 == 0  ) {
           cout << "YES" << endl;
       } else {
           cout << "NO" << endl;
       }
    }
    
	return 0;
}

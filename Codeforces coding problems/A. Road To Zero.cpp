/*
  Programmer : Anamaria-Andra Pescaru
  Link to the problem : https://codeforces.com/contest/1342/problem/A
*/
#include<bits/stdc++.h>
using namespace std;

// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout

int m[101][101], v[101];

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    
    int test = 1;

    cin >> test;

    while (test--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;

        if (x == y && x == 0) {
            cout << 0 << '\n';
            continue;
        }

        if (x == 0) {
            cout << y * a << '\n';
            continue;
        }

        if (y == 0) {
            cout << x * a << '\n';
            continue;
        }
        
        if (x > y) {
            if ((x + y) * a >=  y * b + (x - y) * a)
            cout << y * b + (x - y) * a << '\n';
            else
            cout << (x + y) * a << '\n';
            continue;
        }

        if (x < y) {
            if ((x + y) * a >=  x * b + (y - x) * a)
            cout << x * b + (y - x) * a << '\n';
            else 
            cout << (x + y) * a << '\n';
            continue;
        }

        if (x == y) {
            if ((x + y) * a >= x * b)
            cout << x * b << '\n';
            else 
            cout << 2 * x * a << '\n';
            continue;
        }

    }

	return 0;
}

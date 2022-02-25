/*
  Programmer : Anamaria-Andra Pescaru
  Link to the problem : https://codeforces.com/contest/577/problem/A
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

    int n;
    long long x;

    cin >> n >> x;
     
    int nr = 0;

    if (n >= x) {
        for (int i = 1; i <= x / 2; ++i) {
            if (x % i == 0) {
                nr++;
            }
        }
        cout << nr + 1 <<'\n';
    } else {
        for (int i = 1; i <= n; ++i) {
            if (x % i == 0 && x / i <= n)
            nr++;
        }
        cout << nr << '\n';
    }

	return 0;
}

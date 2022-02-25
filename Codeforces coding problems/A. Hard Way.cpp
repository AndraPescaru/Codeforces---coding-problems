/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1642/problem/A
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

    int test;
    cin >> test;
    int x1, y1, x2, y2, x3, y3;

    while ( test--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int ok = 0;

        if ( y1  == y2 && y3 < y1 ) {
            cout << abs(x1 - x2) << '\n';
            ok = 1;
        }

        if ((y1 == y3 &&  y2 < y1)) {
            cout << abs(x1 - x3) << '\n';
            ok = 1;
        }

        if (y2 == y3 && y1 < y3) {
            cout << abs(x2 - x3) << '\n';
            ok = 1;
        }

        if (ok == 0) {
            cout << "0" << '\n';
        }

    }   
    
	return 0;
}

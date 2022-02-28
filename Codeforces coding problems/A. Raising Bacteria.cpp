/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/problemset/problem/579/A
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
    
    string s;
    
    while ( test--) {
        int n;
        cin >> n;
        int nr = 0;

        while (n != 0) {
            if (n % 2 ) nr++;
            n /= 2;
        }

        cout << nr << '\n';
    }


    


    
	return 0;
}

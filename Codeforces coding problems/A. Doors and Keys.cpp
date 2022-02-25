/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1644/problem/A
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
    
    string s;
    
    while ( test--) {
        cin >> s;
        int nr = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            for (int j = i + 1; j < s.size(); ++j) {
                if (s[i] == 'r' && s[j] == 'R') nr++;
                if (s[i] == 'b' && s[j] == 'B') nr++;
                if (s[i] == 'g' && s[j] == 'G') nr++;
            }
        }

        if ( nr == 3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }   
    
	return 0;
}

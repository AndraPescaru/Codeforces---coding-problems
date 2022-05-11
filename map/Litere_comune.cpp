// Perechile care se incep si se termina cu aceeasi litera 
/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : 
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

    string s;
    unordered_map<string, long long> v;

    
    long long cnt = 0;
    int n;
    cin >> n;
    
    while (n--) {
        cin >> s;

        string x = "";
        x += s[0];
        x += s.back();
        v[x]++;

    }

    for (auto u : v) {
        cout << u.first << " " << u.second << '\n';
    }
    
  
    return 0;
}

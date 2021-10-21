/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/users/andrapescaru21
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

int v[103];
string s;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    while(test--){
     int n;
     cin>>n;
     cin>>s;
     int i;
     bool ok = 1;
     for(i = 1; s[i] && ok; i++){
         if((s[i] == 'L' && s[i-1] =='L') || (s[i] == 'R' && s[i-1] =='R'))
         ok = 0;
     }
     if(!ok)
     cout<<"YES"<<'\n';
     else
     cout<<"NO"<<"\n";
    }
    

	return 0;
}

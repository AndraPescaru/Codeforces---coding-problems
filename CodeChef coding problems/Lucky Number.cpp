/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/SNCKQL21/problems/LUCKYNUM
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

ll v[44];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    while(test--){
        int a, b, c;
        cin>>a>>b>>c;

        if(a == 7 || b == 7 || c == 7)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    

	return 0;
}

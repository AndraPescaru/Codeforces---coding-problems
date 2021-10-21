/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/SNCKQL21/problems/TESTSERIES
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

int v[44];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);


    int test = 1;
    cin>>test;
    while(test--){
        int i;
        int  nr1 = 0, nr2 = 0;
        for(i = 1; i <= 5;i++){
            cin>>v[i];
            if(v[i] == 1)nr1++;
            if(v[i] == 2)nr2++;
        }
        if(nr1 == nr2){
            cout<<"DRAW"<<endl;
            continue;
        }
        if(nr1 > nr2)
        cout<<"INDIA"<<endl;
        if(nr1 < nr2)
        cout<<"ENGLAND"<<endl;
        
    }
    

	return 0;
}

/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/SDPCB21/problems/QUALPREL
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
long long v[100001];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    cin>>test;

    while(test--){
        int n, k;
        cin>>n>>k;
        for(int i = 1;i <= n;i++){
            cin>>v[i];
        }
        sort(v + 1, v + n + 1, greater<int>());
        int ok = 1;
        int sum = k;
        int l = 1;
        while(ok){
            if(v[k + l] == v[k])
            sum++, l++;
            else
            ok = 0;
        }
        cout<<sum<<endl;
    }

	return 0;
}

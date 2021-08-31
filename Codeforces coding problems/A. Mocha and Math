/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1559/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
long long v[101],k[101];
int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
 
int test;
cin>>test;
 
int n;
 
int i, j;
 
while(test--){
	cin>>n;
	for(i = 0;i < n;i ++){
		cin>>v[i];
	}
	for(i = 1;i < n;i ++){
		v[0] = v[0]&v[i];
	}
	cout<<v[0]<<endl;
	}
 
	return 0;
}

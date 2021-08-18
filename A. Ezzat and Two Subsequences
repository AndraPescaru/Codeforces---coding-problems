/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1557/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

int test;
cin>>test;

int n;
int v[100001], i, j; 
long long sum = 0;

while(test--){
	cin>>n;
	sum = 0;
	for(i = 1;i <= n;i++){
		cin>>v[i];
		sum += v[i];
	}
	double maxi = -9e15;
	sort(v + 1, v + n + 1);
	long long sum1 = 0;
	for(i = 1;i < n;i++){
		sum1 += v[i];
		maxi = max(maxi, double(sum - sum1) / (n - i) + double(sum1) / i);
	}
	cout<<maxi<<'\n';
}
	return 0;
}

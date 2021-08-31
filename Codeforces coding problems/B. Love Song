/* Programmer : Anamaria-Andra Pescaru
Link to the problem : https://codeforces.com/contest/1539/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll maxn = 1e5 + 5;
 
int v[maxn];
 
int main()
{
	int n,q,a,b,sum=0;
	char s[100005];
	cin>>n;
	cin>>q;
	int j;
	for(j=1;j<=n;j++)
	cin>>s[j];
	
	for(int i = 1; i <= n; ++i){
		v[i] = v[i - 1];
		v[i] = v[i] + (s[i] - 'a' + 1);
	}
 
	while(q--){
		int x, y;
		cin>>x>>y;
		cout<<v[y] - v[x - 1]<<'\n';
	}
	
	return 0;
 
}

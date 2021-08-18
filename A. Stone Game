/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1538/problem/A
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int t, n, a[101];
	
	cin>>t;

	while (t --){
		int n;
		int maxi = 0, mini = 105;
		int pos = 0, pos1 = 0;
		cin>>n;
		for(int i = 1; i <= n; ++i){
			int x;cin>>x;
			if(x < mini){
				mini = x, pos = i;
			}
			if(x > maxi){
				maxi = x, pos1 = i;
			}
		}
		if(pos > pos1)swap(pos, pos1);
		int cnt = 105;
		cnt = pos1;
		cnt = min(cnt, n - pos + 1);
		cnt = min(cnt, pos + n - pos1 + 1);
		cout<<cnt<<'\n';

	}

	return 0;
}

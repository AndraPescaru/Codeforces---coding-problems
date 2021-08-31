/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1547/problem/A
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t --){
		int xa, xb, xf, ya, yb, yf;
		cin>>xa>>ya>>xb>>yb>>xf>>yf;
		int cnt = abs(xa - xb) + abs(ya - yb);
		if(xa == xb && xb == xf){
			if(yf >= min(ya, yb) && yf <= max(ya, yb)){
				cnt += 2;
			}
			cout<<cnt<<'\n';
			continue;
		}
		if(ya == yb && yb == yf){
			if(xf >= min(xa, xb) && xf <= max(xa, xb)){
				cnt += 2;
			}
			cout<<cnt<<'\n';
			continue;
		}
		cout<<cnt<<'\n';

	}
	return 0;
}

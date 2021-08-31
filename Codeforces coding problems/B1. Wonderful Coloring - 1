/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1551/problem/B1
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
	int t;

	cin>>t;

	char s[51];
	int v[51], i, j;

	while(t--){
		cin>>s;
		int n = strlen(s);
		for (i = 0; i < n - 1; i ++ ){
			for ( j = i + 1; j < n; j ++ ){
				if ( s[i] < s[j]){
					int aux;
					aux = s[i];
					s[i] = s[j];
					s[j] = aux;
				}
			}
		}
		
		int k = 1;
		for ( i = 1; i <= n ; i ++)
		v[i] = 0;
		v[1] ++;
		for ( i = 1; i < n; i ++ )
		if (s[i] != s[i - 1]){
		k ++;
		v[k] ++;
		}
		else
		v[k] ++;
	
		int ss = 0, sss = 0;
		for ( i = 1;i <= k; i ++)
		if (v[i] == 1 )
		ss ++;
		else
		if (v[i] >= 2)
		sss ++;

		cout<<sss + ss / 2<<endl;
	}

    return 0;
}

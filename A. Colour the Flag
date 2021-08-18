/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1534/problem/A
*/
#include <iostream>
#include <math.h>
using namespace std;

char s[55][55];

int main()
{
	int t;
	cin>>t;
	while(t --){
		int n, m;
		cin>>n>>m;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= m; ++j){
				cin>>s[i][j];
			}
		}
		bool ok = 1, ok2 = 1;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= m; ++j){
				if(i % 2){
					if(j % 2){
						if(s[i][j] == 'W')ok = 0;
					}
					else{
						if(s[i][j] == 'R')ok = 0;
					}
					if(j % 2){
						if(s[i][j] == 'R')ok2 = 0;
					}
					else{
						if(s[i][j] == 'W')ok2 = 0;
					}

				}
				else{
					if(j % 2 == 0){
						if(s[i][j] == 'W')ok = 0;
					}
					else{
						if(s[i][j] == 'R')ok = 0;
					}
					if(j % 2){
						if(s[i][j] == 'W')ok2 = 0;
					}
					else{
						if(s[i][j] == 'R')ok2 = 0;
					}
				}
			}
		}
		if(!ok && !ok2){
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		int turn = 0;
		if(!ok)turn = 1;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= m; ++j){
				if(turn > 0){
					if(i % 2){
						if(j % 2)cout<<"W";
						else cout<<"R";
					}
					else{
						if(j % 2)cout<<"R";
						else cout<<"W";
					}
				}
				else{
					if(i % 2 == 0){
						if(j % 2)cout<<"W";
						else cout<<"R";
					}
					else{
						if(j % 2)cout<<"R";
						else cout<<"W";
					}
				}
			}
			cout<<'\n';
		}

	}
	return 0;
}

/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1520/problem/A
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int t, n;
	char s[51];
	cin>>t;
	
	while(t --){
		cin>>n;
		cin>>s;
		int i, j, ok = 1, p = 1;
		
		for(i = 0;i  < n && p;i ++){
			ok = 1, p = 1;
			for(j = i + 1;j < n && p;j ++){
				if(s[i] != s[j])
			ok = 0;
			if(s[i] == s[j] && ok  == 0)
			p = 0;
			}
		}
	if(p)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
		
	
	return 0;
}

/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1549/problem/B
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	int n;
	
	
	while(t --){
	cin>>n;
	string s, v;
	cin>>s;
	cin>>v;
	
	int i = 0,sum = 0;
	
	if(v[0] != '0' && s[0] == '0')
	sum ++, s[0] = '9';
	if(v[0] != '0' && s[1] == '1' && s[0] == '1')
	sum ++, s[1] = '9';
	
int ok = 1;
	
	for(i = 1; i < n - 1; i++){
		ok = 1;
		if(v[i] == '1' && s[i-1]=='1'  && ok)
		sum++,s[i-1]='9', ok = 0;
		
		if(v[i] == '1' && s[i]=='0'  && ok)
		sum++,s[i]='9', ok = 0;
		
		if(v[i]=='1' && s[i+1]=='1' && ok)
		sum++,s[i+1]='9', ok = 0;
	}
		if(v[n-1] != '0' && s[n-1] == '0')
			sum ++, s[0] = '9';
		else
			if(v[n-1] != '0' && s[n-2] == '1' )
			sum ++, s[n-2] = '9';
	cout<<sum<<endl;
	}
	return 0;
}

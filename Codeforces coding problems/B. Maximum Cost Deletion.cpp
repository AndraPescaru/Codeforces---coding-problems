/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1550/problem/B
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
	int t, n, a, b;
	char s[101];
	
	cin>>t;
	
	while(t --){
		cin>>n>>a>>b;
		cin>>s;
		int i, ss = 1;
		
		for(i = 0;i < n - 1; i ++)
		if(s[i] != s[i+1])
		ss++;
		
		if(a == 0 && b == 0)
		cout<<"0"<<endl;
		
		if(a == 0 && b > 0)
		cout<<b * n<<endl;
		
		if(a == 0 && b < 0)
		cout<<(ss / 2 + 1) * b<<endl;
		
		if((b == 0 && a > 0) || ( b == 0 && a < 0) )
		cout<<a * n<<endl;
		
		if( b < 0 && a < 0)
		cout<<a * n + (ss / 2 + 1) * b<<endl;
		
		if(b > 0 && a > 0)
		cout<<a * n + b * n<<endl;
		
		if(a < 0 && b > 0)
		cout<<a * n + b * n<<endl;
		
		if(a > 0 && b < 0)
		cout<<a * n + (ss / 2 + 1) * b<<endl;
		
	}
	return 0;
}

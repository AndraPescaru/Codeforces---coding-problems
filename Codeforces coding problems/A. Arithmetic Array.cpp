/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1537/problem/A
*/
#include <iostream>
using namespace std;
int main (){
	
	int n, i, t, v[10001];
	
	cin>>t;
	
	while (t --){
		cin>>n;
		int s = 0, nr = 0, s1 = 0;
		for (i = 1;i <= n; i ++){
			cin>>v[i];
			s1 +=v[i];
		}
		 
		if ( s1 == n )
		cout<<"0"<<"\n";
		else
		if (s1 < n)
		cout<<"1"<<"\n";
		else
		if (s1 > n)
		cout<<s1 - n<<"\n";
	}
	
	
	return 0;}

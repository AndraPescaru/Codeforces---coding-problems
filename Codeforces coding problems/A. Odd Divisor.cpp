/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1475/problem/A
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	long long n;
	
	while(t --){
		cin>>n;
		int ok = 1;
		if(n == 2)
		cout<<"NO"<<endl, ok = 0;
		
		if(n % 2 != 0)
		cout<<"YES"<<endl, ok = 0;
		
		if(n != 2 && n % 2 == 0 && ok){
			while( n % 2 == 0){
				n /= 2;
			}
			if(n == 1)
			cout<<"NO"<<endl;
			else
			cout<<"YES"<<endl;
		}
	}
	return 0;
}

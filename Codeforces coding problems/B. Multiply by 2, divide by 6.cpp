/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1374/problem/B
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
		int s = 0, ok = 1, gasit = 1;
		
		if(n == 1)
		cout<<"0"<<endl;
		else{
			while(gasit){
			
			if(n % 6 == 0){
				s++;
				n /= 6;
				ok = 1;
			}else
			if(ok){
				n *= 2;
				ok = 0;
				s ++;
			}
			if(n == 1 || (ok == 0 && n != 1 && n % 6 != 0)){
				gasit = 0;
			}
		}
		
		if( n == 1 )
		cout<<s<<endl;
		else
		cout<<"-1"<<endl;
		}
		
	}
	return 0;
}

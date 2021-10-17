/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1521/problem/A
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	long long a, b;
	
	
	while(t --){
	cin>>a>>b;
	
	if(b == 1)
	cout<<"NO"<<endl;
	if(b == 2){
		cout<<"YES"<<endl;
			cout<<a<<" "<<3 * a<<" "<<4 * a<<endl;
	}
 	if(b > 2){
		cout<<"YES"<<endl;
		cout<<a<<" "<<a * b -a <<" "<<a  * b<<endl;
	}
	}
	return 0;
}

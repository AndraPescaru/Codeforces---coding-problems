/* Programmer : Anamaria-Andra Pescaru
   Link to the problem : https://codeforces.com/contest/1535/problem/A
*/
#include <iostream>
using namespace std;

int main(){

	int t, s[101];
	
	cin>>t;

	while (t --){
		int i, max1 = -1, max2 = -2, imax1 = 1, imax2 = 1;
		for (i = 1;i <= 4;i ++){
			cin>>s[i];
			if (s[i] > max1){
				max2 = max1;
				imax2 = imax1;
				max1 = s[i];
				imax1 = i;
			}else{
				if (s[i] > max2){
					max2 = s[i];
					imax2 = i;
				}
			}
			
		}
		if ( imax1 < imax2 ){
			if (imax1 - 1 < 2 && 4 - imax2 < 2)
			cout<<"YES"<<"\n";
			else
			cout<<"NO"<<"\n";
		}else{
			if ( imax2 - 1 < 2 && 4 - imax1 < 2)
			cout<<"YES"<<"\n";
			else
			cout<<"NO"<<"\n";
		}
		

	}

	return 0;
}

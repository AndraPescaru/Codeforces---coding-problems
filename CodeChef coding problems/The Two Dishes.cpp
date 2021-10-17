/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/START11C/problems/MAX_DIFF
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    cin>>test;

    while(test--){
        int n, s;
        cin>>n>>s;
        if(n >= s)
        cout<<s<<endl;
        else
        cout<<n - s + n<<endl;
    }

	return 0;
}

/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/contest/1562/problem/A
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);
    
    //ifstream fcin("input.txt");
    //ofstream fcout("output.txt");
    int test;
    cin>>test;
    long long l, r;

    while(test--){
        cin>>l>>r;
        if(r % 2 == 0 )
        if((r / 2 + 1) >= l)
        cout<<r % (r / 2 + 1)<<endl;
        else
        cout<<r % l<<endl;

        if( r % 2 == 1){
            if( (r+1) / 2 >= l)
            cout<< r % ((r+1) / 2)<<endl;
            else
            cout<<r % l<<endl;
        }
    }

	return 0;
}

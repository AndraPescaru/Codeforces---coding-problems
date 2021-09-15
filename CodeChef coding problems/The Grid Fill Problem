/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/START11C/problems/FILLGRID
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
        int n;
        cin>>n;
        if(n % 2 == 0){
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n;j ++){
                    cout<<"-1 ";
                }
                cout<<endl;
            }
        }
        else{
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n;j ++){
                    if(i == j)
                    cout<<"-1 ";
                    else
                    cout<<"1 ";
                }
                cout<<endl;
            }
        }
    }

	return 0;
}

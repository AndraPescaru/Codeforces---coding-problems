/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : 
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
       int i = 1;
       while(i <= n){
           
               int k = 0;
               while(k < i){
                   cout<<"(";
                   k++;
               }
               k = 0;
               while(k < i){
                   cout<<")";
                   k++;
               }
               int kk = k;
               while(k < n){
                   cout<<"(";
                   k++;
               }
               while(kk < n){
                   cout<<")";
                   kk++;
               }

           i++;
           cout<<'\n';
       }
    }

	return 0;
}

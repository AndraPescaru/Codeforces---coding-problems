// Link to the problem : https://codeforces.com/contest/1611/problem/A
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

    while (test--){
        long long n;
        cin>>n;

        if(n % 2 == 0)
        cout<<"0"<<endl;
        else
        {
            long long nr = 0;
            while(n > 9 ){
                if(n%10%2 == 0)
                nr++;
                n /= 10;
            }
            if(nr == 0 && n%2 != 0){
                cout<<"-1"<<endl;
            }
            if((nr == 0 && n % 2 == 0) || (nr > 0 && n % 2 == 0)){
                cout<<"1"<<endl;
            }
            
             
            if(nr > 0 && n % 2 != 0)
            cout<<"2"<<endl;
        }
    }
    
	return 0;
}

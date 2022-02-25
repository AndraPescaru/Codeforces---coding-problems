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
        long long a, b;

        cin>> a>> b;
        
        long long mini = min(a, b);

        if((a == b && a == 0) || a == 0 || b == 0)
        {cout << "0"<<endl;
        continue;}

        if( a == b) {
            cout << (long long)(a / 2 )<<endl;
            continue;
        }

        if(a == mini) {
            if(a <= b / 3)
            cout<<a << endl;
            if(a > b / 3)
            cout << (a + b) / 4<<endl;
            continue;
        }
        if(b == mini) {
            if(b <= a / 3)
            cout<<b << endl;
            if(b > a / 3)
            cout << (a + b) / 4<<endl;
            continue;
        }

    }
    
	return 0;
}

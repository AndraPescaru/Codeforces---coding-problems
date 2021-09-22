/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://codeforces.com/problemset/problem/189/A
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

    int test = 1;
    //cin>>test;
    while(test--){
        long long n, a, b, c, i, j, aux;
        cin>>n>>a>>b>>c;
        long long sum = 0;
        for( i = 0; i <= n; i ++){
            for( j = 0; j <= n; j ++){
                // n = a * i + b * j + c * p
                aux = i * a + j * b;
                int ok = 1;
                if(aux > n)
                ok = 0;
                if((n - aux) % c == 0 && ok){
                    // îl aflăm pe p
                    int p = (n - aux) / c;
                    // i + j + p reprezinta numarul de bucati (i bucati de a, j bucati de b si p bucati de c)
                    sum = max(sum, i + j + p); 
                }
            }
        }
        cout<<sum<<endl;
 
    }   
    return 0;
}

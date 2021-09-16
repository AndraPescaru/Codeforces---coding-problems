/*
 Programmer : Anamaria Andra Pescaru 
 Link to the problem : https://www.codechef.com/START11C/problems/POSSPEW
*/
#include<bits/stdc++.h>
using namespace std;
// ifstream fcin("input.txt");
// ofstream fcout("output.txt");
// #define cin fcin
// #define cout fcout
int v[100003], copie[100003], suma[100003];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cout<<fixed<<setprecision(15);

    int test;
    cin>>test;

    while(test--){
        int n;
        cin>>n;
        long long k;
        cin>>k;
        long long sum = 0;
        for(int i = 1; i <= n;i ++)
        cin>>v[i];
        if(k == 0)
        for(int i = 1; i <= n;i ++){
            sum += v[i];
        }
        else{
            long long sum1 = 0, sum0 = 0;
            for(int i = 1; i <= n;i ++){
                 if(v[i] != 0)
                 sum1++;
                 else
                 sum0++;
            }
            if(sum1 == n){
                for(int i = 1; i <= n;i ++)
                sum = sum + 2 * k + v[i];
                
            }

            if(sum1 != n && sum0 != n){
                int gasit = -1;
            for(int i = 1; i <= n && gasit == -1 ; i++)
            if(v[i] != 0)
            gasit = i;

            int kk = 1;
            for(int i = gasit; i <= n; i++)
            copie[kk++] = v[i];
            for(int i = 1; i < gasit; i++)
            copie[kk++] = v[i];
      
            int nr1 = 1, nr0 = 0;
            for(int i = 2; i <= n; i++){
                if(copie[i] != 0 && nr0 != 0){
                    int mm = 1;
                    if(nr0 % 2 == 1){
                        for(int j = i - nr0; j < i - nr0 / 2 - 1; j++){
                        suma[j] = mm;
                        suma[i - mm] = mm;
                        mm++;
                        }
                        suma[i - nr0 / 2 - 1] = mm;
                    }
                    else
                    for(int j = i - nr0; j < i - nr0 / 2; j++){
                    suma[j] = mm;
                    suma[i - mm] = mm;
                    mm++;
                    }
                    nr0 = 0;
                }
                if(copie[i] == 0){
                    nr0++;
                    if(i == n){
                    int mm = 1;
                    if(nr0 % 2 == 1){
                        for(int j = n - nr0 + 1; j < n - nr0 / 2; j++){
                        suma[j] = mm;
                        suma[n - mm + 1] = mm;
                        mm++;
                        }
                        suma[n - nr0 / 2 ] = mm;
                    }
                    else{
                        for(int j = n - nr0 + 1; j <= n - nr0 / 2; j++){
                        suma[j] = mm;
                        suma[n - mm + 1] = mm;
                        mm++;
                        }
                    }
                    nr0 = 0;
                    }
                }
            }
            for(int i = 1; i <= n; i++){
                sum += copie[i];
                if(i != 1 && i != n){
                    if(copie[i - 1] != 0)
                    sum += k;
                    if(copie[i + 1] != 0)
                    sum += k;
                    if(copie[i + 1] == 0){
                        if(k >= suma[i + 1])
                        sum += k - suma[i + 1];
                    }
                    if(copie[i - 1] == 0){
                        if(k >= suma[i - 1])
                        sum += k - suma[i - 1];
                    }
                }
                if( i == 1){
                    if(copie[i + 1] != 0)
                    sum += k;
                    if(copie[i + 1] == 0){
                        if(k >= suma[i + 1])
                        sum += k - suma[i + 1];
                    }
                    if(copie[n] != 0)
                    sum += k;
                    if(copie[n] == 0){
                        if(k >= suma[n])
                        sum += k - suma[n];
                    }

                }
                if( i == n){
                    if(copie[1] != 0)
                    sum += k;
                    if(copie[1] == 0){
                        if(k >= suma[1])
                        sum += k - suma[1];
                    }
                    if(copie[n - 1] != 0)
                    sum += k;
                    if(copie[n - 1] == 0){
                        if(k >= suma[n - 1])
                        sum += k - suma[n - 1];
                    }

                }

            }
            }
        }

    cout<<sum<<endl;
        
    }

	return 0;
}

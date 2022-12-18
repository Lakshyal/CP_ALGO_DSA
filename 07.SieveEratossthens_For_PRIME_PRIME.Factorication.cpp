#include<bits/stdc++.h>

using namespace std;

int sieve[1000005];
void createSieve(){
    int n =1000000;
    for(int i =2;i<=n;i++) sieve[i]=1;
    for(int i =2;i*i<=n;i++){
        if(sieve[i]==1){
            for(int j = i*i;j<=n;j = j+i){
                sieve[j]=0;
            }
        }
    }
}
void primeCheck(){
    int t;
    cin>>t;
    createSieve();
    while(t--){
        int p;
        cin>>p;
        if(sieve[p]==1) cout<<"YES PRIME ";
        else cout<<"NOT PRIME";
    }
}
int main(){
    primeCheck();
    return(0);
}

#include <iostream>
#define ll long long

using namespace std;
ll powerr[100005];
ll fact[100005];
ll mod = (ll)(1e9+7);

ll power(ll base, ll n, ll mod){
    ll ans =1;
    while(n){
        if(n%2){
            n = n-1;
            ans = (ans%mod*base%mod)%mod;
        }
        else {
            n = n/2;
            base = (base*base)%mod;
        }
    }
    return ans;
}
void preComputeFactorial(){
    fact[0] = 1;
    powerr[0] =1;
    ll ans = 1;
    for(ll i = 1; i<100005 ; i++){
        ans = (ans*i)%mod;
        fact[i] = ans;
        powerr[i] = power(fact[i],mod-2,mod);
    }
} 

ll nCr(int n , int r){
    return ((fact[n]*powerr[r])%mod*powerr[n-r])%mod;
}

void testCases(){
    ll t;
    cin>>t;
    preComputeFactorial();
    while(t--){
        ll n , r;
        cin >> n >>r;
        cout<< nCr(n,r)<<std::endl;
    }
}
int main()
{
    testCases();
    return 0;
}

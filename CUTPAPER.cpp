#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll x=n/k;
        cout<<x*x<<"\n";
    }
    return 0;
}

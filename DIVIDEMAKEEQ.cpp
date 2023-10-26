#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll hcf=v[0];
        for(int i=1;i<n;i++){
            hcf=__gcd(hcf, v[i]);
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            if(v[i]!=hcf) ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}

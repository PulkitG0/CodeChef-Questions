#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll q;
    cin>>q;
    while(q--){
        ll n, max=0;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]>max) max=v[i];
        }
        cout<<max<<"\n";
    }
    return 0;
}

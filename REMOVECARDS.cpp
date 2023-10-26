#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n), count(101, 0);
        ll max=0;
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(), v.end());
        for(int i=0;i<n;i++){
            count[v[i]]++;
        }
        for(int i=0;i<count.size();i++) if(count[i]>max) max=count[i];
        cout<<n-max<<"\n";
    }
    return 0;
}

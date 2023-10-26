#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, max=0;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(), v.end());
        int count =1;
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1]) count++;
            if(v[i]!=v[i-1] || i==n-1){
                if(count>max) max=count;
                count=1;
            }
        }
        cout<<ceil(log2(max))<<endl;
    }
    return 0;
}

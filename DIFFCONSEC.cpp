#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, ans=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) ans++;
        }
        cout<<ans<<"\n";
    }    
    return 0;
}

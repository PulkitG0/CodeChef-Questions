#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, count=0;
        cin>>n;
        string s;
        cin>>s;
        if(n%2==1) cout<<"yes \n";
        else {
            for(int i=0;i<n;i++){
                if(s[i]=='1') count++;
            }
            if(count%2==1) cout<<"no \n";
            else cout<<"yes \n";
        }
    }
    return 0;
}

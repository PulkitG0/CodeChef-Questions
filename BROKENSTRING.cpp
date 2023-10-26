#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string a=s.substr(0, (n/2)), b=s.substr((n/2), (n/2));
        if(a==b) cout<<"YES \n";
        else cout<<"NO \n";
    }
    return 0;
}

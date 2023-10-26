#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b)%2==1 || (c+b)%2==1 || (a+c)%2==1) cout<<"yes \n";
        else cout<<"no \n";
    }    
    return 0;
}

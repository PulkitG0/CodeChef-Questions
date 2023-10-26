#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n >= (k*(k+1))/2) cout<<"YES \n";
        else cout<<"NO \n";
    }
    return 0;
}

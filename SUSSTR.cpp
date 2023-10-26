#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,p,q;
        cin>>n;
        if(n%2==1) {
            p=((n-1)/2)+1;
            q=n-p;
        }
        else p=n/2, q=n/2;
        string v, a, b;
        cin>>v;
        a=v.substr(0, p), b=v.substr(p, q);
        string s="";
        for(int i=q-1;i>=0;i--){
            if(a[q-i-1]=='1') s.push_back(a[q-i-1]);
            else s.insert(s.begin(), a[q-i-1]);
            if(b[i]=='0') s.push_back(b[i]);
            else s.insert(s.begin(), b[i]);
        }
        if(p>q){
            if(a[p-1]=='1') s.push_back(a[p-1]);
            else s.insert(s.begin(), a[p-1]);
        }
        cout<<s<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<int> ca(26, 0), cb(26, 0);
        for(int i=0;i<n;i++){
            ca[a[i]-'a']++;
            cb[b[i]-'a']++;
        }
        ll max=-1;
        for(int i=0;i<26;i++){
            if(ca[i]>cb[i]){
                if(cb[i]>max) max=cb[i];
            }
            else{
                if(ca[i]>max) max=ca[i];
            } 
        }
        cout<<max<<"\n";
    }    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool ans=0;
        for(int i=0;i<s.size()-2;i++){
            string temp=s.substr(i, 3);
            int count=0;
            for(int j=0;j<3;j++){
                if(temp[j]=='a' || temp[j]=='e' || temp[j]=='i' || temp[j]=='o' || temp[j]=='u') count++;
            }
            if(count==3) {
                ans=1;
                break;
            }
        }
        if(ans) cout<<"happy \n";
        else cout<<"sad \n";
    }
    return 0;
}

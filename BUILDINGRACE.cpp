#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long double a,b,x,y;
	    long double ta,tb;
	    cin>>a>>b>>x>>y;
	        ta=a/x, tb=b/y;
    	    if(ta>tb) cout<<"Chefina \n";
	        else if(ta==tb) cout<<"Both \n";
	        else cout<<"Chef \n";
	}
	return 0;
}

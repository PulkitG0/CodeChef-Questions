#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>x;
	    if(x>100) cout<<x-10<<"\n";
	    else cout<<x<<"\n";
	}
	return 0;
}

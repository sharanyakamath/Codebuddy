
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i,s;
	    cin>>n;
	    s=sqrt(n);
	    if(n-s*s < (s+1)*(s+1)-n)
	        cout<<s*s<<" "<<n-s*s<<endl;
	    else
	        cout<<(s+1)*(s+1)<<" "<<(s+1)*(s+1)-n<<endl;
	}
	return 0;
}
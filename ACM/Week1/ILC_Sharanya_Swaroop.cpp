#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],i,min=INT_MAX;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        if(min>a[i])
	            min=a[i];
	    }
	    cout<<min<<endl;
	}
	return 0;
}

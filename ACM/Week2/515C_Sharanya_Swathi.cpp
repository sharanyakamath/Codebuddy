#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	char s[n];
	cin>>s;
	vector<int> v;
	for(i=0;i<n;i++){
		if(s[i]=='2')
			v.push_back(2);
		else if(s[i]=='3')
			v.push_back(3);
		else if(s[i]=='4')
			v.push_back(2), v.push_back(2), v.push_back(3);
		else if(s[i]=='5')
			v.push_back(5);
		else if(s[i]=='6')
			v.push_back(5),v.push_back(3);
		else if(s[i]=='7')
			v.push_back(7);
		else if(s[i]=='8')
			v.push_back(2),v.push_back(2),v.push_back(2), v.push_back(7);
		else if(s[i]=='9')
			v.push_back(7),v.push_back(3),v.push_back(3),v.push_back(2);
	}
	sort(v.begin(),v.end());
	for(i=v.size()-1;i>=0;i--)
			cout<<v[i];
	cout<<endl;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
	char s[100];
	int i, count1=0, count0=0;
	cin>>s;
	for(i=0;i<strlen(s);i++){
		if(s[i]=='0')
			count0++, count1=0;
		else
			count1++, count0=0;
		if(count1>=7 || count0>=7)
			{cout<<"YES"<<endl; break;}
	}
	if(i==strlen(s))
		cout<<"NO"<<endl;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,j,hard=0,easy=0,vowel=0,cons=0,flag=0;
		char s[100000];
		cin.getline(s, 50);
		int len=strlen(s);
		for(i=0;i<=len;i++){
			if(i==len ||  s[i]==' '){
				if(flag==1 || cons>vowel)
					hard++, flag=0;
				else
					easy++;
				vowel=0;
				cons=0;
			}
			else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
				vowel++;
			}
			else{
				cons++;
				if(cons==4)
					flag=1;
			}
		}
		cout<<5*hard + 3*easy<<endl;
	}
}

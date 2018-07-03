//Calculate difficulty of a given sentence. Here a Word is considered hard if it has 4 consecutive consonants or number of consonants are more than number of vowels. Else word is easy. Difficulty of sentence is defined as 5*(number of hard words) + 3*(number of easy words).
//Sharanya Kamath, Kaushik Kalmady

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,j,hard=0,easy=0,vowel=0,cons=0,flag=0;
		string s;
		getline(cin>>ws,s);
		int len=s.length();
		if(s[len-1]==' ')
			len--;
		for(i=0;i<len;i++){
			if(s[i]==' ' && s[i-1]==' ')
				continue;
			if(i==len-1 ||  s[i]==' '){
				if(flag==1 || cons>vowel)
					hard++, flag=-1;
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

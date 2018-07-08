//Given an absolute path for a file (Unix-style), simplify it.
//Sharanya Kamath, Arvind Sai K

#include <bits/stdc++.h>
using namespace std;
int main(){
	string c;
	int n,i,j;
	stack <string> s;
	stack <string> s1;
	cin>>c;
	n=c.length();
	for(i=0;i<n;i++){
		if(c[i]=='.' && c[i+1]=='.'){
			s.pop();
			i++;
		}
		else if(c[i]!='/' && c[i]!='.'){
			string st;
			while(c[i]!='/' && i<n){
				st.push_back(c[i]); 
				i++;
			}
			s.push(st);
		}
	}
	while(!s.empty()){
		s1.push(s.top());
		s.pop();
	}
	while(!s1.empty()){
		cout<<'/'<<s1.top();
		s1.pop();
	}
	cout<<endl;
	
}
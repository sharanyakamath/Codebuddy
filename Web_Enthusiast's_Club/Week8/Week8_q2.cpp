#include  <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	string word[n];
	list <int> adj;
	for(i=0;i<n;i++)
		cin>>word[i];
	for(i=0;i<n-1;i++){
		for(j=0;j<min(word[i].length(),word[i+1].length());j++){
			if(word[i][j]!=word[i+1][j]){
				adj[word[i][j]-'a']=word[i+1][j]-'a';
			}
		}
	}
	
}
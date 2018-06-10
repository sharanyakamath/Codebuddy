//Save Gotham
//https://practice.geeksforgeeks.org/problems/save-gotham/0
//Sharanya Kamath and Aneesh Aithal

#include <bits/stdc++.h>
#define MOD 1000000001
#define lli long long int
using namespace std;
lli st[100000],tope=-1;
void push(lli x){
	st[++tope]=x;
}
void pop(){
	tope--;
}
lli top(){
	if(tope<0)
		return -1;
	return st[tope];
}
int main(){
	lli t;
	cin>>t;
	while(t--){
		tope=-1;
		lli n,i,sum=0;
		cin>>n;
		lli h[n];
		for(i=0;i<n;i++){
			cin>>h[i];
		}
		for(i=0;i<n;i++){
			check:
			if(top()==-1){
				push(h[i]);
			}
			else if(h[i]>top()){
				sum=(sum%MOD + h[i]%MOD)%MOD;
				pop();
				goto check;
			}
			else{
				push(h[i]);
			}
		}
		cout<<sum<<endl;
	}
}
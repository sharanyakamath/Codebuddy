//Given an array of non-negative integers, you are initially positioned at the first index of the array.
//Each element in the array represents your maximum jump length at that position.
//Your goal is to reach the last index in the minimum number of jumps.
//Sharanya Kamath and Rakshith G

#include <bits/stdc++.h>
using namespace std;

void minjumps(int n, int A[]){
	int maxi=A[0],steps=A[0],jumps=1,i;
	if(A[0]==0)
		{cout<<-1<<endl; return;}
	for(i=1;i<n;i++){
		maxi=max(maxi,i+A[i]);
		if(i==n-1)
			{cout<<jumps<<endl; return;}
		steps--;
		if(steps==0){
			if(i>=maxi)
				{cout<<-1<<endl; return;}
			steps=maxi-1;
			jumps++;
		}
	}	
}
int main(){
	int n,i;
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
		cin>>A[i];
	minjumps(n,A);
}
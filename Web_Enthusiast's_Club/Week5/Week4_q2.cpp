//Given an array of non-negative integers, you are initially positioned at the first index of the array.
//Each element in the array represents your maximum jump length at that position.
//Your goal is to reach the last index in the minimum number of jumps.
//Sharanya Kamath and Rakshith G

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,min;
	cin>>n;
	int A[n],dp[n];
	for(i=0;i<n;i++)
		cin>>A[i];
	dp[n-1]=0;
	for(i=n-2;i>=0;i--){
		dp[i]=-1, min=INT_MAX;
		for(j=1;j<=A[i] && i+j<n;j++){
			if(min>dp[i+j] && dp[i+j]!=-1)
				min=1+dp[i+j];
		}
		if(min!=INT_MAX)
			dp[i]=min;
	}
	cout<<dp[0]<<endl;
}
//Given a string S composed of 0 and 1. Find the minimum splits such that the substring is a binary representation of the power of 4 or 6 with no leading zeros. Print -1 if no such partitioning is possible.
//Sharanya Kamath and Vighnesh V

#include <bits/stdc++.h>
using namespace std;

long long int power(long long int v, long long int base)
{
    while(v>1){
        if (v%base!=0)
            return 0; 
        v/=base;
    }
    return 1;
}

long long int parts(char num[])
{
    long long int i,j,n=strlen(num);
    long long int v;
    long long int dp[n];
 
    dp[n-1]=((num[n-1]-'0')==0)?-1:1;

    for (i=n-2;i>=0;i--){
        v=0;
        if((num[i]-'0')==0){
            dp[i]=-1;
            continue;
        }
 
        dp[i]=INT_MAX;
 
        for (j=i;j<n;j++){
 
            v=(v*2)+(long long int)(num[j]-'0');
            if (power(v,4)||power(v,6)) {
                if (j==n-1){
                    dp[i]=1;
                }
                else {
                    if(dp[j+1]!=-1)
                        dp[i]=min(dp[i], dp[j+1]+1);
                }
            }
        }

        if (dp[i]==INT_MAX)
            dp[i]=-1;
    }
 
    return dp[0];
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		char num[50];
    	cin>>num;
    	cout<<parts(num)<<endl;
	}
}
//Given an array, find the subarray (containing at least k numbers) which has the largest sum.
//Sharanya Kamath and M.M.Vikram

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	int sum=a[0],maxs[n],ans=0;
	maxs[0]=a[0];
	for(i=1;i<n;i++)
		{sum=max(a[i],sum+a[i]); maxs[i]=sum;}
	for(i=0,sum=0;i<k;i++)
		sum+=a[i];
	for(i=k;i<n;i++){
		sum+=a[i]-a[i-k];
		ans=max(ans,sum);
		ans=max(ans,sum+maxs[i-k]);
	}
	cout<<ans<<endl;
}

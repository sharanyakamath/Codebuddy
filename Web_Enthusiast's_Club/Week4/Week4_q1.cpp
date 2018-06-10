//Given an array A of n integers, find 3 integers in S such that the sum is closest to a given number.
//Print the sum of the three integers.
//Sharanya Kamath and Rakshith G

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k,x,sum=INT_MAX;
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
		cin>>A[i];
	cin>>x;
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			for(k=j+1;k<n;k++){
				if(abs(x-sum)>abs(x-(A[i]+A[j]+A[k])))
					sum=A[i]+A[j]+A[k];
			}
		}
	}
	cout<<sum<<endl;
}
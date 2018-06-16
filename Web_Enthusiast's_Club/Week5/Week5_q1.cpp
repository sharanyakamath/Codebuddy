//Given an array A of n integers, find 3 integers in S such that the sum is closest to a given number.
//Print the sum of the three integers.
//Sharanya Kamath and Rakshith G

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(){
	int n,i,j,k,x,sum=INT_MAX,sum1,l,r;
	cin>>n;

	int A[n];
	for(i=0;i<n;i++)
		cin>>A[i];

	cin>>k;
	sort(A,A+n);

	for(i=0;i<n-2;i++){
		x=A[i];
		l=i+1, r=n-1;
		while(l<r){
			sum1=x+A[l]+A[r];
			if(sum1==k){
				cout<<k<<endl;
				goto end;
			}
			else if(sum1<k)
				l++;
			else 
				r--;
		}
		if(abs((long int)(k-sum))>abs(k-sum1))
			sum=sum1;
	}
	
	cout<<sum<<endl;
	end:;
}
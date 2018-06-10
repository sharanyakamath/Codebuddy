//void mergeArrays(int arr1[], int arr2[], int m, int n);
//You are given the above function declaration. Assume arr1 and arr2 are two sorted arrays with m integers, and n integers respectively.  Also assume, that arr1 has the capacity to hold (m + n) integers. Create the function which stores the contents of arr1 and arr2 in arr1 in sorted order, with O(1) space and O(m + n) time complexity. No need to return arr1, just store the values in arr1.
//Sharanya Kamath and Aditya Kamath

#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n,i;
	cin>>m>>n;
	int arr1[m+n], arr2[n];
	for(i=0;i<m;i++)
		cin>>arr1[i];
	for(i=0;i<n;i++)
		cin>>arr2[i];
	
	for(i=m-1;i>=0;i--)
		arr1[i+n]=arr1[i];

	int j=n, k=0;
	for(i=0;i<m+n;i++){
		if(k<n){
			if(arr1[j]>arr2[k])
				arr1[i]=arr2[k], k++;
			else if(j<m+n)
				arr1[i]=arr1[j], j++;	
		}
	}

	for(i=0;i<m+n;i++)
		cout<<arr1[i]<<" ";
	cout<<endl;	
}
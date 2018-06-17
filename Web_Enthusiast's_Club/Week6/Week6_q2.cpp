//N number of books are given. 
//The ith book has Pi number of pages. 
//You have to allocate books to M number of students so that maximum number of pages alloted to a student is minimum. A book will be allocated to exactly one student. Each student has to be allocated at least one book. Allotment should be in contiguous order, for example: A student cannot be allocated book 1 and book 3, skipping book 2.

//Sharanya Kamath and Het Shah

#include <bits/stdc++.h>
using namespace std;

int possible(int mid, int P[], int n, int m){
	int s=1,i,sum=0;

	for(i=0;i<n;i++){
		if(P[i]>mid)
			return 0;
		else if(sum+P[i]>mid){
			s++;
			sum=P[i];
		}
		else
			sum+=P[i];
	}
	if(s>m)
		return 0;
	return 1;
}
int main(){
	int n,m,i,j,k,sum=0,min;
	cin>>n;
	int P[n];
	for(i=0;i<n;i++){
		cin>>P[i];
		sum+=P[i];
	}
	cin>>m;
	if(n<m){
		cout<<-1<<endl;
		exit(0);
	}
	int l=0,r=sum,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(!possible(mid,P,n,m)){
			l=mid+1;
		}
		else{
			min=mid;
			r=mid-1;
		}
	}
	cout<<min<<endl;
}
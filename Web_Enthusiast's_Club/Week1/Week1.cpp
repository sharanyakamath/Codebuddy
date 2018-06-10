//Search in a matrix
//https://practice.geeksforgeeks.org/problems/search-in-a-matrix/0
//Sharanya Kamath and Akhil U

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
     	int x,n,m,i,j;
     	cin>>n>>m;
     	int mat[n][m];
     	for(i=0;i<n;i++){
     	    for(j=0;j<m;j++){
     	        cin>>mat[i][j];
     	    }
     	}
     	cin>>x;
     	int a=n-1,b=0,flag=0;
     	while(a>=0 && b<m){
     	    if(mat[a][b]==x)
     	        {cout<<1<<endl; flag=1; break;}
     	    else if(mat[a][b]<x)
     	        b++;
     	    else
     	        a--;
     	}
     	if(flag==0)
     	    cout<<0<<endl;
    }
	return 0;
}
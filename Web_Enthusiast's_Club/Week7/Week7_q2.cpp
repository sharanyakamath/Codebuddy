#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long unsigned int z,n,m,ans;
        cin>>z>>n>>m;
        ans=z-1;
        for(int i=1;i<m;i++){
            ans=(z*(ans))%1000000007;
            z++;
        }
        cout<<ans<<endl;
    }
}
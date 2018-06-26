//Rahul entered lift on the ground floor of his building which consists of Z floors including the ground floor. The lift already had N people in it. It is known that they will leave the lift in groups. Let us say that there are M groups. Rahul is curious to find the number of ways in which these M groups can leave the lift. It is assumed that each group is unique and no one leaves the lift on the ground floor.
//Since the answer can be too large take modulo 1000000007.
//Sharanya Kamath and Vighnesh V

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
//Given a sorted dictionary (array of words) of an alien language, find order of characters in the language.
//Sharanya Kamath, Kaushik Kalmady

#include  <bits/stdc++.h>
using namespace std;

void topo(int i, int visited[], stack<int> &st, list <int> adj[])
{
    visited[i] = 1;
    list<int>::iterator it;
    for (it = adj[i].begin(); it != adj[i].end(); ++it)
        if (!visited[*it])
            topo(*it, visited, st, adj);
 
    st.push(i);
}
int main(){
	int n,i,j,vertices=0,val[26]={0};
	cin>>n;
	string word[n];
	for(i=0;i<n;i++){
		cin>>word[i];
		for(j=0;j<word[i].length();j++){
			if(val[word[i][j]-'a']==0)
				val[word[i][j]-'a']=1, vertices++;
		}
	}
	list <int> adj[vertices];
	for(i=0;i<n-1;i++){
		for(j=0;j<min(word[i].length(),word[i+1].length());j++){
			if(word[i][j]!=word[i+1][j]){
				adj[word[i][j]-'a'].push_back(word[i+1][j]-'a');
				break;
			}
		}
	}
	stack<int> st;
 
    int  visited[vertices] = {0};
    for (i = 0; i < vertices; i++)
        if (visited[i] == 0)
            topo(i, visited, st, adj);

    while (!st.empty())
    {
        cout << (char)('a' + st.top()) << " ";
        st.pop();
    }
    cout<<endl;
}
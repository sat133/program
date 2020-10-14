#include<bits/stdc++.h> 
#include<algorithm>
#include<stdio.h>
using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

	int t;
	cin>>t;
	while(t--)
	{
	    int v,e;
	    cin>>v>>e;
	    vector<int> gp[v];
	    for(int i=0; i<e; i++)
	    {
	        int a,b;
	        cin>>a>>b;
	        gp[a].push_back(b);
	        gp[b].push_back(a);
	        
	    }
	    for(int j=0; j<v; j++)
	    {
	        cout<<j<<"";
	        for(auto z: gp[j])
	         cout<<"-> "<<z<<"";
	     cout<<"\n";

	    }
	    

	}
	return 0;
}



// bfs
vector <int> bfs(vector<int> g[], int N) {
    queue<int> q;
    vector<int> ans;
    q.push(0);
    bool vis[N+1] = {false};
    while(!q.empty())
    {
        int n = q.front();
        q.pop();
        ans.push_back(n);
        for(auto si: g[n])
         if(!vis[si])
         {
             vis[si] = true;
             q.push(si);
         }
    }
    return ans;



//dfs
vector<int> dfs(vector<int> g[], int N){
	bool vis[N+1] = {false};
	vector<int> ans;
	stack<int> s;
	s.push(0);
	ans.push(0);
	vis[0] = true;
	int i=0;
	while(!s.empty())
	{
		int i = s.pop();
		for(auto ch : g[i])
		{
			if(!vis[ch])
				
		}
	}
}

   // dfs
 bool vis[N+1] = {false};
vector<int> adj;
vecotr<int> ans;

vector<int> dfs(vector<int> adj[], int i, vector< int> ans )
{
	vis[i] = true;
	ans.push_back(i);
	for(auto it : adj[i])
	{
		if(!vis[it])
			dfs(adj,it,ans);
	}
	return ans;
}

for(int i=0; i<N; i++)
{
	if(!vis[i])
		dfs(adj, i, ans);
}

//dfs

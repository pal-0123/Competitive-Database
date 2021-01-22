#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1000000007;

void dfs(int node,int&cnt,vector<vector<int> >&grp,vector<int>& vis,vector<int>&edg){
	vis[node]=1;
	cnt++;
	for (int child:grp[node]){
		if (!vis[child]){
			int cur=cnt;
			dfs(child,cnt,grp,vis,edg);
			edg.push_back((cur+(vis.size()-cnt))*(cnt-cur));
		}
	}
}

signed main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<vector<int> > grp(n);
		for(int i=0;i<n-1;i++){
			int u,v;
			cin >> u >> v;
			grp[u-1].push_back(v-1);
			grp[v-1].push_back(u-1);
		}
		int m;
		cin >> m;
		vector<int> fct;
		for(int i=0;i<m;i++){
			int temp;
			cin >> temp;
			fct.push_back(temp);
		}
		if(m>n-1){
			sort(fct.begin(),fct.end());
			int cur=fct[fct.size()-1];
			for(int i=fct.size()-2;i>=n-2;i--){
				cur*=fct[i];
				cur%=mod;
			}		
			fct.erase(fct.begin()+n-2,fct.end());
			fct.push_back(cur);
		}
		else{
			while(m<n-1){
				m++;
				fct.push_back(1);
			}
			sort(fct.begin(),fct.end());
		}

		int cnt=0;
		vector<int> vis(n,0);
		vector<int> edg;
		dfs(0,cnt,grp,vis,edg);
		
		sort(edg.begin(),edg.end());
		int ans=0;
		for(int i=0;i<n-1;i++){
			ans+=(((fct[i]%mod)*(edg[i]%mod))%mod);
			ans%=mod;
		}
		cout << ans << endl;
	}

	return 0;
}
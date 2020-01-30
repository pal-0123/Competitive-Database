#include <bits/stdc++.h>
using namespace std;
#define int long long int

// int vis[10000]={0};
// set<int> cnt;
// int sv[10000]={-1};
// int getans(int n,int k,string s[],int cur,int lst,int steps){
// 	if(s[lst][cur]=='0'){
// 		return -1;
// 	}
// 	if(cur==n-1){
// 		// cout << cur;
// 		return steps;
// 	}
// 	vis[cur]=1;

// 	int l,h;
// 	l=cur-k;
// 	h=cur+k;
// 	if(h>=n){
// 		h=n-1;
// 	}
// 	if(l<0){
// 		l=0;
// 	}
// 	int ans=-1;
// 	for(int i=l;i<=h;i++){
		
// 		if(s[cur][i]=='1' && vis[i]==0 &&cnt.find(i)!=cnt.end()){
// 			// cout << cur << i << endl;
// 			// cout << ans << cur << i << s[0]<< endl;
// 			int temp=sv[i];
// 			if(sv[i]==-1){
// 				temp=getans(n,k,s,i,cur,steps+1);	
// 			}
			
// 			if(ans==-1){
// 				ans=temp;
// 			}
// 			else if(temp!=-1 && temp<ans){
// 				ans=temp;
// 			}
// 		}
// 	}
// 	vis[cur]=0;
// 	// if(ans!=-1){
// 	// 	cout << cur;
// 	// }
// 	if(ans==-1){
// 		cnt.insert(cur);
// 	}
// 	sv[cur]=ans;
// 	return ans;
// }

int vis[10000]={0};
int level[10000]={0};
vector<int> graph[10000];
int bfs(int source,int n){
	queue <int> q;
	vis[source]=1;
	q.push(source);
	level[source]=0;
	while (!q.empty()){
		int parent=q.front();
		q.pop();
		for (int child:graph[parent]){
			if (!vis[child]){
				vis[child]=1;
				q.push(child);
				if(child==n-1){
					// cout << "asd";
				// 	return level[parent]+1;
				}
				level[child]=level[parent]+1;
			}
		}
	}
	return level[n-1];
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
 		// cnt.clear();
 		// graph.clear();
 		int n,k;
 		cin >> n >> k;
 		for(int i=0;i<5000;i++){
 			vis[i]=0;
 			level[i]=-1;
 			graph[i].clear();
 		}
 		string s[n];
 		for(int i=0;i<n;i++){
 			cin >> s[i];
 		}
 		
 		for(int i=0;i<n;i++){
 			int l=i-k;
 			int h=i+k;
 			if(l<0){
 				l=0;
 			}
 			if(h>=n){
 				h=n-1;
 			}
 			for(int j=l;j<=h;j++){
 				if(s[i][j]=='1'){
 					graph[i].push_back(j);
 				}
 			}
 		}
 		// int ans=getans(n,k,s,0,0,0);
 		// cout << "asdf";
 		if(s[0][0]=='0'){
 			cout << -1 << endl;
 			continue;
 		}
 		int ans=bfs(0,n);
 		cout << ans << endl;
 	}

	return 0;
}
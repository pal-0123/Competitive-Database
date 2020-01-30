#include <bits/stdc++.h>
using namespace std;
#define int long long int

int vis[100000]={0};
int level[100000]={0};
vector <int> graph[100000];
int bfs(int source,int n){
	// int vis[n]={0};
	// int level[n]={0};
	queue <int> q;
	vis[source]=1;
	q.push(source);
	while (!q.empty()){
		int parent=q.front();
		q.pop();
		for (int child:graph[parent]){
			if (!vis[child]){
				vis[child]=1;
				q.push(child);
				// level[child]=level[parent]+1;
				level[child]=bfs(child,n);
			}
		}
	}

	// level[source]=0;
	// int max=0;
	vector<int> childscr;
	for(int child:graph[source]){
		// int i=child;
		// if(level[i]>max){
		// 	max=level[i];
		// }
		childscr.push_back(level[child]);
	}
	sort(childscr.begin(),childscr.end());
	int curscr=0;
	for(int child:childscr){
		curscr=1+max(child,curscr);
	}


	level[source]=curscr;

	return level[source];
}

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin >> n;
	
	for(int i=1;i<n;i++){
		int temp;
		cin >> temp;
		graph[temp-1].push_back(i);
	}
	int ans=bfs(0,n);
	cout << ans;


	return 0;
}
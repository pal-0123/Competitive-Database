#include <bits/stdc++.h>
using namespace std;
#define int long long int

int getmx(vector<vector<vector<int> > >&dp, vector<int>&r,vector<int>&g,vector<int>&b,int i,int j,int k){
	if(i>=0 && j>=0 && k>=0 && dp[i][j][k]!=-1){
		return dp[i][j][k];
	}

	int cur=0;
	if(i>=0 && j>=0){
		cur=max(cur,r[i]*g[j]+getmx(dp,r,g,b,i-1,j-1,k));
	}
	if(k>=0 && j>=0){
		cur=max(cur,b[k]*g[j]+getmx(dp,r,g,b,i,j-1,k-1));
	}
	if(i>=0 && k>=0){
		cur=max(cur,r[i]*b[k]+getmx(dp,r,g,b,i-1,j,k-1));
	}
	if(i>=0 && j>=0 && k>=0 && dp[i][j][k]==-1){
		dp[i][j][k]=cur;
	}
	return cur;
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

	int r,g,b;
	cin >> r >> g >> b;
	vector<int> cr,cg,cb;
	for(int i=0;i<r;i++){
		int temp;
		cin >> temp;
		cr.push_back(temp);
	}
	for(int i=0;i<g;i++){
		int temp;
		cin >> temp;
		cg.push_back(temp);
	}
	for(int i=0;i<b;i++){
		int temp;
		cin >> temp;
		cb.push_back(temp);
	}
	sort(cr.begin(),cr.end());
	sort(cg.begin(),cg.end());
	sort(cb.begin(),cb.end());

	vector<vector<vector<int> > >dp(202, vector<vector<int> >(202,vector<int>(202,-1)) );

	cout << getmx(dp,cr,cg,cb,r-1,g-1,b-1);

	return 0;
}
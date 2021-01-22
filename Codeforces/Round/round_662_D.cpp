#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool ext(vector<pair<int,int> >&it,vector<string>&s){
	int n=it.size();
	for(int i=0;i<=n/4;i++){
		if(it[i].second==0){
			return false;
		}
		if(s[it[i].first][it[i].second]!=s[it[i].first][it[i].second-1]){
			return false;
		}
	}
	for(int i=n/4;i<=2*n/4;i++){
		if(it[i].first==0){
			return false;
		}
		if(s[it[i].first][it[i].second]!=s[it[i].first-1][it[i].second]){
			return false;
		}
	}
	for(int i=2*n/4;i<=3*n/4;i++){
		if(it[i].second+1==s[0].length()){
			return false;
		}
		if(s[it[i].first][it[i].second]!=s[it[i].first][it[i].second+1]){
			return false;
		}
	}
	for(int i=3*n/4;i<n;i++){
		if(it[i].first+1==s.size()){
			return false;
		}
		if(s[it[i].first][it[i].second]!=s[it[i].first+1][it[i].second]){
			return false;
		}
	}
	if(s[it[0].first][it[0].second]!=s[it[0].first+1][it[0].second]){
		return false;
	}
	return true;
}

vector<pair<int,int> > getnxt(vector<pair<int,int> >&it,vector<string>&s){
	int n=it.size();
	vector<pair<int,int> > ret;
	for(int i=0;i<=n/4;i++){
		ret.push_back({it[i].first,it[i].second-1});
	}
	for(int i=n/4;i<=2*n/4;i++){
		ret.push_back({it[i].first-1,it[i].second});
	}
	for(int i=2*n/4;i<=3*n/4;i++){
		ret.push_back({it[i].first,it[i].second+1});
	}
	for(int i=3*n/4;i<n;i++){
		ret.push_back({it[i].first+1,it[i].second});
	}
	ret.push_back({it[0].first+1,it[0].second});
	return ret;
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

    int n,m;
    cin >> n >> m;
    int ans=n*m;
    vector<string> s(n);
    for(int i=0;i<n;i++){
    	cin >> s[i];
    }
    vector<vector<pair<int,int> > >pos;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		pos.push_back({{i,j},{i,j},{i,j},{i,j}});
    	}
    }
    while(pos.size()!=0){
    	vector<vector<pair<int,int> > >nxt;
    	for(auto it:pos){
    		if(ext(it,s)){
    			ans++;
    			nxt.push_back(getnxt(it,s));
    		}
    	}
    	pos=nxt;
    }
	cout << ans << endl;
	return 0;
}
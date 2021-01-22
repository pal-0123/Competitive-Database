#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int n;
    cin >> n;
    int a[n];
    map<int,int> mp;
    map<int,set<int> > rev;
    for(int i=0;i<n;i++){
    	cin >> a[n];
    	mp[a[n]]++;
    }
    for(auto it:mp){
    	if(it.second<=8){
    		rev[it.second].insert(it.first);	
    	}
    	else{
    		rev[8].insert(it.first);
    	}
    }
    int q;
    cin >> q;
    while(q--){
    	char c;
    	int cur;
    	cin >> c >> cur;
    	if(c=='+'){
    		if(mp.find(cur)!=mp.end()){
    			int prev=mp[cur];
    			if(prev<=7){
    				rev[prev].erase(rev[prev].find(cur));
    				rev[prev+1].insert(cur);	
    			}
    		}
    		else{
    			rev[1].insert(cur);
    		}
    		mp[cur]++;
    	}
    	else{
    		int prev=mp[cur];
    		if(prev<=8){
    			rev[prev].erase(rev[prev].find(cur));
    			rev[prev-1].insert(cur);	
    		}
			mp[cur]--;
    	}
    	int sqr=0;
    	sqr=rev[4].size()+rev[5].size()+rev[6].size()+rev[7].size()+2*rev[8].size();
    	int rct=0;
    	rct+=rev[2].size()+rev[3].size()+rev[6].size()+rev[7].size();
    	rct/=2;

    	if(sqr>=2){
    		cout << "YES\n";
    	}
    	else if(sqr==1 && rct>=1){
    		cout << "YES\n";
    	}
    	else{
    		cout << "NO\n";
    	}
    }

	return 0;
}
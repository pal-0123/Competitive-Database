#include <bits/stdc++.h>
using namespace std;
#define int long long int

int mincst(vector<int>&f,int l,int h,int k,set<int>&brk){
	if(l==h){
		return k;
	}
	int cur=0;
	int brk1[h-l+1],brk2[h-l+1];
	map<int,int> mp;
	for(int i=l;i<=h;i++){
		if(mp.find(f[i])!=mp.end()){
			if(mp[f[i]]>=2){
				cur++;
			}
			else{
				cur+=2;
			}
		}
		mp[f[i]]++;
		brk1[i-l]=cur;	
	}
	int temp=0;
	mp.clear();
	brk2[h-l]=0;
	mp[f[h]]++;
	for(int i=h-1;i>=l;i--){
		if(mp.find(f[i])!=mp.end()){
			if(mp[f[i]]>=2){
				temp++;
			}
			else{
				temp+=2;
			}
		}
		mp[f[i]]++;
		brk2[i-l]=temp;	
	}

	int act=k+cur;
	int mn=act,mnpos=-1;
	for(int i=l;i<h;i++){
		if(brk1[i-l]+brk2[i-l+1]+2*k<=mn){
			mn=brk1[i-l]+brk2[i-l+1]+2*k;
			mnpos=i;
		}
	}
	// cout << mnpos << " " << mn << endl;
	if(mnpos==-1){
		return act;
	}
	int ans=mn;
	for(int i=l;i<h;i++){
		if(brk1[i-l]+brk2[i-l+1]+2*k==mn){
			ans=min(ans,mincst(f,l,i,k,brk)+mincst(f,i+1,h,k,brk));	
			if(brk.find(i)!=brk.end()){
				return ans;
			}
		}
	}
	return ans;
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
		int n,k;
		cin >> n >> k;
		vector<int> f;
		for(int i=0;i<n;i++){
			int temp;
			cin >> temp;
			f.push_back(temp);
		}
		set<int> hv;
		hv.insert(f[0]);
		set<int> brk={0};
		for(int i=1;i<n;i++){
			if(hv.find(f[i])!=hv.end()){
				brk.insert(i);
				hv.clear();
				hv.insert(f[i]);
			}
			else{
				hv.insert(f[i]);
			}
		}
		if(k==1){
			cout << brk.size() << endl;	
		}
		else{
			cout << mincst(f,0,f.size()-1,k,brk) << endl;
		}
		

	}

	return 0;
}
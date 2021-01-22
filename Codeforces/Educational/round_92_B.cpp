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

	 int t;
	 cin >> t;
	 while(t--){
	 	string s;
	 	cin >> s;
	 	int n=s.length();
	 	int i=0;
	 	vector<int> on;
	 	while(i<n){
	 		int cur=0;
	 		int j=i;
	 		while(i<n && s[i]==s[j]){
	 			i++;
	 			cur++;
	 		}
	 		if(s[j]=='1'){
	 			on.push_back(cur);
	 		}
	 	}
	 	if(on.size()>0){
	 		sort(on.begin(),on.end());	
	 	}
	 	
	 	int ans=0;
	 	int onn=on.size();
	 	for(int i=onn-1;i>=0;i-=2){
	 		ans+=on[i];
	 	}
	 	cout << ans << endl;
	 }

	return 0;
}
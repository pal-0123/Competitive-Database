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
		string s,p;
		cin >> s;
		cin >> p;
		int cnt[26]={0};
		for(auto i:s){
			cnt[i-'a']++;
		}
		for(auto i:p){
			cnt[i-'a']--;
		}
		int flg=true;
		for(int i=1;i<p.length();i++){
			if(p[i]<p[i-1]){
				flg=false;
				break;
			}
			else if(p[i]>p[i-1]){
				break;
			}
		}
		for(int i=0;i<(p[0]-'a');i++){
			for(int j=0;j<cnt[i];j++){
				cout << (char)('a'+i);
			}
		}
		if(flg){
			for(int j=0;j<cnt[p[0]-'a'];j++){
				cout << p[0];
			}	
		}
		cout << p;
		if(!flg){
			for(int j=0;j<cnt[p[0]-'a'];j++){
				cout << p[0];
			}	
		}
		for(int i=(p[0]-'a'+1);i<26;i++){
			for(int j=0;j<cnt[i];j++){
				cout << (char)('a'+i);
			}	
		}
		cout << endl;
	}
	
	return 0;
}
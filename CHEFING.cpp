#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin >> t;
    while (t--){
    	int n;
    	cin >> n;
    	int cha[26]={0};
    	string s;
    	int i;
    	for (i=0;i<n;i++){
    		cin >> s;
    		for (auto j : s){
    			if (cha[(int)j-'a']==i){
    				//cout << j << " " << cha[(int)j-'a'] << " " << i << "\n"; 
    				cha[(int)j-'a']++;	
    			}
    		}
    		//cout << "\n";
    	}
    	int ans=0;
    	for (i=0;i<26;i++){
    		if (cha[i]==n){
    			//cout << i << " " << cha[i] << "\n";
    			ans++;
    		}
    	}
    	cout << ans << "\n";

    }
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin >> t;
    while(t--){
    	string p,h;
    	cin >> p >> h;
    	if(p.length()>h.length()){
    		cout << "NO\n";
    		continue;
    	}
    	int cntp[26]={0};
    	for(int i=0;i<p.length();i++){
    		cntp[p[i]-'a']++;
    	}
    	int cnth[h.length()][26]={0};
    	for(int i=0;i<h.length();i++){
    		for(int j=i;j<h.length();j++){
    			cnth[j][h[i]-'a']++;
    		}
    	}
    	int i,j;
    	for(i=0;i<h.length();i++){
    		for(j=i+1;j<=h.length();j++){
    			int k;
    			for(k=0;k<26;k++){
    				if(h[i]==k+'a'){
    					if(cntp[k]!=(cnth[j-1][k]-cnth[i][k]+1)){
    						break;
    					}	
    				}
    				else{
    					if(cntp[k]!=(cnth[j-1][k]-cnth[i][k])){
    						break;
    					}
    				}
    				
    			}
    			if(k==26){
    				break;
    			}
    		}
    		if(j!=h.length()+1){
    			break;
    		}
    	}
    	if(i!=h.length()){
    		cout << "YES\n";
    	}
    	else{
    		cout << "NO\n";
    	}
    }

	return 0;
}
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
    	int n;
    	cin >> n;
    	int a[n];
    	int i;
    	for(i=0;i<n;i++){
    		cin >> a[i];
    	}
    	string s;
    	cin >> s;
    	int ans=0;
    	int first=-1;
    	for(i=0;i<n;i++){
    		if(a[i]!=-1){
    			first=i;
    			break;
    		}
    	}
    	if(first==-1){
    		cout << "YES\n";
    	}
    	else{
    		int range[n][2];
    		range[first][0]=range[first][1]=a[first];
    		for(i=first-1;i>-1;i--){
    			if(s[i]=='>'){
    				range[i][0]=range[i+1][0]+1;
    				range[i][1]=1000000;
    			}
    			else if(s[i]=='='){
    				range[i][0]=range[i+1][0];
    				range[i][1]=range[i+1][1];
    			}
    			else{
    				range[i][0]=0;
    				range[i][1]=range[i+1][1]-1;
    				if(range[i][1]==-1){
    					break;
    				}
    			}
    		}
    		if(i!=-1){
    			cout << "NO\n";
    		}
    		else{
    			for(i=first+1;i<n;i++){
    				if(a[i]==-1){
    					if(s[i-1]=='<'){
    						range[i][0]=range[i-1][0]+1;
    						range[i][1]=1000000;
    					}
    					else if(s[i-1]=='='){
    						range[i][0]=range[i-1][0];
    						range[i][1]=range[i-1][1];
    					}
    					else{
    						range[i][0]=0;
    						range[i][1]=range[i-1][1]-1;
    						if(range[i][1]==-1){
    							break;
    						}
    					}
    						
    				}
    				else{
    					if(s[i-1]=='<'){
    						range[i][0]=range[i-1][0]+1;
    						range[i][1]=1000000;
    					}
    					else if(s[i-1]=='='){
    						range[i][0]=range[i-1][0];
    						range[i][1]=range[i-1][1];
    					}
    					else{
    						range[i][0]=0;
    						range[i][1]=range[i-1][1]-1;
    						if(range[i][1]==-1){

    							break;
    						}
    					}
    					if(range[i][0]<=a[i] && a[i]<=range[i][1]){
    						range[i][0]=a[i];
    						range[i][1]=a[i];
    					}
    					else{
    						// cout << i;
    						break;
    					}
    				}
    					
    				
    					
    				
    			}
    			if(i!=n){
    				cout << "NO\n";
    			}
    			else{
    				cout << "YES\n";
    			}
    		}
    	}
    }
	
	return 0;
}
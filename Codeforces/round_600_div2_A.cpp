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
    	int a[n],b[n];
    	for(int i=0;i<n;i++){
    		cin >> a[i];
    	}
    	for(int i=0;i<n;i++){
    		cin >> b[i];
    	}
    	int dif=-1,temp=-1;
    	int i;
    	for(i=0;i<n;i++){
    		if(dif==-1 && temp==-1){
    			if((b[i]-a[i])!=0 && b[i]-a[i]>0){
    				dif=abs(a[i]-b[i]);
    				temp=1;
    			}
    			else if(b[i]-a[i]<0){
    				break;
    			}
    		}
    		else{
    			if(dif==-1){
    				if((b[i]-a[i])==0){
    					;// dif=abs(a[i]-b[i]);
    				}
    				if((b[i]-a[i])!=0){
    					break;// dif=abs(a[i]-b[i]);	
    					// dif=-1;
    				}
    			}
    			else{
    				if((b[i]-a[i])!=dif && abs(a[i]-b[i])!=0){
    					break;
    				}
    				else if((b[i]-a[i])==0){
    					dif=-1;
    				}
    			}
    		}
    	}	
    	if(i==n){
    		cout << "YES\n";
    	}
    	else{
    		cout << "NO\n";
    	}
    }
    
	
	return 0;
}
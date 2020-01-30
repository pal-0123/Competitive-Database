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
    	int a[n],d[n];
    	int i;
    	for (i=0;i<n;i++){
    		cin >> a[i];
    	}
    	for (i=0;i<n;i++){
    		cin >> d[i];
    	}
    	set <int> live;
    	for (i=0;i<n;i++){
    		if (i==0){
    			if (a[n-1]+a[1]<d[i]){
    				live.insert(d[i]);
    			}
    		}
    		else if (i==n-1){
    			if (a[n-2]+a[0]<d[i]){
    				live.insert(d[i]);
    			}
    		}
    		else{
    			if (a[i-1]+a[i+1]<d[i]){
    				live.insert(d[i]);
    			}
    		}

    	}
    	if (live.empty()){
    		cout << "-1\n";
    	}
    	else{
    		set <int> :: iterator it;
    		it=live.end();
    		it--;
    		cout << (*it) << "\n";
    	}
    }
    
	
	return 0;
}
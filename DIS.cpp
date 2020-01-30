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
    	int a[n],b[n];
    	int i;
    	for (i=0;i<n;i++){
    		cin >> a[i];
    	}
    	for (i=0;i<n;i++){
    		cin >> b[i];
    	}
    	if (a[0]!=0 || b[n-1]!=0 || a[n-1]!=b[0]){
    		cout << "No\n";
    	}
    	else{
    		for (i=0;i<n;i++){
    			if (a[i]+b[i]<b[0] || a[i]>b[i]+b[0] || b[i]>a[i]+b[0]){
    				break;
    			}
    		}
    		if (i==n){
    			cout << "Yes\n";
    		}
    		else{
    			cout << "No\n";
    		}
    	}
    }
	
	return 0;
}
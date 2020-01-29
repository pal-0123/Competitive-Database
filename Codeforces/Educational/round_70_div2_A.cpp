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
    	string x,y;
    	cin >> x;
    	cin >> y;
    	int l1=x.length();
    	int l2=y.length();
    	reverse(x.begin(),x.end());
    	reverse(y.begin(),y.end());

    	int ans=0,temp=0;
    	int i;
    	for(i=0;i<l2;i++){
    		if (y[i]=='1'){
    			temp=i;
    			break;
    		}
    	}
    	int temp2;
    	for(i=temp;i<l1;i++){
    		if (x[i]=='1'){
    			temp2=i;
    			break;
    		}
    	}
    	ans=temp2-temp;
    	cout << ans << endl;
    }
    
	
	return 0;
}
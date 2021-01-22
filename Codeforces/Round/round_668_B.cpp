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
    	int n;
    	cin >> n;
    	int a[n];
    	for(int i=0;i<n;i++){
    		cin >> a[i];
    	}
    	int i=n-1;
    	int sneg[n];
		if(a[n-1]<0){
			sneg[n-1]=(0-a[i]);
		}
		else{
			sneg[n-1]=0;
		}
    	for(int i=n-2;i>=0;i--){
    		if(a[i]<0){
    			sneg[i]=sneg[i+1]-a[i];
    		}
    		else{
    			sneg[i]=sneg[i+1];
    		}
    	}
    	int ans=0;
    	int us=0;
    	for(int i=n-1;i>=0;i--){
    		if(a[i]>0){
    			int c=min(sneg[i]-us,a[i]);
    			us+=c;
    			ans+=(a[i]-c);
    		}
    	}
    	cout << ans << endl;

    }

	return 0;
}
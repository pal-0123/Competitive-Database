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
    	int n,m,c;
    	cin >> n >> m >> c;
    	int x[n],y[n];
    	int ans=0,pnt=0;
    	for(int i=0;i<n;i++){
    		cin >> x[i] >> y[i];
    	}
    	int l=0,r=0;
    	for(int i=0;i<n;i++){
    		if(m*x[i]+c>y[i]){
    			l++;
    		}
    		else if(m*x[i]+c<y[i]){
    			r++;
    		}
    	}
    	ans=l*r;
    	cout << ans << endl;

    }

	return 0;
}
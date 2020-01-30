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

    int n,k;
    cin >> n >> k;
    char s[n];
    for(int i=0;i<n;i++){
    	cin >> s[i];
    }
    set<char> can;
    for(int i=0;i<k;i++){
    	char t;
    	cin >> t;
    	can.insert(t);
    }
    int mark[n],t=0;
    for(int i=0;i<n;i++){
    	if(can.find(s[i])==can.end()){
    		mark[t++]=i;
    		// cout << mark[t-1] << " ";
    	}
    }
    // cout << endl;
    int ans=0;
    int prev=0;
    for(int i=0;i<t;i++){
    	ans+=((mark[i]-prev)*(mark[i]-prev+1))/2;
    	prev=mark[i]+1;
    }
	ans+=((n-prev)*(n-prev+1))/2;
	cout << ans;
	return 0;
}
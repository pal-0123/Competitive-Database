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
    	int n,m;
    	cin >> n >> m;
    	int a[n];
    	set<pair<int,int> > a1;
    	for(int i=0;i<n;i++){
    		cin >> a[i];
    		a1.insert(make_pair(a[i],i));
    	}
    	int b[m];
    	for(int i=0;i<m;i++){
    		cin >> b[i];
    	}
    	
    	// for(int i=0;i<n;i++){
    		
    	// }
    	// int frst=-1;
    	// for(int i=0;i<n;i++){
    	// 	if(a[i]==b[0]){
    	// 		frst=i;
    	// 		break;
    	// 	}
    	// }
    	int zer=0;
    	int frst=(*(a1.lower_bound(make_pair(b[0],zer)))).second;
    	// set<int> pos;
    	// pos.insert(frst);
    	int cur=1;
    	int lst=frst;
    	int ans=2*frst+1;
    	while(cur<m){
    		int curpos=(*(a1.lower_bound(make_pair(b[cur],zer)))).second;
    		// int temp=(pos.lower_bound(pos.begin(),pos.end(),curpos)-pos.begin());
    		if(curpos<lst){
    			ans++;
    		}
    		else{
    			ans+=(2*(curpos-cur)+1);
    		}
    		// cout << lst << curpos << endl;
    		lst=max(lst,curpos);
    		cur++;
    	}
    	cout << ans << endl;
    }

	return 0;
}
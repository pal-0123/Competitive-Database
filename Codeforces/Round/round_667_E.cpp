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
		int n,k;
		cin >> n >> k;
		int x[n];
		int y[n];
		for(int i=0;i<n;i++){
			cin >> x[i];
		}
		for(int i=0;i<n;i++){
			cin >> y[i];
		}

		vector<pair<int,int> >pnt;
		for(int i=0;i<n;i++){
			pnt.push_back({x[i],y[i]});
		}
		sort(pnt.begin(),pnt.end());
		// for(auto it:pnt){
		// 	cout << it.first << " ";
		// }
		// cout << endl;
		int i=0,j=0;
		int mx=-1;
		vector<pair<int,int> > sf;
		int lst=-1;
		int flg=0;
		while(j<n){
			if(pnt[j].first-pnt[i].first<=k){
				// cout << i << j << " ";
				mx=max(mx,j-i+1);
				j++;
				flg=1;				
			}
			else{
				// cout << "a" << pnt[j].first-pnt[i].first << " ";
				sf.push_back({i,j-1});
				lst=j-flg;
				while(pnt[j].first-pnt[i].first>k){
					i++;
				}
				flg=0;
			}
		}
		// cout << endl;
		// cout << i << endl;
		if(flg){
			sf.push_back({i,n-1});	
			mx=max(mx,n-1-i+1);
		}		
		// for(auto it:sf){
		// 	cout << it.second-it.first+1 << " ";
		// }
		// cout << endl;
		int m=sf.size();
		int ans=2;
		ans=min(ans,n);
		for(int i=0;i<m;i++){
			for(int j=i+1;j<m;j++){
				if(sf[i].second<sf[j].first){
					ans=max(ans,sf[j].second-sf[j].first+1 +sf[i].second-sf[i].first+1);
				}
				else{
					ans=max(ans,sf[j].second-sf[i].first+1);
				}
				if(sf[i].second<=sf[j].first && sf[j].second-sf[j].first+1==mx){
					break;
				}
			}
			ans=max(ans,sf[i].second-sf[i].first+1);
		}
		cout << ans << endl;
	}

	return 0;
}
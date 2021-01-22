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
			char x;
			cin >> x;
			a[i]=(x-'0');
		}
		int sm[n];
		sm[0]=a[0];
		for(int i=1;i<n;i++){
			sm[i]=a[i]+sm[i-1];
		}
		map<int,int> cnt;
		int ans=0;
		for(int i=0;i<n;i++){
			ans+=cnt[sm[i]-i];		
			cnt[sm[i]-i]++;				
			if(sm[i]==i+1){
				ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
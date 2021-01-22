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
		int mn=INT_MAX;
		bool flg=true;
		for(int i=0;i<n;i++){
			cin >> a[i];
			mn=min(mn,a[i]);
			if(i>0){
				if(a[i]<a[i-1]){
					flg=false;
				}
			}
		}
		if(flg){
			cout << "YES\n";
		}
		else{
			int b[n];
			for(int i=0;i<n;i++){
				b[i]=a[i];
			}
			sort(b,b+n);
			flg=true;
			for(int i=0;i<n;i++){
				if(a[i]!=b[i] && a[i]%mn!=0){
					flg=false;
				}
			}
			if(flg){
				cout << "YES\n";		
			}
			else{
				cout << "NO\n";
			}
		}

	}

	return 0;
}
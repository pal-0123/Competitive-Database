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
        vector<int> a;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        int mx=1;
        for(int i=1;i<n;i++){
            mx=max(mx,abs(a[i-1]-a[i]));
        }
        if(mx==1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

	return 0;
}
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
        int a[n],b[n];
        int mna,mnb;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(i==0){
                mna=a[i];
            }
            else{
                mna=min(mna,a[i]);
            }
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            if(i==0){
                mnb=b[i];
            }
            else{
                mnb=min(mnb,b[i]);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=max(a[i]-mna,b[i]-mnb);
        }
        cout << ans << endl;

    }
	
	return 0;
}
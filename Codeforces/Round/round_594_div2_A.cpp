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
        int n,m;
        cin >> n;
        int p[n];
        int i;
        int p_ev=0,p_od=0;
        for(i=0;i<n;i++){
            cin >> p[i];
            if(p[i]%2==1){
                p_od++;
            }
            else{
                p_ev++;
            }
        }
        cin >> m;
        int q[m];
        int q_ev=0,q_od=0;
        for(i=0;i<m;i++){
            cin >> q[i];
            if(q[i]%2==1){
                q_od++;
            }
            else{
                q_ev++;
            }
        }
        int ans=0;
        ans+=q_od*p_od;
        ans+=q_ev*p_ev;
        cout << ans << endl;
        
    }

	return 0;
}
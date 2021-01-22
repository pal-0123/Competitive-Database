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
        multiset<int> w;
        int mx=-1;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            mx=max(mx,temp);
            w.insert(temp);
        }
        int ans=0;
        for(int i=2;i<=2*mx;i++){
            multiset<int> cur=w;
            int curans=0;
            for(auto it:w){
                if(it<i && cur.find(it)!=cur.end()){
                    cur.erase(cur.find(it));
                    if(cur.find(i-it)!=cur.end()){
                        curans++;
                        cur.erase(cur.find(i-it));
                    }
                    else{
                        cur.insert(it);
                    }
                }
            }
            ans=max(ans,curans);
        }
        cout << ans << endl;
    }
	
	return 0;
}
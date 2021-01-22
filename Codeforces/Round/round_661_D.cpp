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
        string s;
        cin >> s;
        int ans[n];
        for(int i=0;i<n;i++){
            ans[i]=0;
        }
        vector<int> lst0,lst1;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(lst1.size()==0){
                    ans[i]=lst0.size()+1;
                    lst0.push_back(i);
                }
                else{
                    ans[i]=ans[lst1[0]];
                    lst0.push_back(lst1[0]);
                    lst1.erase(lst1.begin());
                }
            }
            else{
                if(lst0.size()==0){
                    ans[i]=lst1.size()+1;
                    lst1.push_back(i);
                }
                else{
                    ans[i]=ans[lst0[0]];
                    lst1.push_back(lst0[0]);
                    lst0.erase(lst0.begin());
                }
            }
        }

        cout << lst0.size()+lst1.size() << endl;
        for(int i=0;i<n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
	
	return 0;
}
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
        bool flg=true;
        while(a.size()>1 && flg){
            flg=false;
            for(int i=1;i<a.size();i++){
                if(abs(a[i-1]-a[i])<=1){
                    flg=true;
                    int temp=max(a[i-1],a[i]);
                    a.erase(a.begin()+i-1,a.begin()+i+1);
                    a.insert(a.begin()+i-1,temp);
                    i--;
                }
            }
        }
        if(a.size()==1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

	return 0;
}
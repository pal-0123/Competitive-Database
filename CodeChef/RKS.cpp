#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin >> t;
    while (t--){
    	int n,k;
    	cin >> n >> k;
    	int rgiven[k],cgiven[k];
    	int i;
    	int rpos[n+1]={0},cpos[n+1]={0};
    	rpos[0]=1;
    	cpos[0]=1;
    	for (i=0;i<k;i++){
    		cin >> rgiven[i] >> cgiven[i];
    		rpos[rgiven[i]]=1;
    		cpos[cgiven[i]]=1;
    	}
    	int ans=0;
    	vector <int> r,c;
    	for (i=1;i<n+1;i++){
    		//cout << rpos[i] << " " << cpos[i] <<"\n";
    		if (rpos[i]==0){
    			ans++;
    			r.push_back(i);
    		}
    		if (cpos[i]==0){
    			c.push_back(i);
    		}
    	}
    	vector<int>::size_type sz = r.size();
    	cout << ans << " ";
    	for (i=0;i<sz;i++){
    		cout << r[i] << " " << c[i] << " ";
    	}
    	cout << "\n";
    }

	
	return 0;
}
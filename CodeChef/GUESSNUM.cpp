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
    	int a,m;
    	cin >> a >> m;
    	int mx=(m)/a;
    	int curd=(m-mx*a);
    	if(curd==0){
    		curd=a;
    		mx--;
    	}
    	int i=(mx-curd)/(a+1);
    	vector<int> n;
    	// cout << i;
    	for(int j=0;j<=i;j++){
    		if((mx-j)%(curd+j*a)==0){
    			n.push_back(mx-j);
    		}
    	}
    	cout << n.size() << endl;
    	sort(n.begin(),n.end());
    	for(auto it:n){
    		cout << it << " ";
    	}

    	cout << endl;
    	
    	// vector<int> mul;
    	// int temp=a;
    	// while(temp<=m){
    	// 	mul.push_back(temp);
    	// 	temp+=a;
    	// }
		    	

    }

	return 0;
}
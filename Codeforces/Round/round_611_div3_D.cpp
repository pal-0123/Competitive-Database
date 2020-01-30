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

    int n,m;
    cin >> n >> m;
    set<int> x;
    set<int> occ;
    for(int i=0;i<n;i++){
    	int temp;
    	cin >> temp;
    	occ.insert(temp);
    	x.insert(temp);
    }
    vector<int> y;
    int curd=0;
    int dist=0;
    while(y.size()<m){
    	curd++;
    	set<int> torem;
    	for(auto it:x){
    		int zz=0;
    		if(x.find(it+curd)==x.end()){
    			
    			if(occ.find(it+curd)==occ.end()){
    				zz++;
    				y.push_back(it+curd);
    				dist+=curd;
    				occ.insert(it+curd);	
    			}
    			
    		}
    		if(y.size()>=m){
    			break;
    		}
    		if(x.find(it-curd)==x.end()){
    			
    			if(occ.find(it-curd)==occ.end()){
    				zz++;
    				dist+=curd;
    				y.push_back(it-curd);
    				occ.insert(it-curd);	
    			}
    		}
    		if(zz==0){
    			torem.insert(it);
    		}
    		if(y.size()>=m){
    			break;
    		}
    	}
    	if(y.size()>=m){
    		break;
    	}
    	for(auto it:torem){
    		x.erase(x.find(it));
    	}
    }
    cout << dist << endl;
    for(int i=0;i<m;i++){
    	cout << y[i] << " ";
    }


	return 0;
}
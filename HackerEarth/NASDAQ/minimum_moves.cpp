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
    	int n,k;
    	cin >> n >> k;
    	char grid[n][k];
    	vector<int> m_at[n];
    	for(int i=0;i<n;i++){
    		for(int j=0;j<k;j++){
    			cin >> grid[i][j];
    			if(grid[i][j]=='M'){
    				m_at[i].push_back(j);
    			}
    		}
    	}
    	int i;
    	for(i=0;i<n;i++){
    		if(m_at[i].size()==0){
    			break;
    		}
    	}
    	if(i==n){
    		vector<int> ans;
    		for(int j=0;j<k;j++){
    			int move=0;
    			for(i=0;i<n;i++){
    				int i1,i2,i3,i4;
    				i1=m_at[i][0];
    				i2=m_at[i][m_at[i].size()-1];
    				i3=*(upper_bound(m_at[i].begin(),m_at[i].end(),j));
    				if(j>i2)
    				{
    					i3=i2;	
    				}
    				i4=i3;
    				if(i3!=m_at[i][0]){
    					i4=*(--upper_bound(m_at[i].begin(),m_at[i].end(),j));
    				}
    				int m1,m2,m3,m4;
    				// m1=min(i1-j+k)
    				if(i1>j){
    					m1=i1-j;
    				}
    				else{
    					m1=min(j-i1,i1-j+k);
    				}
    				if(i2>j){
    					m2=i2-j;
    				}
    				else{
    					m2=min(j-i2,i2-j+k);
    				}
    				if(i3>j){
    					m3=i3-j;
    				}
    				else{
    					m3=min(j-i3,i3-j+k);
    				}
    				if(i4>j){
    					m4=i4-j;
    				}
    				else{
    					m4=min(j-i4,i4-j+k);
    				}
    				// cout << i << " " << j << " " << m1 << " " << m2 << " " << m3 << " " << m4 << endl; 
    				int curmove;
    				curmove=min(m1,m2);
    				curmove=min(m3,curmove);
    				curmove=min(m4,curmove);
    				move+=curmove;
    			}
    			ans.push_back(move);
    		}
    		sort(ans.begin(),ans.end());
    		cout << ans[0] << endl;
    	}
    	else{

    		cout << "-1\n";
    	}

    }

	return 0;
}
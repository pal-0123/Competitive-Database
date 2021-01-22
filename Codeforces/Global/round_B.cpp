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
    	int n,m;
    	cin >> n >> m;
    	int grd[n][m];
    	int vis[n][m];
    	vector<pair<int,int> > q;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			cin >> grd[i][j];
    			vis[i][j]=0;
    			if(grid[i][j]>0){
    				q.push_back({i,j});
    			}
    		}
    	}
    	int flg=0;
    	while(q.size()!=0){
    		int i,j;
    		i=q[0][0];
    		j=q[0][1];
    		if(grd[i][j]>4){
    			flg=1;
    			break;
    		}
    		if((i==0 && j==0) || (i==n-1 && j==m-1)){
    			if(grd[i][j]>2){
    				flg=1;
    				break;
    			}
    			int nbr=0;
    			if()
    		}
    		else if(i==0 || j==0 || i==n-1 || j==m-1){
    			if(grd[i][j]>3){
    				flg=1;
    				break;
    			}
    		}
    		else{

    		}
    		vis[i][j]=1;
    		q.erase(q.begin());
    	}

    	if (flg){
    		cout << "NO\n";
    	}
    	else{
    		cout << "YES\n";
    		for(int i=0;i<n;i++){
    			for(int j=0;j<m;j++){
    				cout << grd[i][j] << " ";
    			}
    			cout << endl;
    		}
    	}
    }


	return 0;
}
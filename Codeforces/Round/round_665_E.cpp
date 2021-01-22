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
	map<int,set<int> > xl,xr,yl,yr;
	int xls=0,yls=0;
	int ans=1;
	for(int i=0;i<n;i++){
		int lx,y,rx;
		cin >> y >> lx >>rx;
		if(lx==0){
			if(rx==1000000){
				ans++;
			}
			xl[rx].insert(y);
			xls++;
		}
		else{
			xr[lx].insert(y);
		}
	}	
	for(int i=0;i<m;i++){
		int x,ly,ry;
		cin >> x >> ly >>ry;
		if(ly==0){
			if(ry==1000000){
				ans++;
			}
			yl[ry].insert(x);
			yls++;
		}
		else{
			yr[ly].insert(x);
		}
	}


	return 0;
}
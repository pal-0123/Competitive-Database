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
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		int n1=n,m1=m;
		if(n1%2==0){
			n1--;
		}if(m1%2==0){
			m1--;
		}
		map<pair<int,int>,int> rw,cl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int maxsize=min(2*i+1,m1);
				maxsize=min(maxsize,2*(n-i-1)+1);
				maxsize=min(maxsize,2*j+1);
				maxsize=min(maxsize,2*(m-j-1)+1);
				int first=-1;
				// cout << j << " " << maxsize << endl;
				maxsize++;
				for(int k=j-maxsize/2+1;k<j;k++){
					if(first==-1 && a[i][k]==a[i][j+maxsize/2-1-(k-j+maxsize/2-1)]){
						first=k;
					}
					if(a[i][k]!=a[i][j+maxsize/2-1-(k-j+maxsize/2-1)]){
						first=-1;
					}
				}
				if(first==-1){
					rw[make_pair(i,j)]=1;

				}
				else{
					rw[make_pair(i,j)]=(j-first+1);
					// cout << i << " " << j << endl;
				}
			}
		}

		for(int j=0;j<m;j++){
			for(int i=0;i<n;i++){
				int maxsize=min(2*i+1,m1);
				maxsize=min(maxsize,2*(n-i-1)+1);
				maxsize=min(maxsize,2*j+1);
				maxsize=min(maxsize,2*(m-j-1)+1);
				int first=-1;
				maxsize++;
				for(int k=i-maxsize/2+1;k<i;k++){
					if(first==-1 && a[k][j]==a[i+maxsize/2-1-(k-i+maxsize/2-1)][j]){
						first=k;
					}
					if(a[k][j]!=a[i+maxsize/2-1-(k-i+maxsize/2-1)][j]){
						first=-1;
					}
				}
				if(first==-1){
					cl[make_pair(i,j)]=1;
				}
				else{
					cl[make_pair(i,j)]=(i-first+1);
					// cout << i << " " << j << endl;
				}
			}
		}
		int ans=0;
		for(auto it:rw){
			if(cl[it.first]!=0){
				ans+=(min(it.second,cl[it.first]));
				// cout << ans << " " << it.first.first << " " << it.first.second << endl;
			}
		}
		cout << ans << endl;
	}  	

	return 0;
}
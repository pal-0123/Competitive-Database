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
	
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	int ans[n],k=0;
	set<int> cur,vis;
	int i;
	for(i=0;i<n;i++){
		if(a[i]>0){
			// if(a[i]==1 && vis.find(a[i]))
			if(vis.find(a[i])==vis.end()){
				vis.insert(a[i]);
				cur.insert(a[i]);	
				if(a[i]==1){
					// cout << (*cur.find(1));
					// cout << "1";
				}			

			}
			else{
				// cout << i << " " << a[i] << " ";
				if(cur.size()==0){
					// cout << "1";
					ans[k++]=2*vis.size();
					vis.clear();	
					vis.insert(a[i]);
					cur.insert(a[i]);
					// cout << "2";
				}
				else{
					// cout << "1";
					break;
				}
			}
		}
		else{
			if(cur.find(-a[i])==cur.end()){
				// cout << "2";
				break;
			}
			else{
				// cout << a[i] << " ";
				// for(auto it=cur.begin();it!=cur.end();it++){
				// 	cout << *it << " ";
				// }
				// cout << endl;
				cur.erase(cur.find(-a[i]),++cur.find(-a[i]));
				// for(auto it=cur.begin();it!=cur.end();it++){
				// 	cout << *it << " ";
				// }
				// cout << endl;

			}
		}
	}
	if(i==n){
		if(cur.size()==0){
			if(vis.size()!=0){
				ans[k++]=2*vis.size();	
			}
			
			cout << k <<endl;
			for(int j=0;j<k;j++){
				cout << ans[j] << " ";
			}
			cout << endl;
		}
		else{
			cout << "-1\n";
		}
	}
	else{
		cout << "-1\n";
	}


	return 0;
}
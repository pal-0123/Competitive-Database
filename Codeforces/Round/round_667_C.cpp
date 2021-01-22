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
		int n,x,y;
		cin >> n >> x >> y;
		vector<int> fct;
		for(int i=1;i<=(y-x);i++){
			if((y-x)%i==0){
				fct.push_back(i);
			}
		}
		for(auto gc:fct){
			if((y-x)/gc<n){
				int a[n];
				a[0]=x;
				int cur=x,i=1;
				while(i<n && cur!=y){
					cur+=gc;
					a[i++]=cur;
				}
				cur=x;
				while(i<n){
					cur-=gc;
					if(cur<=0){
						break;
					}
					a[i++]=cur;
				}
				cur=y;
				while(i<n){
					cur+=gc;
					a[i++]=cur;
				}
				for(i=0;i<n;i++){
					cout << a[i] << " ";
				}
				cout << endl;	
				break;
			}
		}
				
	}

	return 0;
}
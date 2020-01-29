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
		int n,s;
		cin >> n >> s;
		int temp=s;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int i=0;
		while(a[i]<=s){
			s-=a[i++];
			if(i==n){
				break;
			}
		}
		// sort(a,a+i);
		if(i!=n){
			int p=0;
			for(int j=0;j<=i;j++){
				if(a[j]>a[p]){
					p=j;
				}
			}
			if(a[i]<=s+a[p]){
				// int z=i+1;
				// int x=s;
				// int zz=i;
				// while(z<n && a[z]<=x){
				// 	x-=a[z++];
				// }
				// s+=a[p];
				// while(i<n && a[i]<=s){
				// 	s-=a[i];
				// }
				// if(i>z){
				// 	cout << p << endl;
				// }
				// else{
				// 	cout << zz << endl;
				// }
				cout << p+1 << endl;
			}
			else{
				cout << i << endl;
			}
		}
		else{
			cout << "0\n";
		}
	}
	return 0;
}
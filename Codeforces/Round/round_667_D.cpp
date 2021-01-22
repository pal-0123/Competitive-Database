#include <bits/stdc++.h>
using namespace std;
#define int long long int

int sm(int n){
	int ret=0;
	while(n!=0){
		ret+=(n%10);
		n/=10;
	}
	return ret;
}

int ln(int n){
	int ret=0;
	while(n!=0){
		ret++;
		n/=10;
	}
	return ret;	
}

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
		int n,s;
		cin >> n >> s;
		int ans=0;
		while(sm(n)>s){
			int temp=n;
			int ind=1;
			while(temp%10==0){
				ind*=10;
				temp/=10;
			}
			ans+=(10-(temp%10))*ind;
			if(ind==18){
				break;
			}
			n+=(10-(temp%10))*ind;
		}
		cout << ans << endl;
	}	

	return 0;
}
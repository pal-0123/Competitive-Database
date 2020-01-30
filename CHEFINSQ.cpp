#include <bits/stdc++.h>
using namespace std;
#define int long long int
int m=1000000007;

int power(int x, int y){ 	
    int res = 1;
    x = x % m;  
    while (y > 0){ 
        if (y & 1){
        	res = (res*x) % m; 
        } 
        y = y>>1;
        x = (x*x) % m; 
    } 
    return res; 
}  

int modular_inverse(int a){
	return power(a,m-2);
}

int ncr(int n,int r){
	if(n<r){
		return 0;
	}

	int fact[n+1];
	fact[0]=1;
	for(int i=1;i<n+1;i++){
		fact[i]=(fact[i-1]*i)%m;
	}
	// cout << fact[n] << " " << fact[n-r] << " " << fact[r]<<endl;
	// cout << modular_inverse(fact[n-r]) << " " << modular_inverse(r)<<endl;
	int ret=(((fact[n]*modular_inverse(fact[r]))%m)*modular_inverse(fact[n-r]))%m;
	 // ret
	return ret;	
}

// int ncr1(int n,int r){
// 	// cout << n << r<<endl;
// 	// n=49;
// 	// r=25;
// 	int ret=1;
// 	int t=n;
// 	int div[r+1]={0};
// 	for(int i=n-r+1;i<=n;i++){
// 		ret=ret*i;
// 		for(int j=1;j<=r;j++){
// 			if(div[j]==0 && ret%j==0){
// 				ret/=j;
// 				div[j]=1;
// 			}
// 		}
// 	}
// 	for(int j=1;j<=r;j++){
// 		if(div[j]==0 && ret%j==0){
// 			ret/=j;
// 			div[j]=1;
// 		}
// 	}
// 	// cout << ret;
// 	return ret;
// }

int ncr1(int n,int r){
	// n=49;
	// r=25;
	int ret=1;
	int t1=n,t2=r;
	int r1=1;
	while(n>t1-t2){
		ret=ret*n;
		while(r1<=r && ret%r1==0){
			ret=ret/r1;
			r1++;
		}
		
		n--;
	}
	return ret;
}


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
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int n1=1;
		int i=k;
		while(i<n && a[i]==a[k-1]){
			n1++;
			i++;
		}
		i=k-1;
		int r=0;
		while(i>=0 && a[i]==a[k-1]){
			i--;
			r++;
		}
		// cout << n1+r-1 << " " << r<<endl;
		int ans=ncr1(n1+r-1,r);
		cout << ans <<endl;
		// cout << ncr1(50,25);
	}

	

	return 0;
}
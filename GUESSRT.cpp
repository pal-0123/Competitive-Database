#include <bits/stdc++.h>
using namespace std;
#define int long long int

int mod=1e9+7;
int inverse[300000]={0};

int power(int x, unsigned int y) 
{ 
    if (y == 0){ 
        return 1;
    }
    int p = power(x, y/2) % mod; 
    p = (p * p) % mod; 
    if (y%2==0){
        return p;
    }
    return (x*p)%mod;
}

int pq(int n,int k,int m,int p,int q,int ans){
	int pnew,qnew;
	if (m==1 || n==1){
		
		pnew=1;
		qnew=n;
		int x;
		if (inverse[qnew]==0){
			x=power(qnew,mod-2);
			inverse[n]=x;	
		}
		else{
			x=inverse[n];
		}
		int a;
		a=((ans%mod)*(x%mod))%mod;
		return a;
	}
	if (n<=k){
		pnew=1;
		qnew=n;
		int z;
		if (inverse[qnew]==0){
			z=power(qnew,mod-2);
			inverse[n]=z;	
		}
		else{
			z=inverse[n];
		}
		int p1=-1,q1=-1;
		int a=pq(n+k,k,m-1,p1,q1,ans);
		int x=(((n-1)%mod)*(z%mod))%mod;
		a=((a%mod)*(x%mod))%mod;
		a=(a+z)%mod;
		return a;
	}
	else{
		if (n%k==0){
			n=k;
		}
		else{
			n=n%k;	
		}
		return pq(n,k,m-1,p,q,ans);
	}
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
    while (t--){
    	int n,k,m;
    	int p=-1,q=-1;
    	cin >> n >> k >> m;
    	int ans=1;
    	ans=pq(n,k,m,p,q,ans);
    	cout << ans << "\n";
    }


	return 0;
}
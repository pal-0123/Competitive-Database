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


int ncr(int n,int r,int fact[]){
	if(n<r){
		return 0;
	}

	int ret=(((fact[n]*modular_inverse(fact[r]))%m)*modular_inverse(fact[n-r]))%m;
	return ret;	
}

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
	int n,k;
	cin >> n >> k;
	int a[n];
	map <int,int> dist;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(dist.find(a[i])!=dist.end()){
			dist[a[i]]++;
		}
		else{
			dist[a[i]]=1;
		}
	}
	int d=dist.size();
	// int sum=0;
	// map<int,int> :: iterator it;
	// it=dist.begin();
	// for(;it!=dist.end();it++){
	// 	if((it->second)!=1){
	// 		sum+=(it->second);
	// 	}
		
	// 	// cout << (it->second) << " " << sum<<endl;
	// }
	// // cout << sum <<endl;

	int fact[d+1];
	fact[0]=1;
	for(int i=1;i<d+1;i++){
		fact[i]=(fact[i-1]*i)%m;
	}

	int ans=0;
	while(k>1){
		ans+=ncr(d,k,fact);
		k--;
	}
	ans++;
	cout << ans <<endl;

	return 0;
}
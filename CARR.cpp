#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1000000007;
int fact[1000000]={0};

int power(int x,int y){
	int ans=1;
	while(y){
		if(y%2==0){
			x=x*x;
			x%=mod;
			y/=2;
		}
		else{
			ans=ans*x;
			ans%=mod;
			y--;
		}
	}
	return ans;
}
int modular_inverse(int a){
	// if()
	return power(a,mod-2);
}

int getpow(int x, unsigned int y){ 
    int res = 1;
    while (y > 0){
    	if (y & 1){
            res = (res*x)%mod; 
    	}
   
        y = y>>1; 
        x = x*x;  
    } 
    return res; 
}

int getans(int n,int m,int pw){
	if(pw==-1){
		return 0;
	}
	if(pw+1<n-pw-1){
		return 0;
	}
	int cur,ncr;
	cur=power(m-1,pw);
	ncr=fact[pw+1];
	if(n-pw-1>=0){
		ncr*=(modular_inverse(fact[n-pw-1]))%mod;
		ncr=ncr%mod;	
	}
	ncr*=(modular_inverse(fact[pw+1-(n-pw-1)]))%mod;
	ncr=ncr%mod;
	// cout << ncr << " " << pw << " " << fact[pw-(n-1-pw)] << endl;
	cur*=ncr;
	cur=cur%mod;
	return (cur+getans(n,m,pw-1))%mod;
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
  	fact[0]=1;
  	for(int i=1;i<1000000;i++){
  		fact[i]=(fact[i-1]*i)%mod;
  	}

  	while(t--){
  		int n,m;
  		cin >> n >> m;
  		if(m==1 && n>=3){
  			cout << "0\n";
  			continue;
  		}
  		if(m==1){
  			cout << "1" << endl;
  			continue;
  		}
  		if(n==1){
  			cout << m%mod << endl;
  			continue;
  		}
  		if(n==2){
  			cout << ((m%mod)*m)%mod << endl;
  			continue;
  		}  		
  		int ans=getans(n,m,n-1);
  		ans*=m;
  		cout << ans%mod << endl;
  	}

	return 0;
}
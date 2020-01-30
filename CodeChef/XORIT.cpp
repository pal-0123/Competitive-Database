#include <bits/stdc++.h>
using namespace std;
#define int long long int

int sumNatural(int n) { 
    int sum = (n * (n + 1))/2; 
    return sum; 
} 

int sumInRange(int l, int r){ 
    return sumNatural(r) - sumNatural(l - 1); 
}

int countDivisibles(int A, int B, int M) { 
    if (A % M == 0) {
        return (B / M) - (A / M) + 1; 
    }
  	
    return (B / M) - (A / M); 
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
	vector<int> powerOf;
	for(int i=2;i<10000000000;i=i*2){
		powerOf.push_back(i);
	}
	while(t--){
		int l,r;
		cin >> l >> r;
		int ans=0;
		ans=sumInRange(l,r);
		vector<int>:: iterator x=(lower_bound(powerOf.begin(),powerOf.end(),r));
		
		vector<int>:: iterator i1,i2;
		i1=lower_bound(powerOf.begin(),powerOf.end(),l);
		i2=lower_bound(powerOf.begin(),powerOf.end(),r);
		if(*i2!=r){
			i2--;
			// x--;
		}
		int pow2=0;
		pow2=i2-i1+1;
		// for(auto i=i1;i<=i2;i++){
		// 	// if(*i!=1){
		// 		// pow2+=(*i-2);	
		// 	// }	
		// 	pow2++;
		// }
		int zz=0;
		// cout << ans << endl;
		for(auto i=powerOf.begin();i<x;i++){
			ans-=countDivisibles(l,r,*i)*(*i-zz);
			zz+=(*i-zz);			
			// cout << ans << " " << *i << " " << zz-1 << endl;
		}
		ans-=(r-l+1)/2;
		if(l%2==1 && r%2==1){
			ans--;
		}
		// cout << ans << endl;
		ans-=pow2;
		if(l==1){
			ans--;
		}
		cout << ans << endl;
	}
	
	return 0;
}
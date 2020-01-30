#include <bits/stdc++.h>
using namespace std;
#define int long long int

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
    for(int i=2;i<1000000000000000005;i=i*2){
    	powerOf.push_back(i);
    }
    while(t--){
    	int l,r,k;
    	cin >> l >> r >> k;
    	vector<int>:: iterator x=(lower_bound(powerOf.begin(),powerOf.end(),r));
		int mp[(x-powerOf.begin())+1];
    	int zz=0;
    	for(auto i=powerOf.begin();i<x;i++){
    		// ans-=countDivisibles(l,r,*i)*(*i-zz);
    		mp[1+i-powerOf.begin()]=countDivisibles(l,r,*i);
    		zz=*i;
    	}
    	int temp=x-powerOf.begin();
    	for(int i=1;i<=temp;i++){
    		for(int j=i-1;j>0;j--){
    			mp[j]-=mp[i];
    		}
    		// mp[i]+=(int)pow(2,i);
    	}

    	mp[0]=(r-l+1)/2;
    	if(l%2==1 && r%2==1){
    		mp[0]++;
    	}
    	for(int i=0;i<=temp;i++){
    		cout << mp[i] << " ";
    	}
    }

	return 0;
}
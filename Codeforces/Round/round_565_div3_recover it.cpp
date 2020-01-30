#include <bits/stdc++.h>
using namespace std;
#define int long long int
int si[10000000];
int b[10000000];
int pri[200000];


int divisor(int n){
	int i;
	for(i=1;i<n;i++){
		if(n%pri[i]==0){
			return n/pri[i];
		}
	}
}

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	
	int i,j;
	for(i=0;i<10000000;i++){
		si[i]=0;
		b[i]=0;
		if (i<200000){
			pri[i]=0;
		}
	}
	
	for(i=2;i<10000000;i++){
		for(j=2*i;j<10000000;j+=i){
			si[j]=1;
		}
	}

	// cout << b[1] << endl;
	int k=0;
	for(i=1;i<2750132;i++){
		if(si[i]==0){
			pri[k]=i;
			k++;
		}
	}
	// cout << b[1] << endl;
	// cout << pri[1] << endl;
	int n;
	cin >> n;
	int bactual[2*n];
	for(i=0;i<2*n;i++){
		cin >> bactual[i];
		b[bactual[i]]++;
	}
	// cout << b[1] << endl;
	
	for(i=9999999;i>0;i--){
		if (b[i]>0 && si[i]==1){
			b[divisor(i)]-=b[i];
		}
	}
	
	for(i=1;i<10000000;i++){
		if(b[i]>0 && si[i]==0){
			b[pri[i]]-=b[i];
			
		}
	}
	// return 0;
	for(i=1;i<10000000;i++){
		if (b[i]>0){
			cout << i << " ";
			b[i]--;
			i--;
		}
		
	}
	cout << endl;


	return 0;
}
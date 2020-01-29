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
	
    int n,m;
    cin >> n >> m;
    int a[n];
    // int sum[n];
    // vector<int> rem;
    for(int i=0;i<n;i++){
    	cin >> a[i];
    	// rem.push_back(i);
    	// if(i==0){
    	// 	sum[0]=a[0];
    	// }
    	// else{
    	// 	sum[i]=sum[i-1]+a[i];
    	// }
    }



    sort(a,a+n);
    int critsum[n],mrk=0;
    for(int i=0;i<m;i++){
    	critsum[i]=0;
   		mrk++;
   		// rem.erase(rem.begin());
    }
    while(mrk<n){
    	int curi=mrk;
    	critsum[curi]=critsum[curi-m]+a[curi-m];
    	mrk++;
    	// rem.erase(rem.begin());
    }
    // cout << "1\n";
    // for(int i=0;i<n;i++){
    // 	cout << a[i] << " ";
    // }
    // cout << endl;
    // cout << "2\n";
    // for(int i=0;i<n;i++){
    // 	cout << critsum[i] << " ";
    // }
    // cout << endl;

    int space=0,d=0,prev=-1;
    // set<int> crit;
    for(int i=1;i<n+1;i++){
    	if(prev==-1){
    		cout << a[0] << " ";
    		prev=a[0];
    		d=1;
    		space=m-1;
    	}
    	else{
    		if(space>0){
    			cout << (prev+critsum[i-1]+a[i-1]) << " ";
    			prev+=a[i-1]+critsum[i-1];
    			space--;
    		}
    		else{
    			d++;
    			// int temp=sum+prev;
    			cout << (critsum[i-1]+prev+a[i-1]) << " ";
    			prev+=a[i-1]+critsum[i-1];
    			space=m-1;
    		}
    	}
    }

	return 0;
}
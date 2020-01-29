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

    int q;
    cin >> q;
    while(q--){
    	string s;
    	cin >> s;
    	int count[4]={0};
    	int c=0;
    	for(auto i: s){
    		if(i=='L'){
    			count[0]++;
    		}
    		if(i=='R'){
    			count[1]++;
    		}
    		if(i=='U'){
    			count[2]++;
    		}
    		if(i=='D'){
    			count[3]++;
    		}
    		c++;
    	}
    	if(count[0]>count[1]){
    		count[0]=count[1];
    	}
    	else{
    		count[1]=count[0];
    	}
    	if(count[2]>count[3]){
    		count[2]=count[3];
    	}
    	else{
    		count[3]=count[2];
    	}
    	if(count[2]==0){
    		if(count[0]>1){
    			count[0]=1;
    			count[1]=1;
    		}
    	}
    	if(count[1]==0){
    		if(count[2]>1){
    			count[2]=1;
    			count[3]=1;
    		}
    	}
    	int cnew;
    	cnew=count[0]+count[1]+count[2]+count[3];
    	cout << cnew <<endl;
    	for(int i=0;i<count[0];i++){
    		cout << 'L';
    	}
    	for(int i=0;i<count[2];i++){
    		cout << 'U';
    	}
    	for(int i=0;i<count[1];i++){
    		cout << 'R';
    	}
    	for(int i=0;i<count[3];i++){
    		cout << 'D';
    	}
    	cout << endl;
    }
	
	return 0;
}
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

    int n;
    cin >> n;
    string y[n];
    for(int i=0;i<n;i++){
    	cin >> y[i];
    }
    int cnt[n][10]={0};
    for(int i=0;i<n;i++){
    	for(int j=0;j<y[i].length();j++){
    		cnt[i][y[i][j]-'0']++;
    	}
    }
    for(int i=0;i<n;i++){
    	int sum=0;
    	for(int j=0;j<10;j++){
    		sum+=cnt[i][j]*j;
    	}
    	if(sum%3==0 && cnt[i][0]>0){
    		cnt[i][0]--;
    		int flg=0;
    		for(int j=0;j<10;j+=2){
    			if(cnt[i][j]>0){
    				flg=1;
    				break;
    			}	
    		}
    		if(flg==1){
    			cout << "red\n";
    		}
    		else{

    			cout << "cyan" << endl;	
    		}
    	}
    	else{
    		cout << "cyan" << endl;
    	}
    }

	return 0;
}
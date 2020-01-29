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
    string s;
    cin >> s;
    int rep[5]={0};
    int i;
    for(i=0;i<n;i++){
    	if(s[i]=='z'){
    		rep[0]++;
    	}
    	else if(s[i]=='e'){
    		rep[1]++;
    	}
    	else if(s[i]=='r'){
    		rep[2]++;
    	}
    	else if(s[i]=='o'){
    		rep[3]++;
    	}
    	else if(s[i]=='n'){
    		rep[4]++;
    	}
    }
    int ans1=rep[4];
    int ans0=rep[0];
    for(i=0;i<ans1;i++){
    	cout << "1 ";
    }
    for(i=0;i<ans0;i++){
    	cout << "0 ";
    }
    cout << "\n";

	return 0;
}
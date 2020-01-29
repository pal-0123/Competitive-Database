#include <bits/stdc++.h>
using namespace std;
#define int long long int


int m=998244353;
int power(int x,int y){
	int ans=1;
	while(y){
		if(y%2==0){
			x=x*x;
			x%=m;
			y/=2;
		}
		else{
			ans=ans*x;
			ans%=m;
			y--;
		}
	}
	return ans;
}
int modular_inverse(int a){
	// if()
	return power(a,m-2);
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

    int n;
    cin >> n;
    vector<vector<int> > kid;
    int x=0,y=0;
    for(int i=0;i<n;i++){
    	int temp;
    	cin >> temp;
    	vector<int> cur;
    	for(int j=0;j<temp;j++){
    		int cc;
    		cin >> cc;
    		cur.push_back(cc); 
    	}
    	kid.push_back(cur);
    }

    map<int,vector<int> > dec;
    int ninv=modular_inverse(n);

    for(int i=0;i<n;i++){
    	for(int j=0;j<kid[i].size();j++){
    		dec[kid[i][j]].push_back(i);
    	}
    }
    int ans=0;
	for(int i=0;i<n;i++){
		for(int j:kid[i]){
			ans+=(((((ninv*ninv)%m)*modular_inverse(kid[i].size()))%m)*dec[j].size())%m;
			ans%=m;
		}
	}

	cout << ans<<endl;
	return 0;
}
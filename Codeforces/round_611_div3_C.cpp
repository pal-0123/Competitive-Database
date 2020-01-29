#include <bits/stdc++.h>
using namespace std;
#define int long long int

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
    vector<int> f;
    f.push_back(0);
    int get[n+1]={0};
    for(int i=1;i<=n;i++){
    	int temp;
    	cin >> temp;
    	get[temp]=1;
    	f.push_back(temp);
    }
    vector<int> togive,toget;
    for(int i=1;i<=n;i++){
    	if(f[i]==0){
    		togive.push_back(i);
    	}
    	if(get[i]==0){
    		toget.push_back(i);
    	}
    }

    vector<int> togetsm,togivesm;
    int prevget=-1,prevgive=-1;
    for(int i=0;i<togive.size();i++){
    	if(togive[i]==toget[i]){
    		togetsm.push_back(toget[i]);
    		togivesm.push_back(toget[i]);
    	}
    	else{
    		f[togive[i]]=toget[i];
    		prevget=toget[i];
    		prevgive=togive[i];
    		// cout << togive[i] << " ";
    	}
    }
    int sz=togetsm.size();
    if(sz==1){
    	f[prevgive]=togetsm[0];
    	f[togetsm[0]]=prevget;
    }
    else{
    	for(int i=0;i<sz;i++){
    		// cout << togivesm[(i+1)%sz] << " " << togetsm[i] << " " << i << endl;
    		f[togivesm[(i+1)%sz]]=togetsm[i];
    	}	
    }
    

    // vector<pair<int> > prev;
    // int prevget=-1,prevgive=-1;
    // int flg=0;
    // vector<int>:: iterator pos=toget.begin();
    // for(auto it:togive){
    // 	if(*pos!=it){
    // 		f[it]=*pos;
    // 		// toget.erase(toget.begin());
    // 		prevget=f[it];
    // 		prevgive=it;
    // 		pos++;
    // 		// prev.push_back(make_pair(f[it],it));
    // 	}
    // 	else{
    // 		if(toget.size()==1){
    // 			f[prevgive]=*(pos);
    // 			f[it]=prevget;
    // 			prevgive=it;
    // 			prevget=f[it];
    // 			pos++;
    // 		}
    // 		else{
    // 			pos++;
    // 			f[it]=*(pos);
    // 			// toget.erase((++pos));
    // 			prevget=f[it];
    // 			prevgive=it;
    // 			pos--;
    // 			flg=1;	
    // 			continue;
    // 		}
    // 		// pos++;
    // 	}
    // 	if(flg==1){
    // 		pos++;
    // 		flg=0;
    // 		// cout << it;
    // 	}
    // }
    for(int i=1;i<=n;i++){
    	cout << f[i] << " ";
    }

	return 0;
}
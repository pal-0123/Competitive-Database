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

    int n,k;
    cin >> n >> k;
    string a;
    cin >> a;
    string asd=a;
    set <int> sel;
    set <set <int> > mtch;
    set <int> pos0;
    for(int i=0;i<n-k;i++){
    	if(sel.find(i)==sel.end()){
    		pos0.insert(i);
    		set<int> temp;
    		for(int j=i;j<n;j+=k){
    			temp.insert(j);
    			sel.insert(j);
    			// cout << j;
    		}	
    		// cout << endl;
    		mtch.insert(temp);
    	}
    }
    int chng[n]={0};
    for(auto it:mtch){
    	char zzz=a[*(it.begin())];
    	for(auto it2:it){
    		chng[it2]=zzz-a[it2];
    		// cout << it2;
    	}
    	// cout << endl;

    }
    int i;
   	
    for(int j=k;j<n;j++){
    	a[j]=a[j-k];
    }
    int zxc=0;
    for(i=0;i<n;i++){
    	if(a[i]>asd[i]){
    		break;
    	}
    	if(a[i]<asd[i]){
    		zxc=1;
    		break;
    	}
    }
    if(zxc==1){
    	for(i=k-1;i>=0;i--){
    		if(a[i]!='9'){
    			break;
    		}
    	}
    	// if(i!=-1){
    		for(int j=i+1;j<k;j++){
    			a[j]='0';
    		}	
    		a[i]+=1;
    	// }
    	for(int j=k;j<n;j++){
    		a[j]=a[j-k];
    	}
    	cout << n << endl;
    	cout << a << endl;
    	
    }
    else{
    	cout << n << endl;
    	cout << a << endl;
    }
	return 0;
}
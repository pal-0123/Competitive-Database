#include <bits/stdc++.h>
using namespace std;
#define int long long int

// int binarySearch(int arr[], int l, int r, int x,int n) { 
//     if (r >= l) { 
//         int mid = l + (r - l) / 2; 
//         if (arr[mid] == x) 
//             return mid+1; 
//         if (arr[mid] > x) 
//         	if(mid-1>=0 && arr[mid-1]<x){
//         		return mid;
//         	}
//             return binarySearch(arr, l, mid - 1, x,n); 
//         if(mid+1<n && arr[mid+1]>x){
//         	return mid+1;
//         }
//         if(mid+1==n){
//         	return -1;
//         }
//         return binarySearch(arr, mid + 1, r, x,n); 
//     } 
//     // cout << "asd";
//     return -1; 
// } 

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
    vector<int> s[n];
    set<int> cnt[n];
    int mni[n],mxi[n];
    map<int,int> mn,mx;
    int tr[n]={0},total=0;
    int nnew=0;
    for(int i=0;i<n;i++){
    	int l;
    	cin >> l;
    	int prev=INT_MAX;
    	for(int j=0;j<l;j++){
    		int temp;
    		cin >> temp;
    		if(temp>prev){
    			if(tr[i]!=1){
    				total++;
    			}
    			tr[i]=1;

    		}
    		else if(temp<prev){
    			prev=temp;
    		}
    		s[i].push_back(temp);
    		cnt[i].insert(temp);
    	}
    	if(tr[i]!=1){
    		mn[*(cnt[i].begin())]++;
    		mx[(*(--cnt[i].end()))]++;	
    		nnew++;
    	}
    	mni[i]=*(cnt[i].begin());
    	mxi[i]=(*(--cnt[i].end()));
    }
    int prev=0;
    for(auto it:mx){
    	int temp=it.second;
    	mx[it.first]=nnew-prev;

    	prev+=temp;
    	// cout << it.first << " " << it.second << endl;
    }
    int ans=0;
    for(int i=0;i<n;i++){

    	if(tr[i]==1){
    		ans+=n;
    		continue;
    	}
    	else if(mx.upper_bound(mni[i])!=mx.end()){
    		
    		ans+=(*mx.upper_bound(mni[i])).second;	
    		// cout << "aaa" << (*mx.upper_bound(mni[i])).second << " " << (*mx.upper_bound(mni[i])).first << endl;
    	}
    	// cout << mni[i] << " " << ans << endl;
    	ans+=total;
    	// cout << mni[i] << " " << ans << endl;
    }
    cout << ans << endl;

	return 0;
}
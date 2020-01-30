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
    vector<int> h(n);
    map<int,int> hcnt;
    for(int i=0;i<n;i++){
    	cin >> h[i];
        hcnt[h[i]]++;
    }
    sort(h.begin(),h.end());
    set<int> dif;
    for(auto it:hcnt){
        if(it.second>=3){
            dif.insert(it.first-1);
            dif.insert(it.first+1);
            dif.insert(it.first);
        }
        else if(it.second==2){
            if(dif.find(it.first-1)==dif.end()){
                dif.insert(it.first-1);
                dif.insert(it.first);
            }
            else{
                dif.insert(it.first+1);
                dif.insert(it.first);
            }
        }
        else{
            if(dif.find(it.first-1)==dif.end()){
                dif.insert(it.first-1);
            }
            else if(dif.find(it.first)==dif.end()){
                dif.insert(it.first);
            }   
            else{
                dif.insert(it.first+1);
            }
        }
    }
    // for(auto it:dif){
    //     cout << it << " ";
    // }
    // cout << endl;
    int max=dif.size();
    dif.clear();
    for(auto it:hcnt){
        if(dif.find(it.first-1)!=dif.end()){
            ;
        }
        else if(dif.find(it.first)!=dif.end()){
            ;
        }
        else{
            dif.insert(it.first+1);
        }
    }
    int min=dif.size();
    cout << min << " " << max << endl;

	return 0;
}
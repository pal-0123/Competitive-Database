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

    string s,t;
    cin >> s;
    cin >> t;
    map <int, set <int> > pos;
    int l=s.length(),l2=t.length();
    int i;
    for(i=0;i<l;i++){
        auto it=pos.find(s[i]);
        if(it!=pos.end()){
            (it->second).insert(i)
        }
        else{
            pos.insert({s[i],{i}});
        }
    }

    
	// pos.insert({0,{5}});
 //    cout << (pos.begin())->first;
	return 0;
}
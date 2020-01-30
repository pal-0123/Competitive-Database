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

    int t;
    cin >> t;
     while(t--){
        int n;
        cin >> n;
        string s;
        int b;
        map <string, int> spm;
        map <string, int> ntspm;
        for(int i=0;i<n;i++){
            cin >> s >> b;
            if(b==0){
                ntspm[s]++;
            }
            else{
                spm[s]++;
            }
        }
        int ans=0;
        set <string> incl;
        map <string,int> :: iterator it;
        it=spm.begin();
        for(;it!=spm.end();it++){
            if(ntspm.find(it->first)==ntspm.end()){
                incl.insert(it->first);
                ans+=it->second;
            }
            else if (ntspm[it->first]>spm[it->first]){
                incl.insert(it->first);
                ans+=ntspm[it->first];
            }
            else{
                incl.insert(it->first);
                ans+=it->second;
            }
        }   
        it=ntspm.begin();  
        for(;it!=ntspm.end();it++){
            if(incl.find(it->first)==incl.end()){
                incl.insert(it->first);
                ans+=it->second;
            }
        }   
        cout << ans <<endl;

     }

	return 0;
}
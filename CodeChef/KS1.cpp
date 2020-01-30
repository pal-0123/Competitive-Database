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
        map <int , vector <int> > xor_val;
        int n;
        cin >> n;
        int a[n];
        int i,j;
        
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        int xor_till[n];
        xor_till[0]=a[0];
        for(i=1;i<n;i++){
            xor_till[i]=xor_till[i-1]^a[i];
            
        }
        map <int , vector <int> > :: iterator it;
        vector <int> t0={-1};
        xor_val.insert({0,t0});
        for(i=0;i<n;i++){
            it=xor_val.find(xor_till[i]);
            if(it==xor_val.end()){
                vector <int> v={i};
                xor_val.insert({xor_till[i],v});
            }
            else{
                (it->second).insert((it->second).end(),i);
            }
        }
        // it=xor_val.begin();
        // for(;it!=xor_val.end();it++){
        //     cout << it->first << " : ";
        //     for(j=0;j<(it->second).size ();j++){
        //         cout << (it->second)[j] << " ";
        //     }
        //     cout << "\n";
        // }

        int ans=0;
        it=xor_val.begin();
        for(;it!=xor_val.end();it++){
            // if (it->first == 0){
            //     ans+=(it->second)[0];
            // }
            if ((it->second).size()>1){
                vector <int> temp;
                temp.insert(temp.begin(),(it->second).begin(),(it->second).end());
                for (j=0;j<temp.size();j++){
                    ans+=temp[j]*(j-(temp.size()-j-1))-(temp.size()-j-1);                    
                }
            }
            
        }

        cout << ans << endl;



    }
	
	return 0;
}
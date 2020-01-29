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
    	int jarl[n],jarr[n];
        for(int i=0;i<n;i++){
            cin >> jarl[i];
        }
        for(int i=0;i<n;i++){
            cin >> jarr[i];
        }
        int countl[n][2]={0},countr[n][2]={0};
        countl[0][jarl[0]-1]++;
        for(int i=1;i<n;i++){
            countl[i][0]=countl[i-1][0];
            countl[i][1]=countl[i-1][1];
            countl[i][jarl[i]-1]++;
            

        }
        countr[n-1][jarr[n-1]-1]++;
        for(int i=n-2;i>=0;i--){
            countr[i][0]=countr[i+1][0];
            countr[i][1]=countr[i+1][1];
            countr[i][jarr[i]-1]++;
            
        }

        map <int,vector<int> > difl,difr;
        for(int i=0;i<n;i++){
            difl[countl[i][0]-countl[i][1]].push_back(i);
        
            difr[countr[i][0]-countr[i][1]].push_back(i);
        }
        // for(auto it:difl){
        //     cout << it.first << endl;
        //     for(auto it1:it.second){
        //         cout << it1 << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        // for(auto it:difr){
        //     cout << it.first << endl;
        //     for(auto it1:it.second){
        //         cout << it1 << " ";
        //     }
        //     cout << endl;
        // }
        int max=-1;
        for(auto it:difl){
            if(difr.find(-1*(it.first))!=difr.end()){
                int cur=(n-(difr[-1*(it.first)][0]))+1+it.second[(it.second).size()-1];
                if(cur>max){
                    max=cur;
                }
            }
            if(it.first==0){
                if(1+it.second[(it.second).size()-1]>max){
                    max=1+it.second[(it.second).size()-1];
                }
            }
        }
        for(auto it:difr){
            if(it.first==0){
                if(n-it.second[0]>max){
                    max=n-it.second[0];
                }   
            }
        }
        if(max==-1){
                        
            cout << 2*n << endl;
        }
        else{
            cout << 2*n-max << endl;
        }
    }

	return 0;
}
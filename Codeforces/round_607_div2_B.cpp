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
    	string s1,s2;
    	cin >> s1 >> s2;
    	// int c1[26]={0},c2[26]={0};
    	int firstdif=-1;
    	int minl=min(s1.length(),s2.length());
    	int i,j;
        if(s1<s2){
            cout << s1 << endl;
            continue;
        }
    	for(i=0;i<s2.length();i++){
            int l=s1.length();
            for(j=0;j<min(i,l);j++){
                if(s2[j]!=s1[j]){
                    break;
                }
            }
            if(j==i){
                for(j=i;j<s1.length();j++){
                    if(s2[i]>s1[j]){
                        // cout << j;
                        break;
                    }
                }    
                if(j<s1.length()){
                    break;
                }
            }
            
        }	
        if(i<s2.length()){
            char temp=s1[i];
            s1[i]=s1[j];
            s1[j]=temp;
            cout << s1 << endl;
        }
        else{
            cout << "---\n";
        }
    	
    }

	return 0;
}
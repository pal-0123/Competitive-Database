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
        string s,r;
        cin >> s;
        cin >> r;
        int count_s[26]={0};
        int count_r[26]={0};
        int i;
        for(i=0;i<s.length();i++){
            count_s[s[i]-'a']++;
        }
        for(i=0;i<r.length();i++){
            count_r[r[i]-'a']++;
        }
        for (i=0;i<26;i++){
            if(count_r[i]<count_s[i]){
                break;
            }
        }
        if(i!=26){
            cout << "Impossible\n";
        }
        else{
            int rem[26];
            for(i=0;i<26;i++){
                rem[i]=count_r[i]-count_s[i];
            }
            int strt=s[0]-'a';
            for(i=0;i<strt;i++){
                int j;
                char ch=i+'a';
                for(j=0;j<rem[i];j++){
                    cout << ch;
                }
                rem[i]=0;
            }
            char ch=strt+'a';
            // for(i=0;i<strt;i++){
            //     if(count_s[i]!=0){
            //         break;
            //     }
            // }
            for (i=0;i<s.length();i++){
                if(s[i]!=ch){
                    break;
                }
            }
            if(i==s.length()){
                int j;
                char c=strt+'a';
                for(j=0;j<rem[strt];j++){
                    cout << c;
                }
                rem[strt]=0;
                cout << s;
            }
            else if(s[i]<ch){
                cout << s;
            }
            else{
                // for(i=0;i<s.length();i++){
                //     if(rem[strt]>0){
                //         if(s[i]>=ch){
                //             cout << ch ; 
                //             rem[strt]--;
                //         }
                //         else{
                //             break;
                //         }
                //     }
                //     else{
                //         break;
                //     }
                // }
                int j;
                char c=strt+'a';
                for(j=0;j<rem[strt];j++){
                    cout << c;
                }
                rem[strt]=0;
                cout << s;
            }
            for (i=strt;i<26;i++){
                char c=i+'a';
                int j;
                for(j=0;j<rem[i];j++){
                    cout << c;
                }
            }
            cout <<endl;
        }
    }


	return 0;
}
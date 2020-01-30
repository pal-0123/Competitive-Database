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
	while (t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int i;
		vector <int> rep;
		vector <char> character;
 		for (i=0;i<n;i++){
			if (find(character.begin(),character.end(),s[i])!=character.end()){

			}			
		}
		int maxlen=1,reps=rep[(int)s[0]];
		for (i=1;i<n;i++){
			if (rep[s[i]]<reps || s[i]==s[0]){
				break;
			}
		}
		maxlen=i;

	}	
	
	return 0;
}
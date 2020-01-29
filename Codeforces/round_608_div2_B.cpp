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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int flg=0;
    string stemp=s;

		int prev=0;
	if(1){
		int i;
		set<int> move;
		int f=0;
		if(s[0]=='B'){
			prev=0;
		}
		else{
			f=1;
		}
		while(prev<s.length()){
			if(f==1){
				f=0;
				prev=-1;
			}
			for(i=prev+1;i<s.length();i++){
				if(s[i]=='B'){
					break;
				}
			}
			if(i==s.length()){
				break;
			}
			while(i>(prev+1)){
				if(move.find(i-1)==move.end()){
					move.insert(i-1);
					s[i-1]='B';
					s[i]='W';
					// i--;
				}
				else{
					s[i-1]='B';
					s[i]='W';
					move.erase(move.find(i-1));
				}
				i--;
			}
			prev+=1;
		}

		if(prev<s.length()){
			// cout << prev << " " << s.length() << endl;
			if((s.length()-1-prev)%2==0){
				for(i=prev+1;i<s.length();i+=2){
					if(move.find(i-1)==move.end()){
						move.insert(i-1);
						s[i-1]='B';
						s[i]='W';
						// i--;
					}
					else{
						s[i-1]='B';
						s[i]='W';
						move.erase(move.find(i-1));
					}
				}
				// cout << "aaa";
				cout << move.size() << endl;
				for(auto it:move){
					cout << it << " ";
				}
				cout << endl;
			}
			else{
				// cout <<prev;
				s=stemp;
				move.clear();
				prev=0;
				int fl=0;
				// cout << prev << " " << s.length();
				while(prev<s.length()){
					// cout << "aa";
					if(fl==0){
						fl=1;
						prev--;
					}
					for(i=prev+1;i<s.length();i++){
						if(s[i]=='W'){
							break;
						}
					}
					if(i==s.length()){
						break;
					}
					while(i!=prev+1){
						if(move.find(i-1)==move.end()){
							move.insert(i-1);
							s[i-1]='W';
							s[i]='B';
							// i--;
						}
						else{
							s[i-1]='W';
							s[i]='B';
							move.erase(move.find(i-1));
						}
						i--;
					}
					prev+=1;
					// cout << "aaa";
				}
				// cout << prev << " " << s.length();
				if(prev<s.length()){
					if((s.length()-1-prev)%2==0){
						for(i=prev+1;i<s.length();i+=2){
							if(move.find(i-1)==move.end()){
								move.insert(i-1);
								s[i-1]='B';
								s[i]='W';
								// i--;
							}
							else{
								s[i-1]='B';
								s[i]='W';
								move.erase(move.find(i-1));
							}
						}
						// cout << "a";
						cout << move.size() << endl;
						for(auto it:move){
							cout << it << " ";
						}
						cout << endl;
					}
					else{
						flg=1;
					}
				}
				else{
					// cout << "ADS";
					
					cout << move.size() << endl;
					for(auto it:move){
						cout << it << " ";
					}
					cout << endl;
				}
				
			}
		}
		else{
			// cout << "aa";
			cout << move.size() << endl;
			for(auto it:move){
				cout << it << " ";
			}
			cout << endl;
		}
	}
	if(flg==1){
		cout << -1;
	}

	return 0;
}
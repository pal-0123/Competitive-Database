#include <bits/stdc++.h>
using namespace std;
#define int long long int

int get_hand(string s,int i){
	if(s[i]=='d' || s[i]=='f'){
		return 1;
	}
	return 2;
}

int get_pos(string s,int i){
	if(s[i]=='d'){
		return 0;
	}
	if (s[i]=='f'){
		return 1;
	}
	if (s[i]=='j'){
		return 2;
	}
	return 3;
}

double get_time(string s){
	double time=0;
	int i;
	int len=s.length();
	for (i=0;i<len;i++){
		if (i==0){
			time+=0.2;
		}
		else{
			if(get_hand(s,i-1)!=get_hand(s,i)){
				time+=0.2;
			}
			else{
				time+=0.4;	
			}
		}
	}


	return time;
}

int get_hash(string s){
	int len=s.length();
	int i;
	int hash=0;

	for(i=0;i<len;i++){
		hash+=((get_pos(s,i)+1)*(int)pow(33,i))%100000;
		hash=hash%100000;
	}
	if (hash<0){
		hash=hash*-1;
		hash=hash%100000;
	}
	return hash;
}

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
		int hash[100005]={0};
		double ans=0;
		int i;
		for(i=0;i<n;i++){
			string s;
			cin >> s;
			if (hash[get_hash(s)]!=0){
				ans+=0.5*(get_time(s));	
			}
			else{
				hash[get_hash(s)]=1;
				ans+=get_time(s);
			}
			
		}
		ans*=10;
		cout << ans << endl;
	}

	
	return 0;
}
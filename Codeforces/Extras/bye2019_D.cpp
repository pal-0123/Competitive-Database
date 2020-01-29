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

 	int n,k;
 	cin >> n >> k;
 	if(n-k+1>=k){
 		int a[n];
 		set<int> known;
 		set<int> val;
 		set<int> toask;
 		cout << "? ";
 		for(int i=1;i<=k;i++){
 			cout << i << " ";
 			toask.insert(i);
 		}
 		cout << endl;
 		cout.flush();
 		int pos,apos;
 		cin >> pos >> apos;
 		a[pos]=apos;
 		val.insert(apos);
 		known.insert(pos);
 		toask.erase(toask.find(pos));
 		toask.insert(k+1);
 		for(int i=2;i<=k;i++){
 			cout << "? ";
 			for(auto it:toask){
 				cout << it << " ";
 			}
 			cout << endl;
 			cout.flush();
 			cin >> pos >> apos;
 			a[pos]=pos;
 			known.insert(pos);
 			toask.erase(toask.find(pos));
 			toask.insert(k+known.size());
 			val.insert(apos);
 		}

 		cout << "? ";
 		for(auto it:known){
 			cout << it << " ";
 		}
 		cout << endl;
 		cout.flush();
 		cin >> pos >> apos;
 		cout <<"! ";
 		cout << (val.find(apos)-val.begin());
 		cout << endl;
 		cout.flush();
 	} 
 	else{
 		int a[n];
 		set<int> known;
 		vector<int> unknown;
 		set<int> val;
 		set<int> toask;
 		cout << "? ";
 		for(int i=1;i<=k;i++){
 			cout << i << " ";
 			toask.insert(i);
 		}
 		cout << endl;
 		cout.flush();
 		int pos,apos;
 		cin >> pos >> apos;
 		a[pos]=apos;
 		val.insert(apos);
 		known.insert(pos);
 		toask.erase(toask.find(pos));
 		toask.insert(k+1);
 		for(int i=2;i<=k;i++){
 			cout << "? ";
 			for(auto it:toask){
 				cout << it << " ";
 			}
 			cout << endl;
 			cout.flush();
 			cin >> pos >> apos;
 			a[pos]=pos;
 			known.insert(pos);
 			toask.erase(toask.find(pos));
 			val.insert(apos);
 			if(k+known.size()==n+1){
 				break;
 			}
 			toask.insert(k+known.size());
 			
 		}
 		toask.clear();
 		for(auto it:known){
 			toask.insert(it);
 		}
 		for(int i=1;i<=n;i++){
 			if(known.find(i)==known.end()){
 				unknown.push_back(i);
 			}
 		}
 		int result[k-1],pos=-1;
 		int i;
 		for(i=1;i<k;i++){
 			int todo=2*k-n-1;
 			cout << "? ";
 			for(int j=i-1;j<i-1+todo;j++){
 				cout << unknown[j] << " ";
 			}	
 			for(auto it :toask){
 				cout << it << " ";
 			}
 			cout << endl;
 			cout.flush();
 			cin >> pos >> apos;
 			result[i-1]=pos;
 			if(known.find(pos)==known.end()){
 				known.insert(pos);
 				value.insert(apos);
 			}
 			if(known.size()==k){
 				break;
 			}
 		}

 		if(known.size()==k && i!=k-1){
 			cout << "? ";
 			for(auto it:known){
 				cout << it << " ";
 			}
 			cout << endl;
 			cout.flush();
 			cin >> pos >> apos;
 			cout <<"! ";
 			cout << (val.find(apos)-val.begin());
 			cout << endl;
 			cout.flush();	
 		}
 		else{

 		}
 		
 	}

	return 0;
}
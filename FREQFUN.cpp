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

    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int a[n];
    	for(int i=0;i<n;i++){
    		cin >> a[i];
    	}
    	int g[n+1];
    	for(int i=0;i<=n;i++){
    		cin >> g[i];
    	}
    	int preb[n]={0};
    	for(int i=0;i<n;i++){
    		if(a[i]!=-1){
    			preb[a[i]]++;
    		}
    	}
    	int preg[n+1]={0};
    	for(int i=0;i<n;i++){
    		preg[preb[i]]++;
    	}
    	int flg=0;
    	int sum=0;
    	int nob=0;
    	for(int i=0;i<=n;i++){
    		sum+=i*g[i];
    		nob+=g[i];
    	}
    	if(nob!=n){
    		cout <<"impossible\n";
    		continue;
    	}
    	if(sum!=n){
    		cout << "impossible\n";
    		continue;	
    	}
    	
    	int b[n];
    	for(int i=0;i<=n;i++){
    		if(preb[i]!=0){
    			b[i]=preb[i];
    		}
    		else{
    			b[i]=-1;
    		}
    	}
    	int nxt[n];
    	int lst=-1;
    	int frst=-1;
    	for(int i=0;i<n;i++){
    		if(b[i]==-1){
    			if(frst==-1){
    				frst=i;
    				lst=i;
    				nxt[i]=-1;
    			}
    			else{
    				nxt[i]=lst;
    				lst=i;
    			}
    		}
    		else{
    			nxt[i]=lst;
    		}
    	}
    	int mk[n];
    	for(int i=n;i>=0;i--){
    		int todo;
    		if(i==0){
    			todo=g[i];
    		}
    		else{
    			todo=g[i]-preg[i];
    		}
    		mk[i]=todo;
    		if(todo<0){
    			flg=1;
    			break;
    		}
    		int pos=lst;
    		// while(todo>0 && pos>=frst){
    		// 	b[pos]=i;
    		// 	pos=nxt[pos];
    		// 	lst=pos;
    		// 	todo--;
    		// }
    		for(int j=0;j<n;j++){
    			if(todo<=0){
    				break;
    			}
    			if(b[j]<i){
    				if(b[j]!=-1){
    					preg[b[j]]--;	
    				}
    				b[j]=i;

    				todo--;
    			}
    		}
    		if(todo>0){
    			flg=1;
    			break;

    		}
    	}
    	if(flg==1 ){  //|| lst!=-1
    		cout << "impossible\n";
    		continue;	
    	}
    	int pos=-1;
    	for(int i=n-1;i>=0;i--){
    		if(a[i]==-1){
    			pos=i;
    			break;
    		}
    	}
    	int nxt1[n];
    	lst=-1;
    	frst=-1;
    	for(int i=n-1;i>=0;i--){
    		if(a[i]==-1){
    			if(frst==-1){
    				frst=i;
    				lst=i;
    				nxt1[i]=-1;
    			}
    			else{
    				nxt1[i]=lst;
    				lst=i;
    			}
    		}
    		else{
    			nxt1[i]=lst;
    		}
    	}

    	for(int i=0;i<n;i++){

    		int todo=b[i]-preb[i];
    		int pos=lst;
    		while(todo>0 && pos!=-1){
    			a[pos]=i;
    			pos=nxt1[pos];
    			lst=pos;
    			todo--;
    		}
    		if(todo>0){
    			flg=1;
    			break;
    		}
    	}
    	if(flg==1 || lst!=-1){
    		cout << "impossible\n";
    		continue;	
    	}
    	for(int i=0;i<n;i++){
    		cout << a[i] << " ";
    	}
    	cout << endl;
    }

	return 0;
}
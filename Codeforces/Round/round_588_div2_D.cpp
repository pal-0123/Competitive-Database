#include <bits/stdc++.h>
using namespace std;
#define int long long int

void set_bit(int n,int bit[][60],float a[]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<60;j++){
			if(fmod(a[i],(float)2.0)==1){
				bit[i][j]=1;
				//cout << 1 << " ";
			}
			else{
				bit[i][j]=0;
				//cout << 0 << " ";
			}
			a[i]/=2;
			a[i]-=fmod(a[i],1.0);
			
			//cout << "a " << a[i] << " a";
		}
		//cout << endl;
	}
}

void rem(int bit[][60],int i){
	for(int j=0;j<60;j++){
		bit[i][j]=0;
	}
}

signed main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int n;
    cin >> n;
    float a1[n],a[n];
    int b[n];
    set <int> s; 
    for(int i=0;i<n;i++){
    	cin >> a[i];
    	a1[i]=a[i];
    	s.insert(i);
    }
    for(int i=0;i<n;i++){
    	cin >> b[i];
    }
    int bit[n][60];
    set_bit(n,bit,a1);
    int i,j;
    int left=n;
    int change=0;
    // cout <<"h";
    while(true){
    	change=0;
    	for(j=0;j<60;j++){
    		int temp=0;
    		int pos=-1;
    		for(i=0;i<n;i++){
    			if(bit[i][j]==1){
    				temp++;
    				pos=i;
    			}
    		}
    		if(temp!=left){
    			rem(bit,pos);
    			change++;
    			// cout << "hi";
    			left--;
    			s.erase(s.find(pos));
    		}

    	}
    	//cout << change;
    	if(change==0){
    		break;
    	}	
    }
    
    set <int> :: iterator it;
    it=s.begin();
    int ans=0;
    for(;it!=s.end();it++){
    	ans+=b[(*it)];
    }
    cout << ans;

    

	return 0;
}
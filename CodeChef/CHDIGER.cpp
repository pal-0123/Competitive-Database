#include <bits/stdc++.h>
using namespace std;
#define int long long int

int len_of_n(int n){
	int count=0;
	while (n){
		count++;
		n=n/10;
	}
	return count;
}

void convert_to_array(int n,int a[],int len){
	while (n){
		a[len-1]=n%10;
		n=n/10;
		len--;
	}
}

void remove_i(int a[],int i,int d,int len){
	int j,k=0;
	int temp;
	// cout << "@ " << i << " " << a[i]  << "@  ";
	for (j=0;j<len;j++){
		if (k==1){
			a[j-1]=a[j];
			temp=a[j];
		}
		if (j==i){
			// cout << "@ " << i << " " << a[i]  << "@  ";
			k=1;
			temp=a[j];
		}
		
	}
	a[len-1]=d;
	// cout << "ZZZ" << a[i] << "ZZZ\n";
}

int convert_back(int a[],int n){
	int ans=0;
	int i;
	for (i=0;i<n;i++){
		ans*=10;
		ans+=a[i];
	}
	return ans;
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
	int n,d;
	int len;
	int pos;
	int i,k;
	int ans;
	while (t--){
		cin >> n >> d;
		len=len_of_n(n);
		// cout << len;
		int a[len];
		convert_to_array(n,a,len);
		for (k=0;k<len;k++){
			for (i=0;i<len;i++){
				if (i==len-1){
					if (a[i]>d){
						// cout << a[i] << " ";
						remove_i(a,i,d,len);
					}
				}
				else if (a[i]>a[i+1]){
					// cout << a[i] << " z " << a[i+1] << " ";
					remove_i(a,i,d,len);
				}
			}	
		}
		// for (i=0;i<len;i++){
		// 	cout << a[i];
		// }
		// cout << "\n";
		ans=convert_back(a,len);
		cout << ans << "\n";
	}	
	
	return 0;
}
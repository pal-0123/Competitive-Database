#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int n,m;
    cin >> n >> m;
    int arr[n];
    int i;
    for (i=0;i<n;i++){
    	cin >> arr[i];
    }
    int divisor[100005]={0};
    int j;
    for (i=1;i<100002;i++){
    	for (j=1;i*j<100002;j++){
    		divisor[i*j]++;
    	}
    }
    sort(arr,arr+n);
    int divisor2[100005]={0},arr2[n];
    arr2[0]=arr[0];
    for (i=1;i<n;i++){
    	arr2[i]=arr2[i-1]+arr[i];
    }
    for (i=1;i<100002;i++){
    	divisor2[i]=divisor2[i-1]+divisor[i];
    }



	
	return 0;
}
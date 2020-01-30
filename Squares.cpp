#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    long long int a;
    cin >> a;
    int n;
    n=(int)sqrt(a);
    printf("%d",n);

	
	return 0;
}
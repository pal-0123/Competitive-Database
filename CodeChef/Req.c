#include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif



	int n;
	scanf("%d",&n);
	printf("%d",2*n);

	return 0;
}
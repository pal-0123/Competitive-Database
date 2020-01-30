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

    int d;
    cin >> d;
    int oc,of,od;
    cin >> oc >> of >> od;
    int cs,cb,cm,cd;
    cin >> cs >> cb >> cm >> cd;
    int cost_online;
    cost_online=oc;
    if(of<d){
        d-=of;
        cost_online+=d*od;
    }
    d+=of;
    int cost_classic=0;
    int tm;
    tm=d/cs;
    cost_classic=cb;
    cost_classic+=tm*cm;
    cost_classic+=d*cd;
    if ( cost_classic < cost_online ){
        cout << "Classic Taxi\n";
    }
    else{
        cout << "Online Taxi\n";
    }

	return 0;
}
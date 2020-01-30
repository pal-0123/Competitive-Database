#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool cmp(pair <int,pair<int,int> > arr[],int i,int j){
    return arr[i].second.first<=arr[j].second.first && arr[i].second.first>=arr[j].first;
}

bool cmp2(pair <int,pair<int,int> > arr[],int i,int j){
    return arr[i].first<=arr[j].second.first && arr[i].second.first>=arr[j].second.first;
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
        // cout << n;
        pair <int,pair <int,int> > arr[n];
        int spd[n];
        map <int, vector <int> > m;
        for(int i=0;i<n;i++){
            cin >> arr[i].first >> arr[i].second.first >> arr[i].second.second;
            spd[i]=arr[i].second.second;
            
        }
        int i,j;
        sort(arr,arr+n);
        for(i=0;i<n;i++){
            m[arr[i].second.second].push_back(i);
            // cout << arr[i].first <<  " " << arr[i].second.first << " " << arr[i].second.second <<endl;
        }
        

        set <int> s[n];
        
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(i!=j){
                    if(arr[i].second.second==arr[j].second.second && (cmp(arr,i,j) || cmp2(arr,i,j))){
                        s[i].insert(j);
                        s[j].insert(i);
                    }
                }
            }
        }
        // cout << endl;
        // set <int> :: iterator it;
        // for(i=0;i<n;i++){
        //     it=s[i].begin();
        //     for(;it!=s[i].end();it++){
        //         cout << (*it) << " ";
        //     }
        //     cout << endl;
        // }

        for (i=0;i<n;i++){
            set <int> :: iterator it;
            it=s[i].begin();
            for(;it!=s[i].end();it++){
                if(it!=s[i].begin()){
                    if(arr[*it].first < arr[*(--it)].second.first){
                        break;
                    }
                    it++;
                }
            }
            if(it!=s[i].end()){
                break;
            }
        }
        if(i!=n){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }




        // vector <int> lft,rgt;
        // int i;
        // for(i=0;i<n;i++){
        //     int j=0;
        //     int flg=0;
        //     // cout << i <<endl;
        //     for(;j<lft.size();j++){
        //         if(arr[i][2]==arr[lft[j]][2] && (cmp(arr,lft,i,j) || cmp2(arr,lft,i,j))){
        //             // cout << i; 
        //             int k=0;
        //             for(;k<rgt.size();k++){
        //                 if(arr[i][2]==arr[rgt[k]][2] && (cmp(arr,rgt,i,k) || cmp2(arr,rgt,i,k))){
        //                     break;
        //                 }
        //             }
        //             if(k!=rgt.size()){
        //                 // cout << "asd";
        //                 break;
        //             }
        //             else{
        //                 // cout << "rgt" <<i ;
        //                 rgt.push_back(i);
        //                 // cout << rgt[0];
        //                 flg=1;
        //                 break;
        //             }
        //         }
        //     }
        //     // cout << i << flg << j <<endl;
        //     if(j!=lft.size() && flg==0){
        //         break;
        //     }
        //     else if (flg==0){
        //         // cout << "lft" << i;
        //         lft.push_back(i);
        //     }
        // }
        // // int j=0;
        // // for(;j<lft.size();j++){
        // //     cout << lft[j] << " ";
        // // }
        // // cout << endl;
        // // j=0;
        // // for(;j<rgt.size();j++){
        // //     cout << rgt[j] << " ";
        // // }
        // // cout << endl;
        
        // if(i!=n){
        //     cout << "NO\n";
        // }
        // else{
        //     cout << "YES\n";
        // }
    }

	return 0;
}
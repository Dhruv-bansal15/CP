#include<bits/stdc++.h>
using namespace std; 
#define int_ long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi arr;
        bool already_sort= true;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.pb(x);
            if(x!=i+1) already_sort=false;
        }
        if(already_sort==true){
             cout<<0<<endl;
             continue;
        }
        if(arr[0]==1 | arr[n-1]==n) cout<<1<<endl;
        else if(arr[0]==n & arr[n-1]==1) cout<<3<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
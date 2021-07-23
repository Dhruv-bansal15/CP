#include<bits/stdc++.h>
using namespace std; 
#define int long long int
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
        int D,d,p,q;cin>>D>>d>>p>>q;
        int loops_run= D/d; //5 2 1 2
        int amount=0;
        
        amount = D*p + d*q*(loops_run - 1)*(loops_run)/2 + (D%d)*((loops_run)*q);
        
        cout<<amount<<endl;
    }
    return 0;
}

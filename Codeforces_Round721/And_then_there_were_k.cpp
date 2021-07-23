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
int msb(int n){
    if (n==0) return 0;
    int msb_=0;
    n/= 2;
    while(n!=0){
        n=n/2;
        msb_++;
    }
    return 1<<msb_;

}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int prev_power_of_2 = msb(n);
        cout<<prev_power_of_2 - 1<<endl;
    }
}
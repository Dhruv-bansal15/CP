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
int n,m,k;
vi type1_time;
vi type1_cost;
vi type2_much;
vi type2_cost;
int prev_time, max_spend;
int ans ;

int type2_chooser(int money){
    int left=0,right=k-1;
    while(left<right){
        int mid= (left+right +1)/2;
        if(mid>k-1) mid=k-1;
        if(money - type2_cost[mid]<0) right= mid -1;
        else if(money - type2_cost[mid]>=0) left = mid;
    }
    if(money - type2_cost[left]<0) return 0;
    return type2_much[left];
}
int smallest1(int x, int y) { 
    if(x==y) return x;
    return std::min(x, y);
}
int32_t main(){
    cin>>n>>m>>k;
    cin>>prev_time>>max_spend;
    int money_left = max_spend;
    ans=  n*prev_time;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        type1_time.pb(x);
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        type1_cost.pb(x);
    }
    for(int i=0;i<k;i++){
        int x;cin>>x;
        type2_much.pb(x);
    }
    for(int i=0;i<k;i++){
        int x;cin>>x;
        type2_cost.pb(x);
    }
    // case where when we dont use any of type 1 allowance but use if possible type 2 one 
    
    ans = smallest1(ans, (n - type2_chooser(money_left))*prev_time);
    for(int i=0;i<m;i++){
        int new_time = type1_time[i];
        if((money_left - type1_cost[i])<0) continue;
        ans = smallest1(ans, (n - type2_chooser(money_left - type1_cost[i]))*new_time);
    }
    cout<<ans<<endl;
}

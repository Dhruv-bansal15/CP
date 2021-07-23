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
#define deq deque<int>

int32_t main(){
     int t;cin>>t;
     while(t--){
         int n,m;cin>>n>>m;
         deq right,left;
         vi passengers_;
         for(int i=0;i<n;i++){
             int x;cin>>x;
             if(x==1) right.pb(i);
             else if(x==2) left.pb(i);
         }
         for(int i=0;i<m;i++){
             int x;cin>>x;
             passengers_.pb(x-1);
         }
         for(int i=0;i<m;i++){
             int x= passengers_[i];
             if(x==0) cout<<"0"<<" ";
             else{
                int left_cost = INT32_MAX;
                int right_cost= INT32_MAX;
                while(right.front()>x & right.size()){
                    right.pop_front();
                }
                if(left.size()>1){
                    while(left.at(1)<x & left.size()>1){
                    left.pop_front();
                }
                }
                if(right.size()==0 & left.size()==0){
                    cout<<"-1"<<" ";
                }else{
                    if(right.size()){
                        right_cost = right.front() - x;
                    }
                    if(left.size() & left.front()<x){
                        left_cost = x - left.front();
                    }
                    cout<<min(left_cost,right_cost)<<" ";

                }

             }
         }
         
     }
}
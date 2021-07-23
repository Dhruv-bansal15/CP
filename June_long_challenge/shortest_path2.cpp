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
        vi arr;
        vi passeng;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.pb(x);
        }
        for(int i=0;i<m;i++){
            int x;cin>>x;
            passeng.pb(x-1);
        }
        vi to_go_right,to_go_left(n);
        int count= INT16_MAX;
        int iteratorr=0;
        if(arr[0]!=1){
            int i=0;
             while(arr[i]!=1){
                 to_go_right.pb(count);
                 
                 i++;
                 iteratorr=i;
             }
        }
        count=0;
        for(int j=iteratorr;j<n;j++){
            if(arr[j]==1){
                to_go_right.pb(0);
                count=0;
            }else{
                count++;
                to_go_right.pb(count);
            }
        }
        iteratorr=n-1;
        count=INT16_MAX;
        if(arr[n-1]!=2){
            int i=n-1;
            while(arr[i]!=2   & i>=0){
                to_go_left[i]=count;
                i--;
                iteratorr=i;
            }
        }
        count=0;
        for(int i=iteratorr;i>=0;i--){
            if(arr[i]==2){
                
                to_go_left[i]=0;
                count=0;
            }else{
                count++;
                to_go_left[i]=count;

            }
        }
        for(int i=0;i<m;i++){
            if(passeng[i]==0){
                cout<<0<<" ";
                continue;
            }else{
                int x= passeng[i];
                int ans = min(to_go_left[x],to_go_right[x]);
                if(ans==INT16_MAX){
                    cout<<"-1"<<" ";
                    continue;
                }
                cout<<ans<<" ";
            }
        }
        cout<<"\n";
    }
}
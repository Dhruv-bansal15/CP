#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define mod 1000000007
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi charges_arr,position_arr;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            charges_arr.pb(x);
        }
        for(int i=0;i<k;i++){
            int x; cin>>x;
            position_arr.pb(x);
        }
        vi dist_arr;
        for(int i=1;i<n;i++){
            if((charges_arr[i] + charges_arr[i-1])==2 | (charges_arr[i] + charges_arr[i-1])==0){
                dist_arr.pb(2);
            }else{
                dist_arr.pb(1);
            }
        }
        int answer= accumulate(dist_arr.begin(),dist_arr.end(),0);
        for(int i=0;i<k;i++){
            int x= position_arr[i];
            x--;
            if(x==0 and charges_arr.size()>1){
                if(charges_arr[x]==1){
                    charges_arr[x]=0;
                }else{
                    charges_arr[x]=1;
                }
                if((charges_arr[x] + charges_arr[x+1])==2 | (charges_arr[x] + charges_arr[x+1])==0){
                    dist_arr[0]=2;
                    answer+=1;
                }else{
                    dist_arr[0]=1;
                    answer--;
                }
                cout<<answer<<endl;
                continue;
            }

        }
    }
}
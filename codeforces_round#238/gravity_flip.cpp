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
    int n;cin>>n;
    vi arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.pb(x);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
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
    int n,height,cutting_length;cin>>n>>height>>cutting_length;
    int count=0;
    int curr_height=0;
    int i=0;
    vi arr;
    for(int j=0;j<n;j++){
        int x;cin>>x;
        arr.pb(x);
    }
    while(i!=n){
        
        if(curr_height + arr[i] <= height){
            curr_height+= arr[i];
            i++;
        }else{
            count+=1;
            curr_height=0;
            // cout<<count<<endl;
            continue;
        }
        int y = curr_height/cutting_length;
        curr_height = curr_height%cutting_length;
        count+= y;
        // cout<<count<<endl;
    }
    //if still the last added element is still left in curr_height
    count+= curr_height/cutting_length;
    curr_height = curr_height%cutting_length;
    if(curr_height){
        count++;
    }
    cout<<count<<endl;
}
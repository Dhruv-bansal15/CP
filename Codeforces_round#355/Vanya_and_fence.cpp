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
    int n,h;cin>>n>>h;
    int count=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x>h) count+=2;
        else count+=1;

    }
    cout<<count<<endl;
}
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
    int n,a,b;cin>>n>>a>>b;
    n=n/2;
    if((a==n | a==n+1)&(b==n | b==n+1)) cout<<"NO";
    else cout<<"YES";
    return 0;
}
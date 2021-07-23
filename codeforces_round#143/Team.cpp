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
    int count =0;
    for(int i=0;i<n;i++){
        int a,b,c;cin>>a>>b>>c;
        if(a+b+c>=2) count++;
    }
    cout<<count<<endl;
    return 0;
}
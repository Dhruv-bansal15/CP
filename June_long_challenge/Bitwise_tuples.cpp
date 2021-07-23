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
int power_find(int a, int b){
    if(b==0) return 1;
    if(b%2==0){
        int x= power_find((a*a)%mod , b/2);
        return x%mod;
    }
    else{
        int x= power_find((a*a)%mod, b/2);
        return (a*x)%mod;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int temp = power_find(2,n) - 1;
        temp = (power_find(temp,m))%mod;
        cout<<temp<<endl;

    }
    
    
}
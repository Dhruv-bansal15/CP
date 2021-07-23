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
int smallest(int x, int y, int z) {
     return std::min(std::min(x, y), z); 
}
int smallest1(int x, int y) { return std::min(x, y); }
int32_t main(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int temp = smallest(a,c,d);
    int ans=0;
    ans+= 256*temp;
    a-=temp,c-=temp,d-=temp;
    temp= smallest1(a,b);
    ans+= 32*temp;
    cout<<ans<<endl;
}
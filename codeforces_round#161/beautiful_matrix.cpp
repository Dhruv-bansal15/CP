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
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int x;cin>>x;
            if(x==1){
                a=i;
                b=j;
            } 
        }
    }
    int ans = abs(2-a) + abs(2-b);
    cout<<ans<<endl;
    return 0;
}
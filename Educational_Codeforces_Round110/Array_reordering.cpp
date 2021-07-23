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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi ele_arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            ele_arr.pb(x);
        }
        int final_=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a,b;
                a=ele_arr[i];b=ele_arr[j];
                int ans1=gcd(a,2*b);
                int ans2=gcd(2*a,b);
                if(ans1>1 | ans2>1){
                    final_++;
                }
            }
        }
        cout<<final_<<endl;
        
    }
    return 0;
}
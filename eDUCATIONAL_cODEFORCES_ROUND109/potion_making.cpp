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
int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int k;cin>>k;
        int temp = gcd(k,100);
        cout<< 100/temp<<endl;
    }
    return 0;
}
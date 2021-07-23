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
        int a,b;cin>>a>>b;
        int count=0;
        while(a<=b){
            a*=3,b*=2;
            count++;
            if(a>b) break;
        }  
        cout<<count;
}
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <functional>
#include <numeric>
using namespace std;
#define int long long 
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
    
int32_t main(){
    int n;cin>>n;
    vi arr;
    int total=0;
    int smallest_odd_no= INT64_MAX;
    looper(i,0,n){
        int x;cin>>x;
        arr.pb(x);
        total+= x;
        if(x%2!=0 & x<smallest_odd_no ) smallest_odd_no=x;
    }
    if(total%2!=0) cout<<total<<endl;
    else if(total%2==0 & smallest_odd_no==INT64_MAX) cout<<0<<endl; 
    else cout<<total-smallest_odd_no<<endl;

    return 0;
}
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
using namespace std;
#define int long long 
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
    
int32_t main(){
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        int ans=0;
        while(l!=0 | r!=0){
            ans+= r-l;
            l/=10;r/=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
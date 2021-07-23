#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <numeric>
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
        int n;cin>>n;
        vi arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.pb(x);
        }
        int total = accumulate(arr.begin(),arr.end(),0);
        if(total==n) {
            cout<<0<<endl;
            continue;
        }
        if(total>n){
            cout<<total-n<<endl;
            continue;

        } 
        if(total<n) {
        cout<<1<<endl; 
        continue;
        }


    }   
    return 0;
}
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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi arr;
        arr.pb(0); //the first pillar has nothing at left, so we can assume 0 length pillar there
        for(int i=1;i<=n;i++){
            int x;cin>>x;
            arr.pb(x);
        }
        int result=0;
        for(int i=1;i<=n;i++){
            int max_ = max(arr[i-1],arr[i+1]);
            int new_length = min(arr[i],max_); //we r making the length of pillar equal to nearest bigger pillar 
            result+=arr[i]-new_length + abs(new_length-arr[i-1]);
            arr[i]=new_length; //reassign the new length 
        }
        result+= arr[n]; //contribution of last pillar to right 
        cout<<result<<endl;;
    }
    
}
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
    while (t--)
    {
        int n,l,r;cin>>n>>l>>r;
        vi arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.pb(x);
        }
        sort(arr.begin(),arr.end());
        int ans1,ans2;
        ans1=0,ans2=0;
        int left,right;
        left=0,right=n-1;
        while(left<=right){
            if(arr[left] + arr[right]<=r) left++;
            else{
                ans1+= right-left;
                right--; 
            }
        }
        left=0,right=n-1;
        while(left<=right){
            if(arr[left] + arr[right]<=l-1) left++;
            else{
                ans2+= right-left;
                right--; 
            }
        }
        cout<<abs(ans2-ans1)<<endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqmax priority_queue<int>
#define pqmin priority_queue<int,vi,greater<int> >
#define mod 1000000007
#define vs vector<string>
#define mp map<int,int>
#define ump unordered_map<int,int>
#define space ' '
#define stc stack<char>
#define sti stack<int>
#define all(arr) arr.begin(),arr.end()
#define looprev(i,a,b) for(int i=a;i>=(b);i--)
#define logarr(arr,a,b) for(int z=(a);z<=(b);z++) std::cout<<(arr[z])<<space;std::cout<<std::endl;
#define si set<int>
int gCd(int a,int b){
    if(b==0)
        return a;
    return gCd(b,a%b);
}
int fact(int n){
    int res=1;
    for(int i=2;i<=n;i++)
        res = (res*i)%mod;
    return res;
}
int nCr(int n,int r){
    return fact(n)/ (fact(r)*fact(n-r));
}
    
bool compare(pair<int,int> &one, pair<int,int> &two){
    return one.second < two.second;
}
bool dh=false;
int maxSubarraySum(vi &arr, int size)
{
    
    int max_ending_here = 0, max_so_far = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] <= max_ending_here + arr[i]) {
            max_ending_here += arr[i];
        }
        else {
            max_ending_here = arr[i];
            dh=true;
        }
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}
int32_t main(){
    tester{
        int n;cin>>n;
        int sum_=0;
        vi arr;
        bool flag=false;
        looper(i,0,n){
            int x;cin>>x;arr.pb(x);
            sum_+=x;
            if(sum_<=0){
                flag=true;
            }
        }
        if(flag==true){
            cout<<"NO"<<endl;
            continue;
        }
        sum_=0;
        for(int i=n-1;i>=0;i--){
            sum_+=arr[i];
            if(sum_<=0){
                cout<<"NO"<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false){cout<<"YES"<<endl;}
    }   
    return 0;
}
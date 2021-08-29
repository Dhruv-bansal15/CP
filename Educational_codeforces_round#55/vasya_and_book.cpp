#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <stack>
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
int32_t main(){
    tester{
        int n,init_pos,final_pos,d;cin>>n>>init_pos>>final_pos>>d;
        int diff = abs(init_pos - final_pos);
        int ans = INT64_MAX;
        if(diff%d==0){
            int curr = diff/d;
            cout<<curr<<endl;
            continue;
        }else{
            // reach pos 1
            int curr_steps=0;
            diff = init_pos - 1;
            if(diff%d!=0){
                curr_steps+= diff/d + 1;
                if((final_pos - 1)%d==0){
                    curr_steps+= (final_pos-1)/d;
                    ans=min(ans,curr_steps);
                }
            }
            // reach last pos
            curr_steps=0;
            diff = n - init_pos;
            if(diff%d!=0){
                curr_steps+= diff/d + 1;
                if((n - final_pos)%d==0){
                    curr_steps+= (n - final_pos)/d;
                    ans=min(ans,curr_steps);
                }
            }
            if(ans!= INT64_MAX){
                cout<<ans<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }   
    return 0;
}
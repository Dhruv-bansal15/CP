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
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
vector<bool> state(1000000 + 2);   
int32_t main(){
    int n;cin>>n;
    int ans=0;
    int curr_ans=0;
    // if(state[1]==false) cout<<0;
    looper(i,0,n){
        char a;cin>>a;
        int x;cin>>x;
        if(a=='+'){
            curr_ans+=1;
            if(curr_ans>ans) ans=curr_ans;
            state[x]=true;
        }else if(a=='-'){
            if(state[x]==true){
                curr_ans--;
                state[x]=false;
            }else{
                ans++;
                state[x]=false;
            }
        }
    }
    cout<<ans;
    return 0;
}
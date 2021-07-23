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
    
int32_t main(){
    int n,min_req,total;cin>>n>>min_req>>total;
    int count=0;
    int ways=0;
    looper(i,0,n){
        int x;cin>>x;
        if(x<=min_req) count++;
        else{
            if(count>=total){
                ways+= count-total+1;
                
            }
            count=0;
        }
    }
    if(count>=total) ways+= count-total+1;
    cout<<ways;

    return 0;
}
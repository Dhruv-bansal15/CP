#include <iostream>
#include <cstdio>
#include <stack>
#include <bits/stdc++.h>
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
int painted_1[5100];
int painted_2[5100][5100];
vi painted_sec[5100];
int32_t main(){
    int n,q;cin>>n>>q;
    looper(i,0,q){
        int x,y;cin>>x>>y;
        x--,y--;
        looper(j,x,y+1){
            if(painted_sec[j].size()<3){
                painted_sec[j].pb(i);
            }
        }
    }
    int left=0;
    looper(i,0,n){
        if(painted_sec[i].size()==0){
            left++;
        }else if(painted_sec[i].size()==1){
            painted_1[painted_sec[i][0]]++;
        }else if(painted_sec[i].size()==2){
            painted_2[painted_sec[i][0]][painted_sec[i][1]]++;
            painted_2[painted_sec[i][1]][painted_sec[i][0]]++;
        }
    }
    int ans=0;
    looper(i,0,q){
        looper(j,i+1,q){
            int curr_ans = n - left - painted_1[i] - painted_1[j] - painted_2[i][j];
            ans=max(ans,curr_ans);
        }
    }
    cout<<ans;
    return 0;
}
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
#define invi(n) vi arr(n); for(int i=0; i<n; i++) cin >> arr[i];
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
int fun(vi &arr,int x){
    int curr=0;
    if(arr[x]>arr[x+1]){
        swap(arr[x],arr[x+1]);
        curr=1;
    }
    return curr;
}
int32_t main(){
    tester{
        int n;cin>>n;
        vi arr;arr.pb(-1);
        looper(i,0,n){
            int x;cin>>x;
            arr.pb(x);
        }
        int cnt=0;
        int ch=0;
        int hihi=-1;
        looper(i,1,n+1){
            bool done=false;
            hihi=i;
            if(i%2==0){
                for(int j=2;j<=n-1;j+=2){
                    int temp = fun(arr,j);
                    if(temp)
                        done=true;
                }
            }else{
                for(int j=1;j<=n-2;j+=2){
                    int temp = fun(arr,j);
                    if(temp){
                        done=true;
                    }
                }
            }
            // looper(i,1,n+1){
            //     cout<<arr[i]<<space;
            // }
            // cout<<endl;
            if(done==true){
                cnt++;ch=0;
            }else if(ch==1) 
                break;
            else{
                ch=1;
            }

        }
        cout<<hihi<<endl;

    }   
    return 0;
}
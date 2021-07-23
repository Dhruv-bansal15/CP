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
    int n,l,x,y;cin>>n>>l>>x>>y;
    vi arr;map<int, int> freq;
    bool xfound=false,yfound=false;
    looper(i,0,n){
        int k;cin>>k;arr.pb(k);
        freq[k]+=1;
        if(k==x | freq.count(k - x )) xfound==true;
        if(k==y | freq.count(k-y)) yfound=true;
    }   
    looper(i,0,n-1){
        if(xfound==true & yfound==true){
            break;
        }
        if(freq.count(arr[i] + x)){xfound=true;}
        if(freq.count(arr[i]+y)){yfound=true;}
    }
    if(xfound==true & yfound==true){
        cout<<0;
    }else if(xfound==true | yfound==true){
        if(xfound){
            cout<<1<<endl;
            cout<<y;
        }else{
            cout<<1<<endl;
            cout<<x;
        }
    }else{
        int ans=-1;
        looper(i,0,n){
            int k = arr[i];
            int new_mark=k+x;
            
            if(k+x<=l){
                if(freq.count(k+x+y) | freq.count(k+x-y)){
                    ans = k+x;
                    break;
                }
            }
            if(k+y<=l){
                if(freq.count(k+y+x) | freq.count(k+y-x)){
                    ans = k+y;
                    break;
                }
            }
            if(k-x>=0){
                if(freq.count(k-x+y) | freq.count(k-x-y)){
                    ans = k-x;
                    break;
                }
            }
            if(k-y>=l){
                if(freq.count(k+x-y) | freq.count(k-x-y)){
                    ans = k-y;
                    break;
                }
            }
        }
        if(ans!=-1){
            cout<<1<<endl;cout<<ans;
        }else{
            cout<<2<<endl;cout<<x<<" "<<y;
        }
    }


    return 0;
}
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
    
int32_t main(){
    int no_of_digits,sum_;cin>>no_of_digits>>sum_;
    if((no_of_digits>1 & sum_==0) | (sum_>9*no_of_digits)){
        cout<<-1<<space<<-1;
    }else if(sum_==0 & no_of_digits==1){
        cout<<0<<space<<0;
    }else{
        string large="",small="";
        int temp = sum_;
        int left = sum_ - 9*(no_of_digits-1);
        if(left<=0){
            small.pb(1 +'1' - 1);
            sum_-= 1;
        }else{
            small.pb(left + '1' - 1);
            sum_-= left;
        }
        looper(i,0,no_of_digits-1){
            int hue = min((int)9,sum_);
            small.pb(hue + '1' - 1);sum_-= hue;
        }
        sum_= temp;
        looper(i,0,no_of_digits){
            int hue = min((int)9,sum_);
            large.pb(hue + '1' - 1);sum_-= hue;
        }
        cout<<small[0];
        for(int i=no_of_digits-1;i>0;i--){
            cout<<small[i];
        }
        cout<<space;
        cout<<large;
        

    }
    return 0;
}
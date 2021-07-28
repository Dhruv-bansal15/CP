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
int32_t main(){
    int n,k;cin>>n>>k;
    if(k==0){
        cout<<n;
        return 0;
    }
    vi arr;
    while(n!=0){
        int digit=n%10;arr.pb(digit);n/=10;
    }   
    vi new_arr;
    for(int i=arr.size()-1;i>=0;i--){
        new_arr.pb(arr[i]);
    }
    int sz= new_arr.size();
    looper(i,0,sz-1){
        if(k==0){
            break;
        }
        int j=i+1;
        int curr= -1,value=INT64_MIN;
        while(j<=i+k & j<sz){
            if(value<new_arr[j]){
                curr=j;value=new_arr[j];
            }
            j++;
        }
        if(new_arr[i]<new_arr[curr]){
            k-= curr - i;
            for(int j=curr;j>i;j--){
                int temp = new_arr[j-1];
                new_arr[j-1]=new_arr[j];new_arr[j]=temp;

            }
        }
    }
    for(int i:new_arr){
        cout<<i;
    }
    return 0;
}
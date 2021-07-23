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
    tester{
        int n;cin>>n;
        vi arr;
        bool ifpos=false,ifneg=false;
        looper(i,0,n){
            int x;cin>>x;arr.pb(x);
            if(x>0) {
                ifpos=true;
            }
            if(x<0){
                ifneg=true;
            }
        }
        sort(arr.begin(),arr.end());
        if(ifpos==false){
            int ans = 1;
            int i= arr.size()-1,count=0;
            while(true){
                if(count<5){
                    ans*= arr[i];
                    i--;count++;
                }else{
                    break;
                }
            }
            cout<<ans<<endl;
        }else if(ifneg==false){
            int ans = 1;
            int i= arr.size()-1,count=0;
            while(true){
                if(count<5){
                    ans*= arr[i];
                    i--;count++;
                }else{
                    break;
                }
            }
            cout<<ans<<endl;
            
        }else{
            int high;
            int i=0;
            while(true){
                if(arr[i]>0){
                    high=i;
                    break;
                }
                i++;
            }
            int low=0;
            int indexx = high;
            int ans=1,count=0;
            while(low<high & high<arr.size()-1 & count<4){
                if(abs(arr[low])>arr[high]){
                    ans*= arr[low];
                }else{
                    
                }
            }

        }

    }   
    return 0;
}
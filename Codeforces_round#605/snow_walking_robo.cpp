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
    
int32_t main(){
    tester{
        string s;cin>>s;
        int L=0,R=0,U=0,D=0;
        looper(i,0,s.size()){
            if(s[i]=='L'){
                L++;
            }else if(s[i]=='R'){
                R++;
            }else if(s[i]=='U'){
                U++;
            }else{
                D++;
            }
        }
        // cout<<L<<" "<<R<<" "<<U<<" "<<D<<endl;
        if(L>0 & R>0 & U>0 & D>0){
            int ii=min(L,R),jj=min(U,D);
            cout<< 2*(ii + jj)<<endl;
            looper(i,0,ii){
                cout<<'L';
            }
            looper(i,0,jj){
                cout<<'U';
            }
            looper(i,0,ii){
                cout<<'R';
            }
            looper(i,0,jj){
                cout<<'D';
            }
            cout<<endl;

        }else{
            int ii=min(L,R),jj=min(U,D);
            if(ii==0 & jj>=1){
                cout<<2<<endl;
                cout<<"UD"<<endl;
            }else if(jj==0 & ii>=1){
                cout<<2<<endl;
                cout<<"LR"<<endl;
            }else{
                cout<<0<<endl;
            }
            
        }
    }   
    return 0;
}

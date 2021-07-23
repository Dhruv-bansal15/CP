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
    int n;cin>>n;
    int count1=0,count2=0;
    bool parity=false;
    vi arr;
    looper(i,0,n){
        int x;cin>>x;
        arr.pb(x);
    }   
    int i=0,j=n-1;
    while(i<=j){
        int req;
        if(arr[i]>arr[j]){
            req= arr[i];
            i++;
        }else{
            req=arr[j];
            j--;
        }
        if(parity==false){
            count1+= req;
            parity=true;
        }else{
            count2+= req;
            parity=false;
        }
    }
    cout<<count1<<" "<<count2;
    return 0;
}
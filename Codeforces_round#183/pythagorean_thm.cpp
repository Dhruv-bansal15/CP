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
bool return_hypo(int a,int b,int n){
    int c= pow(a,2) + pow(b,2);
    double temp = sqrt(c);
    int temp_ = temp/1;
    if(temp==temp_){
        if(temp_<=n & temp_>=1){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}  
int32_t main(){
    int n;cin>>n;
    int count=0;
    looper(i,1,n+1){
        looper(j,i,n+1){
            if(return_hypo(i,j,n)) count++;
        }
    }
    cout<<count;
    return 0;
}
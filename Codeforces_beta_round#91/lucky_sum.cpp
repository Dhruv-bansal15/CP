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
int nextLucky(int n){
    
}
bool ifLucky(int n){
    while(n!=0){
        int digit= n%10;
        n/=10;
        if(digit==4 | digit==7){
            continue;
        }else{
            return false;
        }
    }
    return true;
}    
int32_t main(){
    int a,b;cin>>a>>b;
    looper(i,a,b+1){

    }
    return 0;
}
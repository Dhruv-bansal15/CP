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
    int a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
    float slope1,slope2;
    if(a==c | c==e){
        if(a==e){
            cout<<"TOWARDS";
        }else if(a==c){
            cout<<"RIGHT";
        }else{
            cout<<"LEFT";
        }
    }else{
        slope1 = (d-b)/(c-a);
        slope2 = (f-d)/(e-c);
        if(slope1==slope2){
            cout<<"TOWARDS";
        }else if(slope1<slope2){
            cout<<"LEFT";
        }else{
            cout<<"RIGHT";
        }
    }
    return 0;
}
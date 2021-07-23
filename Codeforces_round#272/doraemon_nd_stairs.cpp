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
    int n,m;cin>>n>>m;
    int max_moves=n,min_moves= n/2;
    if(n%2!=0){
        min_moves++;
    }
    if(m>max_moves){
        cout<<-1;
    }else{
        bool parity=false;
        looper(i,min_moves,max_moves+1){
            if(i%m==0){
                cout<<i;
                parity=true;
                break;
            }
        }
        if(!parity){
            cout<<-1;
        }
    }
       
    return 0;
}
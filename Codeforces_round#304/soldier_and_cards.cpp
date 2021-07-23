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
    //brute force
    int n;cin>>n;
    deque<int> arr1;
    deque<int> arr2;
    int count=0;
    tester{
        int x;cin>>x;
        arr1.pb(x);
    }
    int j;cin>>j;
    while(j--){
        int x;cin>>x;
        arr2.pb(x);
    }
    while(count<200){
        //if empty
        if(arr1.size()==0){
            cout<<count<<" "<<2<<endl; break;
        }else if(arr2.size()==0){
            cout<<count<<" "<<1<<endl; break;
        }
        count++;
        int a= arr1.front();
        int b= arr2.front();
        if(a<b){
            arr2.pop_front();
            arr1.pop_front();
            arr2.pb(a);arr2.pb(b);
        }
        if(a>b){
            arr1.pop_front();
            arr2.pop_front();
            arr1.pb(b);arr1.pb(a);
        }
        
    }
    if(count==200) cout<<-1<<endl;

    return 0;
}
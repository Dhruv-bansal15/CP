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
    int n,distinct_letter;cin>>n>>distinct_letter;
    int count=0;
    vector<char> arr;
    // arr.pb('a');
    // cout<<arr[0];
    for(char i='a';i<='z';i++){
        arr.pb(i);
        count++;
        if(count==distinct_letter) break;
    }   
    count=0;
    int i=0;
    int sz= arr.size() - 1;
    while(count<n){
        cout<<arr[i];
        i++;count++;
        if(i==sz+1) i=0;
    }
    return 0;
}
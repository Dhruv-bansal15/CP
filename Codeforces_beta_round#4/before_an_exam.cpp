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
    int n,count;cin>>n>>count;
    int left_ele=0,right_ele=0;
    vector<pii> arr;
    looper(i,0,n){
        int a,b;cin>>a>>b;
        left_ele+=a;right_ele+=b;
        arr.pb({a,b});
    }   
    if(count>=left_ele & count<=right_ele){
        cout<<"YES"<<endl;;
        // vi dhruv;
        count = count - left_ele;
        looper(i,0,arr.size()){
            if(count){
                if(count + arr[i].ff - arr[i].ss >=0){
                    count-= arr[i].ss - arr[i].ff;
                    cout<<arr[i].ss<<" ";
                }else{
                    cout<<arr[i].ff + count<<" ";
                    count=0;
                }
            }else{
                cout<<arr[i].ff<<" ";
            }
        }
    }else{
        cout<<"NO";
    }
    return 0;
}
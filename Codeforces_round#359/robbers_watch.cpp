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
    int bits_acquired1=1,bits_acquired2=1;
    for(int i=7;i<n;i*=7){
        bits_acquired1++;
    } 
    for(int i=7;i<m;i*=7){
        bits_acquired2++;
    } 
    if(bits_acquired2 + bits_acquired1>7){
        cout<<0;
    }else{
        int ans=0;
        looper(i,0,n){
            looper(j,0,m){
                vi places_acquired(7);
                int u=0;
                int max_ele=INT64_MIN;
                for(int a=i;u<bits_acquired1;u++){
                    places_acquired[a%7]+=1;
                    if(places_acquired[a%7]>max_ele){
                        max_ele=places_acquired[a%7];
                    }
                    a/=7;
                }
                u=0;
                for(int a=j;u<bits_acquired2;u++){
                    places_acquired[a%7]+=1;
                    if(places_acquired[a%7]>max_ele){
                        max_ele=places_acquired[a%7];
                    }
                    a/=7;
                }
                if(max_ele<=1){
                    ans++;
                }
               

            }
        }
        cout<<ans;
    }

    return 0;
}
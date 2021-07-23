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
    int n,init;cin>>n>>init;
    vi arr;
    looper(i,0,n){
        int x;cin>>x;
        arr.pb(x);
    }   
    sort(arr.begin(),arr.end());
    // cout<<arr[0];3
    int index1;
    bool visit1=false;
    looper(i,0,n){
        if(arr[i]>init) index1= i-1;visit1=true;break;
        if(arr[i]==init) index1=i;visit1=true;break;
    }
    if(visit1=false){
        int count=0;
        if(init<arr[0]){
            looper(i,0,n-1){
                count+= arr[i] - init;
                init = arr[i];
            }
        }else if(init>arr[n-1]){
            for(int i=n-1;i>0;i--){
                count+= init - arr[i];
                init= arr[i];
            }
        }
        cout<<count;
    }else{
        if(arr[index1]==init){
            int count=0;
            int temp = init;
            looper(i,index1 + 1 ,n-1){
                count+= arr[i] - init;
                init= arr[i];
            }
            for(int i=index1-1;i>0;i--){
                count+= init - arr[i];
                init= arr[i];
            }
            if(index1==0) count=count;
            else if(index1==n-1) count=count;
            else{

                int ans1,ans2;
                ans1 = count + arr[n-1] - arr[n-2] ;
                ans2 = count + arr[1] - arr[0];
                if(ans1>ans2) ans2+= arr[n-1] - temp;count=ans2;
                else ans1+= temp - arr[0];count=ans1;
            }
            cout<<count;
            
        }else{
            int count=0;
            int temp = init; //10
            looper(i,index1+1,n-1){
                count+= arr[i] - init;
                init = arr[i];
            }
            for(int i=index1;i>0;i--){
                count+= init - arr[i];
                init=arr[i];
            }
            int ans1,ans2;
            if(index1==n-2) ans1 = count+ arr[n-1] - temp + ;
            else ans1 = count + arr[n-1] - arr[n-2];
            if(index1==0) ans2 = temp - arr[0] + count;
            else ans2 = count + arr[1] - arr[0];
            if(ans1<ans2) count = ans1;
            else count = ans2;
            cout<<count;

        }
    }
    return 0;
}
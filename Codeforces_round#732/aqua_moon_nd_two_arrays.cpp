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
    tester{
        int n;cin>>n;
        vi arr1,arr2;
        arr1.pb(0);arr2.pb(0);
        looper(i,0,n){
            int x;cin>>x;arr1.pb(x);
        }
        looper(i,0,n){
            int x;cin>>x;arr2.pb(x);
        }
        vector<pii> lower,higher;
        int count1=0,count2=0;
        looper(i,1,n+1){
            if(arr1[i]<arr2[i]){
                higher.pb({i,arr2[i] - arr1[i]});
                count2+=arr2[i] - arr1[i] ;
            }else if(arr1[i]>arr2[i]){
                lower.pb({i,arr1[i] - arr2[i]});
                count1+= arr1[i] - arr2[i];
            }
        }
        if(count1==0 & count2==0){
            cout<<0<<endl;
            continue;
        }
        if(count1!=count2){
            cout<<-1<<endl;
        }else{
            cout<<count1<<endl;
            int i=0,j=0;
            while(i<lower.size() & j<higher.size()){
                
                if(lower[i].ss==higher[j].ss){
                    int k = lower[i].ss;
                    while(k--){
                        cout<<lower[i].ff<<" "<<higher[j].ff<<endl;;
                        
                    }
                    i++;j++;
                }else if(lower[i].ss>higher[j].ss){
                    int k = higher[j].ss;
                    int temp=k;
                    while(k--){
                        cout<<lower[i].ff<<" "<<higher[j].ff<<endl;
                    }
                    j++;lower[i].ss-=temp;
                }else if(lower[i].ss<higher[j].ss){
                    int k = lower[i].ss;
                    int temp=k;
                    while(k--){
                        cout<<lower[i].ff<<" "<<higher[j].ff<<endl;
                    }
                    i++;higher[j].ss-=temp;
                }
            }
        }
    }   
    return 0;
}
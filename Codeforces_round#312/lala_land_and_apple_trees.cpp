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
    int n;cin>>n;
    vector<pii> left,right;
    int i=0,j=0;
    int total=0;
    while(n--){
        int a,b;cin>>a>>b;
        total+=b;
        if(a<0){
            left.pb({a,b});i++;

        }else{
            right.pb({a,b});j++;
        }
    }
    sort(right.rbegin(), right.rend());
    sort(left.begin(), left.end());
    if((i==j) | (abs(i-j)==1)){
        cout<<total;
    }else{
        int ans1=0,ans2=0;
        //start from right
        int i=left.size()-1,j=right.size()-1;
        while(1){
            if(j>=0){
                ans2+= right[j].ss;j--;
            }else{
                break;
            }
            if(i>=0){
                ans2+= left[i].ss;i--;
            }else{
                break;
            }
        }
        // start from left
        while(left.size()){
            ans1+= left[left.size()-1].ss;
            left.pop_back();
            if(right.size()){
                ans1+= right[right.size()-1].ss;
                right.pop_back();
            }else{
                break;
            }
        }
        if(ans1>=ans2){
            cout<<ans1;
        }else{
            cout<<ans2;
        }

    }
    return 0;
}
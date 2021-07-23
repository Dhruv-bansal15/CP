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
vi arr;
bool if_great(int x,int y){
    int num = arr[y];
    vi arr1;
    looper(j,0,4){
        if(j!=y) arr1.pb(arr[j]);
    }
    float num1 = num/(float)2;
    bool u=true;
    looper(j,0,3){
        if(arr1[j]>num1) u=false;
    }
    if(u==true){return true;}
    u=true;
    num*=2;
    looper(j,0,3){
        if(arr1[j]<num) u=false;
    }
    if(u==true) {return true;}
    else return false;

}
int32_t main(){
    looper(i,0,4){
        string s;cin>>s;
        int n=s.size();
        n=n-2;
        arr.pb(n);
    }
    int count=0;
    char ans='C';
    looper(i,0,4){
        int x = arr[i];
        if(if_great(x,i)){
            count++;
            if(i==0){
                ans='A';
            }else if(i==1){
                ans='B';
            }else if(i==3){
                ans='D';
            }
        }
    }
    if(count>1) {cout<<"C";}
    else if(count==1) cout<<ans;
    else{
        cout<<"C";
    }
    
    return 0;
}
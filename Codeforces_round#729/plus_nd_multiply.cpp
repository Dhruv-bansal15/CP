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
bool isPower(int x, int y)
{
   
    int res1 = log(y) / log(x);
    double res2 = log(y) / log(x); // Note : this is double
 
    
    return (res1 == res2);
} 
int32_t main(){
    tester{
        int n,a,b;cin>>n>>a>>b;
        if(a==1){
            if(n%b==1) {cout<<"Yes"<<endl;}
            else {cout<<"No"<<endl;}
        }else if(b==1){
            cout<<"Yes"<<endl;
        }else{
            int max_subtract=1;
            bool temp=true;
            while(n - max_subtract>=0){
                if((n-max_subtract)%b==0) {cout<<"Yes"<<endl;temp=false;break;}
                max_subtract*=a;
            }
            if(temp){
                cout<<"No"<<endl;
            }
        }
        

    }   
    return 0;
    
}
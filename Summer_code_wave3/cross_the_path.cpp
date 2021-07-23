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
        string s;cin>>s;
        vector<vi> arr(10000 + 2, vector<int>(10000 + 2));
        int i=0,j=0;
        int count=0;
        looper(i,0,s.size()){
            if(s[i]=='N'){
                j++;
                if(arr[i][j]==1) count++;
                else arr[i][j]=1;
            }
            if(s[i]=='S'){
                j--;
                if(arr[i][j]==1) count++;
                else arr[i][j]=1;
            }
            if(s[i]=='E'){
                i++;
                if(arr[i][j]==1) count++;
                else arr[i][j]=1;
            }
            if(s[i]=='W'){
                i--;
                if(arr[i][j]==1) count++;
                else arr[i][j]=1;
            }

        }
        cout<<count<<endl;
    }
    return 0;
}
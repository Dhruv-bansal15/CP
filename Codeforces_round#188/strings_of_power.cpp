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
    string s;cin>>s;
    int count1=0,count2=0;
    string s1="heavy",s2="metal";
    int i=0;
    while(i<s.size()){
        if(s[i]=='h'){
            string temp="h";
            looper(j,i+1,i+5){
                if(j==s.size()){
                    break;
                }
                temp.pb(s[j]);
            }
            if(temp==s1){
                count1++;
                i+=5;
                continue;
            }
        }
        if(s[i]=='m'){
            string temp="m";
            looper(j,i+1,i+5){
                if(j==s.size()){
                    break;
                }
                temp.pb(s[j]);
            }
            if(temp==s2){
                // count1++;
                i+=5;
                count2+= count1;
                continue;
            }
        }
        i++;
    }
    cout<<count2;
    return 0;
}
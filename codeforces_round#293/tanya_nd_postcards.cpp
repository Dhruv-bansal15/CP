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
    map<char,int> arr;
    string str1,str2;cin>>str1>>str2;
    for(char i:str2){
        arr[i]+=1;
    }
    int joy=0,rude=0;
    string gigz="";
    for(char i:str1){
        if(arr[i]) {joy++;arr[i]--;}
        else{
            gigz.pb(i);
        }
    }
    for(char i:gigz){
        if(isupper(i)){
            char x = tolower(i);
            if(arr[x]) {arr[x]--;rude++;}
        }
        if(islower(i)){
            char x = toupper(i);
            if(arr[x]) {arr[x]--;rude++;}
        }
    }
    cout<<joy<<" "<<rude;
    return 0;
}
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
    string s1,s2;cin>>s1>>s2;
    int pos=0,curr=0;   
    int no_of_plus=0,no_of_minus=0;
    int ques=0;
    looper(i,0,s1.size()){
        if(s1[i]=='+'){
            no_of_plus++;
        }else if(s1[i]=='-'){
            no_of_minus++;
        }
    }   
    if(no_of_plus>no_of_minus){
        no_of_plus-= no_of_minus;
        pos=no_of_plus;
    }else if(no_of_minus>=no_of_plus){
        no_of_minus-= no_of_plus;
        pos= (-1)*no_of_minus;
    }
    no_of_plus=0,no_of_minus=0;
    looper(i,0,s2.size()){
        if(s2[i]=='+'){
            no_of_plus++;
        }else if(s2[i]=='-'){
            no_of_minus++;
        }else{
            ques++;
        }
    }
    if(no_of_plus>no_of_minus){
        no_of_plus-= no_of_minus;
        curr=no_of_plus;
    }else if(no_of_minus>=no_of_plus){
        no_of_minus-= no_of_plus;
        curr= (-1)*no_of_minus;
    }
    if(!ques){
        if(curr==pos){
            cout<<(float)1;
        }else{
            cout<<(float)0;
        }
    }else{
        
    }



    return 0;
}
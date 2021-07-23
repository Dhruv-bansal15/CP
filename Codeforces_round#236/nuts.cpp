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
    int max_sections,nuts,divisors_avialable,capacity;
    cin>>max_sections>>nuts>>divisors_avialable>>capacity;
    int count=0;
    while(nuts>0){
        if(max_sections - 1 <=divisors_avialable){
            count++;
            divisors_avialable-= max_sections-1;
            nuts-= capacity*(max_sections);
        }else{
            if(divisors_avialable==0){
                count++;
                nuts-= capacity;
                continue;
            }
            count++;
            int temp = divisors_avialable + 1;
            divisors_avialable=0;
            nuts-= temp*(capacity);

        }
    }   
    cout<<count;
    return 0;
}
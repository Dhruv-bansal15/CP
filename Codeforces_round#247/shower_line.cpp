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
vector<vi> arr;
int find_happiness(int babloo[]){
    int count=0;
    count+= arr[babloo[0]][babloo[1]] + arr[babloo[1]][babloo[0]];
    count+= arr[babloo[1]][babloo[2]] + arr[babloo[2]][babloo[1]];
    count+= 2*(arr[babloo[2]][babloo[3]] + arr[babloo[3]][babloo[2]]);
    count+= 2*(arr[babloo[3]][babloo[4]] + arr[babloo[4]][babloo[3]]);
    return count;

}
int32_t main(){
    vi input_ = {0,0,0,0,0,0};
    arr.pb(input_);
    looper(i,1,6){
        vi input;
        input.pb(0);
        looper(j,0,5){
            int x;cin>>x;
            input.pb(x);
        }
        arr.pb(input);
    }   
    int permu[] = {1,2,3,4,5};
    int ans = INT64_MIN;
    do{
        int temp = find_happiness(permu);
        if(temp>ans) {ans = temp;}
    }while(next_permutation(permu,permu+5));
    cout<<ans;
    return 0;
}
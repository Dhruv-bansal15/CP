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
    
    int sum, limit;
    cin >> sum >> limit;
    int curr = 0 ;
    multimap<int, int> lara_croft;
    looper(jj, 1, limit + 1){
        int least_signi_1 = 1;
        int i = jj;
        while(!(i&1)){
            least_signi_1*=2;
            i = i >> 1;
        }
        lara_croft.insert({least_signi_1, jj});
        curr += least_signi_1;
    }
    
    if(curr - sum >= 0){
        
        
        multimap<int, int>::iterator limit = --lara_croft.end();
        vi answer;
        while(sum){
            if(sum >= (*limit).first)
            {
                answer.pb((*limit).second);

                sum -= (*limit).first; 
            }

            limit--;
        }
        
        cout << answer.size() << endl;
 
        for(int i=0;i<answer.size();i++){
            cout<<answer[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}


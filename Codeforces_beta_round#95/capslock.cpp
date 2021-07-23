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
bool check(char ch){
    if (ch >= 'A' && ch <= 'Z')
        {return true;}
    else if (ch >= 'a' && ch <= 'z')
    {return false;}
}

void convertOpposite(string& str)
{
    int ln = str.length();
    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }
    cout<<str;
}
int32_t main(){
    string s;cin>>s;
    int count=0;
    // string final="";
    looper(j,0,s.size()){
        char zz = s[j];
        if(!check(zz)) {
            if(j!=0) count++;
            count++;
        }
    }   
    if(count==0 | count==1) {convertOpposite(s);}
    else cout<<s;
    return 0;
}
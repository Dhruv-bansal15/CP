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

vector<char> arr={'a','A','B', 'C' ,'D', 'E', 'F', 'G' ,'H' ,'I' ,'J', 'K', 'L', 'M' ,'N' ,'O' ,'P' ,'Q' ,'R' ,'S' ,'T' ,'U' ,'V' ,'W' ,'X' ,'Y' ,'Z'};
char findDiffChar(char a, char b){
    if(b=='a'){
        if(arr[1]!=a){
            return arr[1];
        }else{
            return arr[2];
        }
    }else{
        int j=1;
        while(arr[j]==a | arr[j]==b){
            j++;
        }
        return arr[j];
    }
}
int32_t main(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    if(k==2){
        int i=0;
        int cnt1=0,cnt2=0;
        looper(i,0,n){
            if(s[i]=='A'){
                if(i%2==0){
                    cnt2++;
                }else{
                    cnt1++;
                }
            }else if(s[i]=='B'){
                if(i%2==0){
                    cnt1++;
                }else{
                    cnt2++;
                }
            }else{
                cnt1++;cnt2++;
            }
        }
        if(cnt1<=cnt2){
            cout<<cnt1<<endl;
            looper(i,0,n){
                if(i%2==0){
                    cout<<'A';
                }else{
                    cout<<'B';
                }
            }
        }else{
            cout<<cnt2<<endl;
            looper(i,0,n){
                if(i%2==0){
                    cout<<'B';
                }else{
                    cout<<'A';
                }  
            }
        }
    }else{
        string result="";
        int start=0,end=0;
        int i=0,count=0;
        while(i<s.size()){
            if(i==s.size()-1){
                result.pb(s[i]);
                break;
            }
            if(s[i]!=s[i+1]){
                result.pb(s[i]);
                i++;
            }else{
                start=i;end=i;
                while(s[end]==s[i] & end<=s.size() -1){
                    end++;
                }
                end--;
                int temp = end-start+1;
                if(temp%2==0){
                    count+= temp/2;
                    char neww;
                    if(end==s.size()-1){
                        neww= findDiffChar(s[start],'a');
                    }else{
                        neww = findDiffChar(s[start],s[end + 1]);
                    }
                    while(temp--){
                        if(temp%2==0){
                            result.pb(neww);
                        }else{
                            result.pb(s[start]);
                        }
                    }
                    i=end+1;

                }else{
                    count+= temp/2;
                    char neww=findDiffChar(s[start],'a');
                    while(temp--){
                        if(temp%2==0){
                            result.pb(s[start]);
                        }else{
                            result.pb(neww);
                        }
                    }
                    i=end+1;
                }   
            }
        }
        cout<<count<<endl;
        cout<<result;

    }
    return 0;
}
// #include<bits/stdc++.h>
// #include <iostream>
// #include <cstdio>
// #include <cstdlib>
// #include <algorithm>
// #include <cmath>
// #include <vector>
// #include <set>
// #include <map>
// #include <unordered_set>
// #include <unordered_map>
// #include <queue>
// #include <ctime>
// #include <cassert>
// #include <complex>
// #include <string>
// #include <cstring>
// #include <chrono>
// #include <random>
// #include <bitset>
// #include <functional>
// #include <numeric>
// using namespace std;
// #define int long long 
// #define vi vector<int>
// #define pii pair<int,int>
// #define pb push_back
// #define ff first
// #define tester int t;cin>>t;while(t--)
// #define looper(a,b,c) for(int a=b;a<c;a++)
// #define ss second
// #define pqb priority_queue<int>
// #define pqs priority_queue<int,vi,greater<int> >
// #define mod 1000000007
    
// int32_t main(){
//     int n,k;cin>>n>>k;
//     vi store;
//     looper(i,0,n){
//         int x;cin>>x;
//         store.pb(x);
//     }
//     vector<pii> arr;
//     vector<bool> checker(n+1);
//     int smallest;
//     int oper_count=INT64_MAX;
//     // memset(checker,false,sizeof(checker));
//     looper(i,1,1001){
//         int temp=i;
//         int huehue=0;
//         looper(j,1,n){
//             if(store[j]!= temp+k){
//                 huehue++;
//             }
//             temp+=k;
//         }
//         if(i!= store[0]){
//             huehue++;
//         }
//         if(huehue<oper_count){
//             oper_count==huehue;
//             smallest=i;
//         }

//     }

//     // int h;cin>>h;
//     int ans= smallest;
//     if(smallest!= store[0]){
//         if(smallest<store[0]){
//             checker[1]=false;
//             arr.pb({1,store[0] - smallest});
//         }else{
//             checker[1]=true;
//             arr.pb({1,smallest - store[0]}); 
//         }
//     }

//     looper(i,2,n+1){
//         int x= store[i-1];
//         if(x== ans+k){
//             ans+=k;
//             continue;
//         }
//         if(x>ans+k){
//             checker[i]=false;
//             int b = x - (ans+k);
//             ans+=k;
//             arr.pb({i,b});
//             continue;
//         }
//         if(x<ans+k){
//             checker[i]=true;
//             int b = ans+k - x;
//             ans+=k;
//             arr.pb({i,b});
//             continue;
//         }
//     }
//     cout<<arr.size()<<endl;
//     for(auto i:arr){
//         if(checker[i.ff]==true){
//             cout<<"+ "<<i.ff<<" "<<i.ss<<endl;
//         }else{
//             cout<<"- "<<i.ff<<" "<<i.ss<<endl;
//         }
//     }

//     return 0;
// }
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
    int n,d;cin>>n>>d;
    vi arr;
    arr.pb(-1);
    looper(i,0,n){
        int x;cin>>x;arr.pb(x);
    }   
    int min_change=INT64_MAX;
    int fixed_ind=1;
    // map<int,bool> no_need;
    looper(i,1,n+1){
        //making arr[i] fixed and changing Ap acc to that
        if(arr[i]>= d*(i-1)+ 1){
            int count=0;
            looper(j,1,n+1){
                if(arr[j]!= arr[i] + (j-i)*d){
                    count++;
                    // need_to_change[j]=false;
                }
            }
            if(count<min_change){
                min_change=count;
                fixed_ind=i;
            }
        }
    }
    // cout<<fixed_ind<<endl;
    cout<<min_change<<endl;
    looper(i,1,n+1){
        if(arr[i]==arr[fixed_ind] + (i-fixed_ind)*d ){
            continue;
        }
        if(arr[i]> arr[fixed_ind] + (i-fixed_ind)*d){
            cout<<"- "<<i<<" "<<arr[i] - arr[fixed_ind] - (i-fixed_ind)*d<<endl;
        }else if(arr[i]< arr[fixed_ind] + (i-fixed_ind)*d){
            cout<<"+ "<<i<<" "<<arr[fixed_ind] + (i-fixed_ind)*d - arr[i]<<endl;
        }
    }
    return 0;
}
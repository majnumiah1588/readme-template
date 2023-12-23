/**
 *   author: MD. MAJNU MIAH
 *   created  : Sep 28 2023 02:17:43
**/

#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("Ofast,no-stack-protector", "omit-frame-pointer", "inline", "-ffast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,fma,popcnt,abm,mmx,avx")

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef  long double  ld;
const ll mn=INT_MAX;

#define sz(v)                        (int)(v).size()
#define all(v)                       (v).begin(), (v).end()
#define nl                           "\n"
#define NL                           cc << nl;
#define cc                           cout
#define ckv(x)                       cerr<<"# Check value = "<<(x)<<nl;
#define Ins                          insert
#define pb                           push_back
#define eb                           emplace_back
#define yes                          cout << "Yes\n";
#define no                           cout << "No\n";
#define OP(ans)                       cc<<ans<<nl;
#define ijw                          ll i,j,w=0;
#define fr(i,a,b)                    for(int i=a; i<(int)b; i++)
#define in(n)                        ll n; cin >> n;
#define FastIO                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    ld n,x,y; cin>>n>>x>>y;   set<ld>st;
     fr(i,0,n) {
         ld a,b; cin>>a>>b; ld y1=y-b,x1=x-a,d; 
         if(y1==x1) {  d=1; }
         else if(x1==0) { d=mn; }
         else if(y1==0) { d=0; }
         else if(y1==-1*(x1)) { d=-1; }
         else{d=y1/x1;}
         st.Ins(d);
      }

     OP(sz(st));
}
int main()
{
   FastIO;
   solve(); 
}
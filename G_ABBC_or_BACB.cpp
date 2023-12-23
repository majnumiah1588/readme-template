/**
 *   author: MD. MAJNU MIAH
 *   created  : Sep 19 2023 00:30:43
**/

#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("Ofast,no-stack-protector", "omit-frame-pointer", "inline", "-ffast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,fma,popcnt,abm,mmx,avx")

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(arr)                     (int)(arr).size()
#define mem(arr,value)               memset(arr,value,sz(arr))
#define all(arr)                    (arr).begin(), (arr).end()
#define rev(s)                       reverse((s).begin(),(s).end())
#define nl                           "\n"
#define NL                           cc << nl;
#define cc                           cout
#define ckv(x)                       cerr<<"# Check value = "<<(x)<<nl;

#define fr(i,a,b)                    for(int i=a; i<(int)b; i++)
#define rf(i,a,b)                    for(int i =a; i>=(int)b; i--)
#define sf(x)                        scanf("%lld",&x);
#define in(n)                        ll n; cin >> n;
#define pf(ans)                        printf("%lld",ans);
#define ins(s)                       string s; cin >> s;
#define TC                           in(tc); while(tc--)
#define DT                           cerr<<__DATE__<<" "<<__TIME__<<nl<<__FILE__<<nl;
#define FOR(v)                       for(auto u : (v))
#define Case                         cout<<"Case "<<++ii<<": "<<ans<<endl;
#define FastIO                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
  ins(s);  int n=sz(s); int mx=0,l=1,a=0,b=0,f=0,d=1;
  fr(i,0,n) { if(s[i]=='B') b++; else a++ ; }
  if(a==0 || b==0 || a==n || b==n) {cc<<'0'<<nl; return ;}

  fr(i,0,n-1){
     if(s[i]=='A' && s[i+1]=='A') { l++; mx=max(mx,l); }
     else{ l=1; mx=max(l,mx); }
  }
   fr(i,0,n-1){
     if(s[i]=='B' && s[i+1]=='B') { f=1; continue; }
     else if(f==1){ d++; f=0; }
  }
  if(b==1)  mx=mx; else  mx=a;
  cc<<mx<<nl;
 // ckv(l); ckv(a); ckv(b);
}
int main()
{
   FastIO;
   TC
     solve(); //  DT
}

/**
 *    author: Md Majnu Miah
 *    created  : Aug 22 2023 20:00:42
**/

#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("Ofast,no-stack-protector", "omit-frame-pointer", "inline", "-ffast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,fma,popcnt,abm,mmx,avx")

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define nl  "\n"
#define cc  cout
#define solved cc<<ans<<nl;

#define fr(i,a,b) for(int i=a; i<(int)b; i++)
#define rf(i,a,b) for(int i =a; i>=(int)b; i--)
#define rep(i,n) fr(i,0,n)
#define rep1(i,n) fr(i,1,n)
#define in(n) ll n; cin >> n;
#define ins(s) string s; cin >> s;
#define inp(arr,n) vector<int>arr(n); for(auto &a: arr) cin >> a;
#define print(arr)  for(auto a: arr) cout << a<< " "; cout << endl;
#define TC in(tc); while(tc--)
#define Execution_Time cerr << "\n" << 10 * (double)clock() / CLOCKS_PER_SEC * 1000 << " ms";
#define created cerr << "\ncreated  : " << __DATE__<<" "<<__TIME__<< endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define M 10003

 ll fact[M] ;

 int Binexp(ll b, ll p){   // MMI

     ll res = 1 ;
     ll x = b ;
     while(p){
               if(p&1){
                        res = (res * x) % M ;
                        p--;
                      }
         x = ( (x % M) * (x % M) ) % M ;
         p >>= 1 ;
    }

     return res;
 }

int main()
{
    fast

    fact[0]=1;

    rep1(i,M)     fact[i % M] = ( ( i % M ) * (fact[i-1] % M ) ) % M ;

    ll ind = 0 ;

    TC
    {
        in(n);
        in(r);
        ll numerator = (1LL * fact[n]) % M;
        ll denominator = ( 1LL * (fact[r] % M) * fact[n-r] ) % M;

        // modular multiplicative inverse of denominator
        ll MMI = Binexp ( denominator, M-2 );
        ll ans = ( (numerator % M ) * ( MMI % M ) ) % M ;

        cc << "Case "<< ++ind << ": "<< ans % M <<nl;
    }
     Execution_Time; created;
}

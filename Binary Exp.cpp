#include<bits/stdc++.h>
using  namespace  std;

using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;


ll Bigmod(ll base,ll n)
{
	ll res=1;
	while(n)
	{
		if(n%2==1)
		{
			res*=base;  // res = (res * base) % mod ;
			n--;
		}
		else {
			base*=base;   // base = ( ( base % mod * base % mod) % mod ) ;
			n/=2;         // n = n >> 1 ;
		}
	}
	return res;
}

int main()
{
	ll t;
	cin>>t;   while(t--)
	{
		ll n,m;
		cin>>n>>m;
		cout<<Bigmod(n,m)<<nl;
	}

}

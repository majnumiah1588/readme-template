#include<bits/stdc++.h>
using  namespace  std;
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl      '\n'
typedef long long int ll;
#define N 101
ll base[N][N],res[N][N];
ll mod=1000000007;

void mul(ll res[][N],ll base[][N],ll n)
{
	ll i,j,k;
	ll R[n+1][n+1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			R[i][j]=0;
			for(k=1;k<=n;k++)
			{
				ll x = (res[i][k]*base[k][j])%mod;
				R[i][j]=(R[i][j]+x)%mod;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			res[i][j]=R[i][j];
		}
	}
}

void power(ll base[][N],ll n,ll p)
{
	ll i,j;
	for(i=1;i<=n;i++)  for(j=1;j<=n;j++) {
			if(i==j)res[i][j]=1;  else res[i][j]=0; }

	while(p)
	{
		if(p%2==1)
		{
			mul(res,base,n);
			p--;
		}
		else{
			mul(base,base,n);
			p/=2;
		}
	}

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			base[i][j]=res[i][j];
		}
	}

}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll dim ,p,i,j,k;
		cin>>dim >>p;
		for(i=1;i<=dim;i++)
		{
			for(j=1;j<=dim;j++)
			{
				cin>>base[i][j];
			}
		}
		power(base,dim ,p);

		//cout<<"print the answer"<<nl;
		for(i=1;i<=dim ;i++)
		{
			for(j=1;j<=dim ;j++)
			{
				cout<<base[i][j]%mod<<" ";
			}
			cout<<nl;
		}
	}
	return 0;
}

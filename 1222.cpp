#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef map<int, int> map;

#define MOD 1000000007
#define tc int t;scanf("%d",&t);while(t--)
#define pb push_back
#define ff(i,a,b) for(int i=a;i<b;i++)
#define mp make_pair
#define pf printf
#define sf scanf
#define bs binary_search
#define nl printf("\n")
#define si(x) int x;scanf("%d",&x)
#define sll(x) ll x;scanf("%lld",&x)
#define pi(x) printf("%d\n",x )

int main()
{
	 //freopen("A-large.in","r",stdin);
    //freopen("1.out","w",stdout);
    tc
    {
    	si(n);
    	si(d);
    	vl v(n);
    	ll s=0;
    	for(ll i =0;i<n;i++)
    	{
    		sf("%lld",&v[i]);
    		s+=v[i];
    	}
    	ll avg = s/n;
    	if(s%n!=0)
    	{
    		pf("-1\n");
    	}
    	else
    	{
    		vl vis(n,0);
    		ll count = 0;
    		ll i =0,flag=1;
    		while(vis[i]==0 && i<n)
    		{
    			ll sum = 0;
    			for(ll j=i;j<n && vis[j]==0;j+=d)
    			{
    				sum+=(avg-v[j]);
    				//cout << sum <<"\n";
    				vis[j]++;
    			}
    			//vis[i]=1;
    			//cout << "sum = " <<sum <<"\n";
    			if(sum!=0)
    			{
    				flag = 0;
    				break;
    			}
    			i++;
    		}
    		if(flag == 0)
    		{
    			//cout <<"fuck\n";
    			cout << "-1\n";
    			continue;
    		}
    		else
    		{
    			vl vis1(n,0);
    			i=0;
    			while(vis1[i]==0)
    			{
    				ll carry=0;
    				for(ll j=i;j<n && vis1[j]==0;j+=d)
    				{
    					carry=avg-v[j];
    					if(j+d<n)
    					{
    						v[j]+=carry;
    						v[j+d]-=carry;
    						count+=abs(carry);
    					}
    					vis1[j]=1;
    				}
    				i++;
    			}
    			cout << count <<"\n";
    		}
    	}
    }
    return 0;
}

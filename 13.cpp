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
    	si(m);
    	vl minsalary(n);
    	ff(i,0,n)
    	{
    		sf("%lld",&minsalary[i]);
    	}
    	vl offeredsal(m),maxjoboffer(m);
    	vl max(m);
    	ff(i,0,m)
    	{
    		cin >> offeredsal[i];
    		cin >> maxjoboffer[i];
    		max[i]=maxjoboffer[i];
    	}
    	char qual[n][m];
    	ff(i,0,n)
    	{
    		ff(j,0,m)
    		{
    			cin >> qual[i][j];
    		}
    	}
    	//cout << "offeredsal[0] = " <<offeredsal[0];
    	//cout << "qual[0][0] = " <<qual[0][0];
    	vl sal(n,0);
    	ll total = 0,cnt=0;
    	int co=-1;
    	vi count(n,0);
    	ff(i,0,n)
    	{
    		co=-1;
    		ff(j,0,m)
    		{
    			if(qual[i][j]=='1')
    			{
    	//			cout <<"offeredsal[j] = " <<offeredsal[j];
    	//			cout <<"minsalary[i] =" << minsalary[i];
    	//			cout <<"maxjoboffer[j] =" <<maxjoboffer[j];
    				if(offeredsal[j]>=minsalary[i] && maxjoboffer[j]>=1)
    				{
    					if(sal[i] < offeredsal[j])
    						{
    							sal[i]=offeredsal[j];
    							count[i]=1;
    							co = j;
    						}
   		//			cout <<"fuck \n";

    				}
    				    			}
    			//cout <<"sal[i] = " <<sal[i] <<"\n";
    		}
    	//	cout <<"sal[i] = " <<sal[i] <<"\n";
    		total+=sal[i];
    		cnt+=count[i];
    		if(co>=0)
    			maxjoboffer[co]--;

    	}
    	ll free=0;
    	ff(j,0,m)
    	{
    		if(max[j]==maxjoboffer[j])
    			free++;
    	}
    	cout << cnt <<" ";
    	cout << total <<" ";
    	cout <<free <<"";
    	nl;
    }
}

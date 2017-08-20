#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
//typedef map<int, int> map;

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
    	vi v(n);
    	int flag=1, count1[100]={0},count2[100]={0};
    	map<int, int> mpp;
    	ff(i,0,n)
    	{
    		sf("%d",&v[i]);
    		mpp[v[i]]++;
    		if(v[i]<1 || v[i] >7)
    			flag=0;
    	}
    	map<int, int>::iterator it;
    	for(int i =1;i<=7;i++)
    	{
    		if(mpp[i]<1)
    			flag=0;
    	}
    	if(flag==0)
    	{
    		pf("no\n");
    		continue;
    	}
    	int index=0,max=1;
    	ff(i,0,n)
    	{
    		if(v[i]<7)
    		{
    			count1[v[i]]++;
    		}
    		if(v[i]>=7)
    			{
    				index = i;
    				break;
    			}
    	}
    	if(index == 0)
    	{
    		ff(i,0,n)
    		{
    			if(v[i]>max)
    			{
    				max=v[i];
    				index = i;
    			}
    		}
    	}
    	for(int i =index;i<n;i++)
    	{
    		count2[v[i]]++;
    	}
    	for(int i =1;i<7;i++)
    	{
    		if(count1[i]!=count2[i])
    		{
    			flag = 0;
    			break;
    		}
    	}
    	if(flag == 0)
    	{
    		pf("no\n");
    	}
    	else
    		pf("yes\n");
    }
   return 0;
}

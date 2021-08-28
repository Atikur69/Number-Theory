/**
    Author : Md. Atikur Rahman
    Node : first see input data and than
    using long long
*/
#include<bits/stdc++.h>

#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define test scanf("%d",&tt)
#define loop for(int t = 1 ; t<=tt ; t++)
#define ll long long
#define MAX 2000005
#define limit 1000005
#define MOD 1000000007
#define PI acos(-1)
#define pii pair<int , int>

using namespace std;
int sum[MAX];
vector<int>divisors[MAX];
void seive_SOD_NOD()
{
    for(int i = 1; i<=limit ; i++)
    {
        for(int j = i ; j<=limit ; j+=i)
        {
            divisors[j].push_back(i);
            sum[j]+=i;
        }
    }
}

int main()
{
    seive_SOD_NOD();
//    int n , t = 1;
//    while(cin>>n)
//    {
//        if(n == 0)break;
//        if(mymap[n])printf("Case %d: %d\n",t,mymap[n]);
//        else printf("Case %d: -1\n",t);
//        t++;
//    }
    return 0;
}


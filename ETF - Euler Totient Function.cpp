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
#define MAX 200005
#define limit 10000005
#define MOD 1000000007
#define PI acos(-1)
#define pii pair<int , int>

using namespace std;
/// sqrt(n) time complexity
int PHI(int n)
{
    int ret = n;
    for(int i = 2 ; i*i<=n ; i++)
    {
        if(n%i == 0)
        {
            while(n%i == 0)
            {
                n/=i;
            }
            ret-=(ret/i);
        }
    }
    if(n>1)ret-=(ret/n);
    return ret;
}

int main()
{
    int tt;
    test;
    loop
    {
        int n;
        cin>>n;
        cout<<PHI(n)<<endl;
    }
    return 0;
}

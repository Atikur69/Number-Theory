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
#define limit 1000000
#define MOD 1000000007
#define PI acos(-1)
#define pii pair<int , int>

using namespace std;

bool primes[limit+1];
vector<int>vec_prime;
/// limit er value 10^8 dewa ase problem hisebe komaite hobe
/// otherwise time limit khaba
/// 5761455 ato gulo prime store ase
void seive()
{
    memset(primes , true , sizeof primes);
    primes[0] = primes[1] = false;
    for(int i = 4 ; i<=limit ; i+=2)primes[i] = false;
    for(int i = 3 ; i*i<=limit ; i+=2)
    {
        if(primes[i] == true)
        {
            for(int j = i*i ; j<=limit ; j+=i)
            {
                primes[j] = false;
            }
        }
    }
    vec_prime.push_back(2);
    for(int i = 3 ; i<=limit ; i+=2)
    {
        if(primes[i])vec_prime.push_back(i);
    }
}

int main()
{
    seive();
    int tt;
    test;
    loop
    {
        ll n , ans = 1;
        scanf("%lld",&n);
        for(int i = 0 ; i<vec_prime.size() && vec_prime[i]*vec_prime[i]<=n ; i++)
        {
            int divisor_cnt = 0;
            if(n%vec_prime[i] == 0)
            {
                while(n%vec_prime[i] == 0)
                {
                    n/=vec_prime[i];
                    divisor_cnt++;
                }
                ans*=(divisor_cnt+1);
            }
        }
        if(n>1)ans*=2;
        printf("Case %d: %lld\n",t , ans-1);
    }
    return 0;
}


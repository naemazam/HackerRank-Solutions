/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;

//fast.io
#define _ ios_base::sync_with_stdio(0);
#define fastt ios_base::sync_with_stdio(false); cin.tie(0);

//typedef
typedef float               flt;
typedef double              dbl;
typedef long double         ld;
typedef long long int       lli;
typedef long long           ll;
typedef unsigned long long  ull;

//template
template< class T > T sqr(T n) { return n*n; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template< class T > T Max(T a, T b) { return a>b?a:b; }
template< class T > T Min(T a, T b) { return a<b?a:b; }
template< class T > T abs(T a) { return a>0?a:-a; }

//constant
#define pi          acos(-1.0)
#define PI          3.1415926535897932384626433832795028841971
#define INF         0x3f3f3f3f;
const ll LNF =      0x3f3f3f3f3f3f3f3f;
const double EPS =  1e-8;
const ld     EUL =  2.71828182845904523536;  //20digits
const ld     PII =  3.14159265358979323846;  //20digits
#define mx_value    1e19

//iteration sector
#define tr(c, i)            for (auto i = c.begin(); i != c.end(); i++)
#define all(x)              begin(x), end(x) 
#define iterate_print(s)    for(auto &x: s) cout<<x<<" " ; cout<<endl ;
#define pri(a,s,n)          for(int i = s; i < n; i++) cout<<a[i]<<" "; cout << endl
#define foreach(i,n)        for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)

//for loop
#define f(i,a,b)        for(int i=(a);i<(b);i++)
#define fd(i,a,b)       for(ll i=(a);i>(b);i--)
#define f0(i,b)         for(int i=0;i<b;i++)
#define f1(i,b)         for(int i=1;i<=b;i++)
#define fi(i,a,b)       for(int i=a;i>=b;i--)
#define fx(i,a,b,dx)    for(int i=a;i<b;i+=dx)
#define fn(i,b)         for(int i=0;i<n;i++)

//container
#define pii             pair <int,int>
#define pll             pair <ll,ll>
#define pss             pair <string,string>
#define trip            pair <int,pair<int,pair<int,int>>>

#define vi              vector <int>
#define viIt            vector<int>::iterator
#define vl              vector <ll>
#define vlIt            vector<ll>::iterator
#define vpi             vector <pi>
#define vpl             vector <pl>
#define vs              vector <st>
#define vvi             vector<vector<int>>
#define vvll            vector<vector<ll>>  

#define mii             map<int,int>
#define mll             map<ll,ll>
#define mss             map<string,string>
#define mls             map<ll,string>
#define msl             map<string,ll>
#define siIt            set<int>::iterator
#define pqinc           priority_queue<int, vector<int>, greater<int> >
#define pqdec           priority_queue
#define pqsetin         priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>
#define pqsetdec        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>>

//stl related
#define FS                  first
#define SC                   second
#define mp                  make_pair
#define mt                  make_tuple 
#define pb                  push_back
#define rsz                 resize
#define sz(x)               (int) (x).size()
#define it_multiset         std::multiset<int>::iterator it;
#define it_mii              std::map<int, int>::iterator it;
#define present(c, x)       (c.find(x) != c.end())
#define cpresent(c, x)      (find(all(c), x) != c.end())

//scanf & printf
#define si(n)                       scanf("%d",&n)
#define sii(a,b)                    scanf("%d%d",&a,&b)
#define siii(a,b,c)                 scanf("%d%d%d",&a,&b,&c)
#define sl(a)                       scanf("%lld",&a)
#define sll(a,b)                    scanf("%lld%lld",&a,&b)
#define slll(a,b,c)                 scanf("%lld%lld%lld",&a,&b,&c)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

#define pf             printf
#define pfi(n)         printf("%d\n",n)
#define pfl(n)         printf("%lld\n",n)
#define pfis(n)        printf("%d ",n)
#define pfls(n)        printf("%lld ",n)
#define pfci(n,ans)    printf("Case %lld: %d\n",n,ans)
#define pfcl(n,ans)    printf("Case %lld: %lld\n",n,ans)
#define pfcd(n,ans)    printf("Case %lld: %lf\n",n,ans)

//others
#define br '\n'
#define FRO freopen("in.txt","r",stdin);
#define FRU freopen("out.txt","w",stdout);
#define mem(a,v) memset(a,v,sizeof(a))
#define in(n,a,b) ( n>=a && n<=b )
#define balsal printf("dhukse\n")
#define yes    printf("YES\n")
#define no     printf("NO\n")


void solve(){  
    // unsigned long long int
    
    unsigned long long int MOD = (ull) pow(2,31);

    bool flag = true;

    unsigned long long int N,P,Q,S;

    cin>>N>>S>>P>>Q;

    
    

    // a[0]
    unsigned long long int a = S % MOD; 
    
    unsigned long long int b = -1 ;
    unsigned long long int c = 0 ;
    unsigned long long int i = 1 ;


    //  a = a[0]

    /*
        
        b = a[2]

        if(a==b){
            break
        }
        else{
            a = b; a == a[2]            
        }
    
    */
    do{        
        b = (a * P + Q) % MOD;

        if( b==a ){
            flag = false;
        }
        else{
            
            a = b;
            c++;
        }
        i++;        
    }while (i<N && flag);
    cout<<c+1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    solve();
}
/* problem link: */

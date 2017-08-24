/// Bis-Millah-ir Rahman-ir Rahim

#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef unsigned long long ULL; // printf("%llu",ans);
typedef pair<int,int>PII;
typedef pair<int,LL>PIL;

const double eps = 1e-9;
const int inf = 2147483647;//1<<30;///1073741824   1e9
const LL INF = 2e18;
//const LL infL = 5223372036854775807;//ULL(1)<<62;///4611686018427387904   4*1e18
//const ULL infUL = 18446744073709551615; //ULL(1)<<63;

#define fast() ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define per(i) cout<<fixed<<setprecision(i)

#define FI freopen ("input.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)
#define mset(ara,val) memset(ara, val , sizeof(ara))

#define _rep(i,a,n,x) for(i = a; i <= n; i+=x)
#define rep(i,n) _rep(i,0,n-1,1)
#define rep1(i,n) _rep(i,1,n-1,1)
#define For(i,a,n) for(i = a;i<=n;i++)

#define SD( a ) scanf("%d",&a)
#define SD2( a,b ) SD(a),SD(b)
#define SD3( a,b,c) SD(a),SD(b),SD(c)
#define SD4( a,b,c,d) SD2(a,b),SD2(c,d)

#define SL( a ) scanf("%lld",&a)
#define SL2(a,b) SL(a),SL(b)
#define SL3(a,b,c) SL2(a,b),SL(c)

#define SI( a ) scanf("%I64d",&a)
#define SS( a ) scanf("%s",a)

#define SF( a ) scanf("%lf",&a)
#define SF2( a,b ) SF(a),SF(b)
#define SF3(a,b,c) SF(a),SF(b),SF(c)

#define SLF( a ) scanf("%Lf",&a)

#define PF( a ) printf("%d  ",a)
#define PFL( a ) printf("%d\n",a)

#define pr1(x) cout << x << endl
#define pr2(x,y) cout << x << ' ' << y << endl
#define pr3(x,y,z) cout << x << ' ' << y << ' ' << z << endl
#define pr4(a,b,c,d) cout << a << ' ' << b << ' ' << c << ' ' << d << endl

#define ALL(a) a.begin(),a.end()
#define sz(a) ((int)a.size())
#define max3(a,b,c) max(a, max(b,c))
#define min3(a,b,c) min(a, min(b,c))

#define MX 1000006
#define PI acos(-1)

#define pb push_back
#define ff first
#define ss second
/*
int floatCompare(double a, double b)
{
    if(fabs(a-b)<eps)return 0;//equal
    else if(a>b+eps)return 1; // a is greater than b
    else if(a+eps<b)return -1; // b is greater than a
}
*/
/*int gcd(int a, int b){
    if(b == 0)return a;
    return gcd(b, a%b);
}*/

int main()
{

    int n,m;
    while(SD2(m,n))
    {
        if(m==1 && n==1)break;

        while(m!=n)
        {
            if(m<n)
            {
                printf("L");
                n-=m;
            }else{

              printf("R");
              m-=n;
            }
        }
        printf("\n");



    }


    return 0;
}

























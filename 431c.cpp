#include <iostream>
using namespace std;
long long n,k,d,dp[10][10];
const long long mod=1e9+7;
int main(){
    cin>>n>>k>>d;

    dp[0][0]=1;

    for(int i=1;i<=n;++i)

        for(int j=1;j<=k&&j<=i;++j)

            if(j<d)
            {
            	dp[i][0] = (dp[i][0] + dp[i-j][0])%mod;
            	dp[i][1] = (dp[i][1] + dp[i-j][1])%mod;
            }
                
            else
                dp[i][1] = (dp[i][1] + dp[i-j][0] + dp[i-j][1])%mod;

    cout<<dp[n][1] << endl;

    for (int i = 0; i < 10; i++)
    	cout << dp[i][i] << " " ;
    cout << endl;

    cout << " >>>>>> " << endl;

    cout << dp[0][0] << endl;
    cout << dp[1][1] << endl;
    cout << "<<>>>>>>D><D" << endl;
   

}
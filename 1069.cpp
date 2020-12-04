#include<iostream>

using namespace std;

int main(void)
{
    int t,n,m,i=1;

    cin>>t;

    while(t--){
        int res = 0;
        cin>>n>>m;

        res = abs(n-m)*4+n*4+19;

        cout<<"Case "<<i<<": "<<res<<endl;
        i++;
    }
}
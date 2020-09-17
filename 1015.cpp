#include<iostream>

using namespace std;

int main()
{
    int test,i=1;
    cin>>test;

    while(test--){
        int num,acct,sum=0;
        cin>>num;

        while(num--){
            cin>>acct;
            if(acct>0)
                sum+=acct;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        i++;
    }
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int test,i=1;
    cin>>test;

    while(test--){
        int num,acct,sum=0;
        cin>>num;
        string str;
        cout<<"Case "<<i<<":"<<endl;
        while(num--){
            cin>>str;
            if("donate"==str){
                cin>>acct;
                sum+=acct;
            }
            else
                cout<<sum<<endl;
        }
        i++;
    }
    return 0;
}

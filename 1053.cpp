#include<iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;

    int a,b,c,i=1;
    while(test--){
        cin>>a>>b>>c;

        if(((a*a)+(b*b)==(c*c)) || ((b*b)+(c*c)==(a*a)) || ((a*a)+(c*c)==(b*b)))
            cout<<"Case "<<i<<": yes"<<endl;
        else
            cout<<"Case "<<i<<": no"<<endl;
        i++;
    }
    return 0;
}

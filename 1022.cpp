#include<iostream>
#include<iomanip>

 using namespace std;

 int main()
 {
    int t;
    const double Pi = 3.141592653589793238;
    cin>>t;
    int i=1;
    double res =0.0,r;
    while(t--){
        cin>>r;
        res = ((4*r*r) - (Pi*r*r));
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(2)<<res<<endl;
        i++;
    }
    return 0;
 }

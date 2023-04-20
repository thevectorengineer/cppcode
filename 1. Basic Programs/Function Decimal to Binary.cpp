#include <iostream>
using namespace std;
int decToBin(int dec){
    int p=1;
    int bin=0;
    while(p<=dec){
        p=p*2;
    }
    p=p/2;
    while(p>0){
        int rem=dec/p;
        dec=dec-rem*p;
        p=p/2;
        bin=bin*10+rem;
    }
    return bin;
}
int main(){
    int dec;
    cin>>dec;
    cout<<decToBin(dec)<<endl;
    return 0;
}

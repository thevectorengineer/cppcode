#include <iostream>
using namespace std;
int decToOct(int dec){
    int p=1;
    int oct=0;
    while(p<=dec){
        p=p*8;
    }
    p=p/8;
    while(p>0){
        int rem=dec/p;
        dec=dec-rem*p;
        p=p/8;
        oct=oct*10+rem;
    }
    return oct;
}
int main(){
    int dec;
    cin>>dec;
    cout<<decToOct(dec)<<endl;
    return 0;
}

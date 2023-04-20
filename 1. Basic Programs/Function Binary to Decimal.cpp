#include <iostream>
using namespace std;
int binToDec(int bin){
    int Dec=0;
    int p=1;
    while(bin>0){
        int rem=bin%10;
        Dec=Dec+rem*p;
        p=p*2;
        bin=bin/10;
    }
    return Dec;
}
int main(){
    int bin;
    cin>>bin;
    cout<<binToDec(bin)<<endl;
    return 0;
}

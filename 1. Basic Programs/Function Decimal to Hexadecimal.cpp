#include <iostream>
using namespace std;
string decToHexadecimal(int dec){
    int p=1;
    string hd="";
    while(p<=dec){
        p=p*16;
    }
    p=p/16;
    while(p>0){
        int rem=dec/p;
        dec=dec-rem*p;
        p=p/16;
        
        if(rem<=9){
            hd=hd+ to_string(rem);
        }
        else{
            char c= 'A'+rem-10;
            hd.push_back(c);
        }
        return hd;
    }
}
int main(){
    int dec;
    cin>>dec;
    cout<<decToHexadecimal(dec)<<endl;
    return 0;
}

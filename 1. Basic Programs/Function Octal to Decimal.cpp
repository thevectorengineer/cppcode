#include <iostream>
using namespace std;
int octToDec(int oct){
    int Dec=0;
    int p=1;
    while(oct>0){
        int rem=oct%10;
        Dec=Dec+rem*p;
        p=p*8;
        oct=oct/10;
    }
    return Dec;
}
int main(){
    int oct;
    cin>>oct;
    cout<<octToDec(oct)<<endl;
    return 0;
}

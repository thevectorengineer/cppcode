#include <bits/stdc++.h>
using namespace std;
int hexadecimalToDec(string hd){
    int Dec=0;
    int p=1;
    int s=hd.size();
    for(int i=s-1; i>=0; i--){
        if(hd[i]>='0' && hd[i]<='9'){
            Dec=Dec+p*(hd[i]-'0');
        }
        else if(hd[i]>='A' && hd[i]<='F'){
            Dec=Dec+p*(hd[i]-'A'+10);
        }
        p*=16;
    }
    
    return Dec;
}
int main(){
    string hd;
    cin>>hd;
    cout<<hexadecimalToDec(hd)<<endl;
    return 0;
}

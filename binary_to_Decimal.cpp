#include<iostream>
using namespace std;

int main(){
    string bin;
    cout<<"Enter Binary Number: ";
    cin>>bin;

    int dec=0;
    int power=1;
    bool valid=true;

    for(int i=bin.length()-1;i>=0;i--){
        if(bin[i]!='0' && bin[i]!='1'){
            valid=false;
        }

        dec+=((bin[i]-'0')*power);
        power*=2;
    }

    if(valid){
        cout<<dec;
    }else{
        cout<<"Invalid Binary Number";
    }

    return 0;
}
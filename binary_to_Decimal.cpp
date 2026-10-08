#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int bin;
    cout<<"Enter Binary Number: ";
    cin>>bin;
    int n=bin;
    int dec=0;
    bool valid=true;

    for(int i=0;n>0;i++){
        int a=n%10;

        if(a>1){
            valid=false;
            break;
        }

        dec += (a*int(pow(2,i)));
        n/=10;
    }

    if(valid==true){
        cout<<dec;
    }else{
        cout<<"Invalid Binary Number";
    }

    return 0;
}
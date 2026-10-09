#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number : ";
    cin>>a;
    int temp=a;
    int base;
    cout<<"Enter to which base you want to convert : ";
    cin>>base;
    if(base<=36 && base>=2){
        string bin;
        int b;
        char digit;
        if(temp==0){
            bin="0";
        }else{
            for(int i=0;temp!=0;i++){
                b=temp%base;
                temp/=base;
                if(b<0){
                    b=-b;
                }
                if(b>=0 && b<=9){
                    digit = b+'0';
                }else{
                    digit = b+'A'-10;
                }
            bin+=digit;
            }
        if(a<0){
            bin+='-';
        }
        reverse(bin.begin(),bin.end());
        }
        cout<<bin;
    }
    else{
        cout<<"Invalid Base";
    }
    return 0;
}
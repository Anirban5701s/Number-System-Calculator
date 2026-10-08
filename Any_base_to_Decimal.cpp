#include<iostream>
#include<cctype>
using namespace std;
int main(){
    int base;
    cout<<"Enter base: ";
    cin>>base;
    if(base<2||base>36){
        cout<<"Invalid Base";
    }else{
        string bin;
        cout<<"Enter Number: ";
        cin>>bin;
        int dec=0;
        int power =1;
        bool valid=true;
        for(int i=bin.length()-1;i>=0;i--){
            bin[i]=toupper(bin[i]);
            if(bin[i]-'0'>=0 && bin[i]-'0'<=9){
                if(bin[i]-'0'>=base){
                    valid=false;
                    break;
                }
            }else if(bin[i]-'A'+10>=10 && bin[i]-'A'+10<=35){
                if(bin[i]-'A'+10>=base){
                    valid=false;
                    break;
                }
            }else{
                valid=false;
                break;
            }
            if(bin[i]-'0' >=0 && bin[i]-'0'<=9){
                dec+=((bin[i]-'0')*power);
                power*=base;
            }else if(bin[i]-'A'>=0 && bin[i]-'A'<=25){
                dec+=(bin[i]-'A'+10)*power;
                power*=base;
            }
        }
        if(valid==true){
            cout<<dec;
        }else{
            cout<<"Invalid Number";
        }
    }
    return 0;
}
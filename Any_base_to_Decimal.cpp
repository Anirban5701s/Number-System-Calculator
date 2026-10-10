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
        string temp=bin;
        long  long int dec=0;
        long long int power =1;
        bool valid=true;
        if(!temp.empty() && (temp[0]=='+' || temp[0]=='-')){
            temp.erase(0,1);
        }
        if  (temp.empty()){
            cout<<"Invalid Number";
        }
        else{
            for(int i=temp.length()-1;i>=0;i--){
                temp[i]=toupper(temp[i]);
                if(temp[i]-'0'>=0 && temp[i]-'0'<=9){
                    if(temp[i]-'0'>=base){
                        valid=false;
                        break;
                    }
                }else if(temp[i]-'A'+10>=10 && temp[i]-'A'+10<=35){
                    if(temp[i]-'A'+10>=base){
                        valid=false;
                        break;
                    }
                }else{
                    valid=false;
                    break;
                }
                if(temp[i]-'0' >=0 && temp[i]-'0'<=9){
                    dec+=((temp[i]-'0')*power);
                    power*=base;
                }else if(temp[i]-'A'>=0 && temp[i]-'A'<=25){
                    dec+=(temp[i]-'A'+10)*power;
                    power*=base;
                }
            }
            if(bin[0]=='-'){
                dec=-dec;
            }
            if(valid==true){
                cout<<dec;
            }else{
                cout<<"Invalid Number";
            }
        }
    }
    return 0;
}
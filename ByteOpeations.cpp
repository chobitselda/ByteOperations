#include<iostream>
using namespace std;

void PrintByteSequence(char a){
    for(int j = 7; j>=0 ; j--){
        if(j!=0){
            cout<<((a>>j)&(0x01));
        }
        else{
            cout<<(a&(0x01))<<endl;
        }                        
    }
}

void PrintByteReverse(char a){
    for(int i = 0; i<=7 ; i++){
        cout<<((a>>i)&(0x01));
    }
    cout<<endl;
}

int main(){
    PrintByteSequence(128);
    PrintByteReverse(128);
    system("pause");
    return 0;
}
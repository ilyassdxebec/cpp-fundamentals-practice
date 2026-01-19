#include<iostream>
using namespace std;
enum enPrime{Prime,NotPrime};
int TakeNumber(string message){
    int number;
    cout<<message;
    cin>>number;
    return number;
}
enPrime CheckPrimeNumber(){
    int number = TakeNumber("\nPlease Enter a number: ");
    for(int i=1;i<number;i++){
       
    }
}
int main(){

}
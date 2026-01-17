#include<iostream>
using namespace std;
int GetNumber(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    return N;
}
 int FactorialofNumber(int N){
    int factorial=1;
    for(int i=N;i>=1;i--){
      factorial*=i;
    }
    return factorial;
 }
 void PrintFactorialOfNumber(int N){
    cout<<"\nFactorial of the number: "<<N<<" is "<<FactorialofNumber(N);
 }
 int main(){
    int N=GetNumber();
    PrintFactorialOfNumber(N);

 }
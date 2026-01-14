#include<iostream>
using namespace std;
float TakeInput(){
    float N;
    cout<<"Please Enter a number: ";
    cin>>N;
    return N;
}
 float Operation(float N){

  float num =N/2;
   return num;
 }
 void Result(float num){
    cout<<"\nYour result is: "<<num;
 }
int main(){
   Result(Operation(TakeInput()));
}
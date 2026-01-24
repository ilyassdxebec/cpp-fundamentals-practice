#include<iostream>

using namespace std;

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}
void PrintInReversedOrder(int number){
    int temp;
   while(number>0){
     temp = number%10;
     cout<<endl<<temp;
     number /= 10;
   }
}
int main(){
    PrintInReversedOrder(ReadPositiveNumber("Please enter a number: "));
}
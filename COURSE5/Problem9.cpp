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

int DigitFrequency(int number,short digit){
    int frequency = 0,remainder;
    while(number>0){
     remainder = number%10;
     if(remainder==digit){
        frequency++;
     }
     number =number/10;
    }
    return frequency;
}
void PrintDigitFrequencies(){

}
int main(){
 int number = ReadPositiveNumber("Please enter a number: ");
 
}
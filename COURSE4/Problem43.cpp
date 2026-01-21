#include<iostream>
using namespace std;

struct stTaskDuration{
    int NumberOfDays,
    NumberOfHours,
    NumberOfMinutes,
    NumberOfSeconds;
};

float ReadPositiveNumber(string message){
    float number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}
stTaskDuration SecondsToTaskDuratoin(int Seconds){
 stTaskDuration TaskDuration;
 int remainder = 0;

 const int SecondsInDays = 60*60*24;
 const int SecondsInHours = 60*60;
 const int SecondsInMinutes = 60;

 TaskDuration.NumberOfDays =(Seconds/SecondsInDays);
}
int main(){
  int Seconds = ReadPositiveNumber("Please enter number of Seconds: ");
}
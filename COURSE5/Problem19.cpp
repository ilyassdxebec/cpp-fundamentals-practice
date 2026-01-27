#include<iostream>
using namespace std;
 int RandomNumber(int from,int to){
    int RandomNum = rand()%(to-from+1)+from;
    return RandomNum;
 }
int main(){
    //this srand is important one time to be declared in the main for the cpp imbedded rand() function to work,don't care how
 srand((unsigned)time(NULL));

 cout<<RandomNumber(0,5);
}
#include<iostream>
using namespace std;

namespace MyLib
{
 bool CheckNumberSign(int Number)
 {
  return Number>0;
 }
 
int ReadNumber(string message)
{
    int number;
        cout << endl << message;
        cin >> number;
        cout<<endl;
    return number;
}
}
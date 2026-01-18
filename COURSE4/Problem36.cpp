#include<iostream>
using namespace std;
    enum enOpType{Add='+',Subtract='-',Multiply='*',Devide='/'};

    float TakeNumber(string message){
        float number;
        cout<<message;
        cin>>number;
        return number;
    }
    enOpType ReadOperationType(){
        char OpType;
        cout<<"\nPlease enter operation type: ";
        cin>>OpType;
        return (enOpType)OpType;
    }
    float OperationOnTwoNumbers(float number1,float number2,enOpType OT){
        switch (OT)
        {
           case Add:
           return number1+number2;
           case Subtract:
           return number1-number2;
           case Multiply:
           return number1*number2;
           case Devide:
             if(number2==0){
                cout<<"\nCan't Devide By 0!";
                return 0;
             }else return number1/number2;
             default:
               return number1+number2;
        }
    }

int main(){
   float Number1 = TakeNumber("Please Enter First Number: ");
   cout<<endl;
   float Number2 = TakeNumber("Please Enter Second Number: ");
   enOpType OpType = ReadOperationType();
   cout<<"\n "<<Number1<<" "<<(char)OpType<<" "<<Number2<<" is "<<OperationOnTwoNumbers(Number1,Number2,OpType);
}
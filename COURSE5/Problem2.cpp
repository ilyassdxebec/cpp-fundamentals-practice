#include<iostream>
using namespace std;

enum enPrime{Prime,NotPrime};

enPrime CheckNumberType(int num){
   int mid=num/2;
   for(int i=2;i<=mid;i++){
      if(num%i==0){
        return enPrime::NotPrime;
      }
   }
   return enPrime::Prime;
}

int main(){

}
#include<iostream>
using namespace std;

    void PrintTableHeader(){
        cout<<"\t\t\tMultiplication Table From 1 to 10\n"<<endl;
        cout<<"\t";
        for(int i=1;i<=10;i++){
         cout<<i<<"\t";
        }
        cout<<"\n___________________________________________________________________________________\n";
    }
    string ColumnSeperator(int i){
       if(i<10) return "  |";
       else return " |";
    }
    
    void PrintTable(){
        PrintTableHeader();
        for(int i=1;i<=10;i++){
            cout<<i<<ColumnSeperator(i);
            for(int j=1;j<=10;j++){
             cout<<"\t"<<i*j;
            }
            cout<<"\n";
        }
    }
int main(){
 PrintTable();
}
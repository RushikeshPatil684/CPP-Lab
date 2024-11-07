#include<iostream>
using namespace std;

int main(){
  
  double numerator, denominator, divide;
  
  cout<<"Enter numerator: \n";
  cin>>numerator;
  
  cout<<"Enter denomeinator: \n";
  cin>>denominator;
  
  try{
    
    //throw an exception if denominator is 0
    
    if(denominator == 0)
    throw 0;
    
    //Not executed if denominator is 0
    
    divide = numerator / denominator;
    cout<<numerator<<"/"<<denominator<<"="<<divide<<endl;
  
  }
  catch(int num_exception){
    cout<<"Error: Connot divide by "<<num_exception<<endl;
    
  }
  return 0;
}
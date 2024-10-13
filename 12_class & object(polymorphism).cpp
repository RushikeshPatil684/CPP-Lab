#include<iostream>
using namespace std;

//Base class 
class Shape{
  public:
  void shape(){
    cout<<"This is a shape"<<endl;
  }
};

//Derived class Polygaon(inherits from shape)
class Polygaon : public  Shape{
  public:
  void polygaon(){
    cout<<"Polygaon is a shape"<<endl;
  }
};

//Derived class Rectangle and Triangle(inherits from Polygaon)
class Rectangle : public Polygaon{
  public: 
  void rectangle(){
    cout<<"Rectangle is a Polygaon"<<endl;
  }
};

class Triangle : public Polygaon{
  public:
  void triangle(){
    cout<<"Triangle is Polygaon"<<endl;
  }
};

//Derived class square(inherits from Rectangle)
class Square : public Rectangle{
  public:
  void square(){
    cout<<"square is a rectangle"<<endl;
  }
};

int main(){
  
  Square S1;
  Triangle T1;
  
  S1.square();
  S1.rectangle();
  S1.polygaon();
  S1.shape();
  T1.triangle();
  
  return 0;
  
}
#include <iostream>
#include <algorithm>
#include <vector>
#pragma once


using namespace std;
class Token{
public: 
char kind;
double value; 

public:
Token(char k):kind(k),value(0.0){  
 



}
Token(char k,double v):kind(k),value(v){



  
}

};
#include <iostream>
#include <algorithm>
#include <vector>
#pragma once


using namespace std;
class Token{
public: 
char kind;//clasificacion de que se hara : 8 para numero
double value; //solo valor
//divisibilidad por tipo y valor por token
public:
Token(char k):kind(k),value(0.0){ //inicializador 
  /*otras forma de inicializacion kind=k, value=0.0 */


  
}
Token(char k,double v):kind(k),value(v){

  
}

};
/*
class Person{
private:
   unsigned int edad;
   int cosas[3];
public:

  unsigned int getEdad(){return edad;}

void setEdad(int e){ /*si le pusieramos unsigned permitira cosas que no querremos
  if (edad < 0)
   throw "no hay edades negativas";
  if(edad >100)
    throw "viejito sabroso";
  edad=e;
 }

//explorar con throw el codigo de werewolf y buscar el manejo adeucado de errores para el proyecto
void setInArray(int index,int algo){
  if(index > 2){
  //throw "no puedes tener tanto objetos";
    runtime_error("esto es un error");
   //return;
    //ver el estandar iso de c++
    
    }
  cosas[index]=algo;
  }
};

int main() {

  /*try{
     vector<int> a;
   // a.resize(a.max_size()+1);
    Person b;
    b.setInArray(4,1);
    //reacomoda el tamaño del arrelgo osea vector mas uno
  }
    catch(const runtime_error& e){
      cout << "expeption estandar en la asignacion de memoria "<<e.what() <<endl;
    }
    catch(bad_alloc& e){
      cout << "expeption controlada en la asignacion de memoria "<<e.what() <<endl;
      
    }
    catch(exception& e){
      cout << "expeption estandar en la asignacion de memoria "<<e.what() <<endl;
    }
  
  catch (const char* msg){
    cout << msg << endl;
  }
vector <Token> tok;
  while(cin){//que no haya error al leer
    Token t = get_token();
     tok.push_back(t);
    }
  
  }








  
}*/

    
    //tipos de error de como debugear en c++ teach your self
// nota importate que todo lo cacha con catch(...){} 
//arbol..... binario
//palabras reservadas o tipos donde se creara una clase para el programa de CONJUNTOS

/*Token get_token(){
  char ch;
  cin >> ch; //note that >> skips whitespace(space, newline, tab, etc.)
  switch(ch){
    //not yet case  ';' //for "print"
    //not yet case  'q' //for "print"
    case '(': case ')': case '+': case '-': case '*': case '/':
    return Token(ch);  //let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5' : case '6': case '7': case '8': case '9':
      {
        cin.putback(ch);
        double val;      //put digit back into the input stream
        cin >> val;      //read a floating-point number
        return Token('8',val);     //let '8' represent "a number"

      }
    default:
    error("bad token");
  }
}
*/
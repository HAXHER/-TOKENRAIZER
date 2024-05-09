#include "Token_stream.h"
#include "std_lib_facilities.h"

void Token_stream::putback(Token t){

  
  if(full) 
    error("putback() into a full buffer");
  buffer = t;
  full = true;
}

Token Token_stream::get(){
  if(full){
    full = false;
    return buffer;
  }
  char ch;
  cin >> ch; //note that >> skips whitespace(space, newline, tab, etc.)
  switch(ch){
     case  ';': //for "print"
     case  'q':  //for "quit"
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
  return 0; //prueba
}

#include "std_lib_facilities.h"
#include "TOKEN.h"
#include "Token_stream.h"

Token_stream ts;

double expression();


double primary(){
  Token t = ts.get();
  switch(t.kind)
    {
      case '(':
        {
          double d = expression();
        t = ts.get();
        if(t.kind != ')') error("')' expected");  
      //if(t.kind != ')') {error("')' expected");  }
      return d;
          break;
    }
      case '8':
      return t.value;
      
      default:
      error("primary expected");///???????????
        return 0;
        //???????
     break;
  }
  
}

double term(){
  double left = primary();
  Token t=ts.get(); //pila
  while(true){
  switch(t.kind){
    case '*':
       left *= primary();
    t = ts.get();
    break;
    case '/':
      {
       double d = primary();
      if(d==0)
      {
        error("divide by zero");  
      }
      
      left /=d;
    t = ts.get();
  }
    break;
    
   /* case '%':
       left %= primary();
    t = get_token();
    break;*/
    
    default:
      ts.putback(t);
    return left;
    break;
  }
 }
}

double expression(){
  double left = term();
  Token t = ts.get();
  while(true){
  switch(t.kind)
    {
      case '+':	
       left += term();
        t = ts.get();
      break;
      case '-':	
     left -= term();
         t = ts.get();
      break;
     default:
       ts.putback(t);
      return left;
      break;
    }
  }
}


int main(){
  try{
   
    double val;
    while(cin){
      Token t =ts.get();
      if (t.kind == 'q') break;
      if(t.kind == ';')
        cout << "=" << val << endl;
      else
        ts.putback(t);
         val= expression();
    }
  }
    catch (exception& e){
       cerr << e.what() <<endl;
      return 1;
    }
  catch(...){
    cerr << "ni yo que que paso " << endl;
    return 2;
  }
}
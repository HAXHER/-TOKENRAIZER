#include "std_lib_facilities.h"
#include "TOKEN.h"

class Token_stream{
  public:
  Token get();
void putback(Token t);
  private:
  bool full { false};
  Token buffer{0};

};
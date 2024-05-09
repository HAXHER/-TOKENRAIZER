  #pragma once
  #include <iostream>
  #include <iomanip>
  #include <sstream>
  #include <fstream>
  #include <cmath>
  #include <cstdlib>
  #include <string>
  #include <vector>
  #include <algorithm>
  #include <list>
  #include <forward_list>
  #include <unordered_map>
  #include <array>
  #include <regex>
  #include <random>
  #include <stdexcept>
  
  using namespace std;
  //eror()simply disguise throws:
  inline void error(const string& s)
  {
    throw runtime_error(s);
  }
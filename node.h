#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class node{
 public:
  node();
  ~node();
  void setvalue(student*);
  student*getvalue();
  void setnext(node*);
  node*getnext();
 private:
  student* studentptr;
  node* next;
};
#endif

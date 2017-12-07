#include "node.h"
node::node(){
  next = NULL;
}
node::~node(){
  delete studentptr;
  next = NULL;
}
void node::setvalue(student* newstudent){
  studentptr = newstudent;
}
student* node::getvalue(){
  return studentptr;
}
void node::setnext(node* newnext){
  next = newnext;
}
node* node::getnext(){
  return next;
}

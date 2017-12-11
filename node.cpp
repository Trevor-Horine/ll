/*this is the node class
 *Trevor Horine
 *12/11/2017
 */
#include "node.h"
node::node(){
  next = NULL;
}
//destructor
node::~node(){
  delete studentptr;
  next = NULL;
}
//method to set value
void node::setvalue(student* newstudent){
  studentptr = newstudent;
}
//method to get value
student* node::getvalue(){
  return studentptr;
}
//mehtod to set node
void node::setnext(node* newnext){
  next = newnext;
}
//mehtod to get next
node* node::getnext(){
  return next;
}

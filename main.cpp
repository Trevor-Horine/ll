/*this is a simple linked list program
 *Trevor Horine
 *12/11/2017
 */

#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

student* getin();
void add(student* newvalue);
void print(node* next);

node* head = NULL;
//main method
int main(){
  add(getin());
  print(head);
}
//read in info
student* getin(){
  char* first = new char[100];
  char* last = new char[100];
  int id;
  float gpa;
  cout << "What is the students first name?" << endl;
  cin >> first;
  cout << "What is the students last name?" << endl;
  cin >> last;
  cout << "what is the students id number?" << endl;
  cin >> id;
  cout << "What is the students gpa?" << endl;
  cin >> gpa;
  student* s = new student(first, last, id, gpa);
  return s;
}
//add node to ll
void add(student* newvalue){
  node* current = head;
  if(current == NULL){
    head = new node();
    head -> setvalue(newvalue);
  }
  else{
    while(current -> getnext() != NULL){
      current = current -> getnext();
    }
    current -> setnext(new node());
    current -> getnext() -> setvalue(newvalue);
  }
}
//print ll
void print(node* next){
  if(next == head){
    cout << "Students: " <<endl;
  }
  if(next != NULL){
    cout <<"Name: " << next -> getvalue() -> getnamef() << " " << next -> getvalue() -> getnamel() << endl;
    print(next -> getnext());
  }
}

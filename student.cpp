#include "student.h"
student::student(char* newnamef, char* newnamel, int newid, float newgpa){
  namef = newnamef;
  namel = newnamel;
  id = newid;
  gpa = newgpa;
}
char* student::getnamef(){
  return namef;
}
char* student::getnamel(){
  return namel;
}
int student::getid(){
  return id;
}
float student::getgpa(){
  return gpa;
}

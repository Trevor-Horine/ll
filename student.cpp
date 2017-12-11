/* this is the student class
 *Trevor Horine
 *12/11/2017
 */

#include "student.h"
student::student(char* newnamef, char* newnamel, int newid, float newgpa){
  namef = newnamef;
  namel = newnamel;
  id = newid;
  gpa = newgpa;
}
//method to get first name
char* student::getnamef(){
  return namef;
}
//method tp get last name
char* student::getnamel(){
  return namel;
}
//mehtod to get id
int student::getid(){
  return id;
}
//mehtod to get gpa
float student::getgpa(){
  return gpa;
}

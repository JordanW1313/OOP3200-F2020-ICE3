/**
 * Project OOP3200-F2020-ICE3
 * @author Jordan Wriker
 * @version 1
 */


#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"


class Student: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
void Student(string first_name, string last_name, float age, string student_id);
    
string getStudentID();
    
/**
 * @param value
 */
void setStudentID(string value);
    
void Studies();

    
void Studies();
    
string ToString();
private: 
    string m_studentID;
};

#endif //_STUDENT_H
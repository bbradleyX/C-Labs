//
// Created by Bobo on 12/3/2018.
//

#ifndef INC_220_DJ_PROJECT_DJTESTLIB_H
#define INC_220_DJ_PROJECT_DJTESTLIB_H
#ifndef COMP220LAB_TESTLIBRARY_H
#define COMP220LAB_TESTLIBRARY_H


void printAssertEquals(int expected, int actual);


void printAssertEquals(bool expected, bool actual);

/
void printAssertEquals(std::string expected, std::string actual);


void printAssertEquals(int* a1, int *a2, int size);


void printAssertArrayEqual(int* expected, int* actual, int size);

#endif //INC_220_DJ_PROJECT_DJTESTLIB_H

/*
 * A simple Integer Stack. It is the corrected version
 * of https://www.studytonight.com/data-structures/stack-data-structure
 */

#include "intstack.h"

Intstack::Intstack() {
    /* the 'this' designation is optional. use it where there
     * is ambiguity or just to be complete and precise. here it
     * is used just to show it's usage.
     */
    this->top = -1;
}

Intstack::~Intstack() {
    /*
     * there is nothing to do to clean up this object, so this is blank
     */
}

bool Intstack::push(int i) {
    /* this is using two returns. okay here because
     * the function is simple and it's a boolean return
     */
    if(top >= STACKSIZE-1)  {
        return false;
    } else {
        stack[++top] = i;
        return true;
    }
}

int Intstack::pop() {
    int popval = 0; //this init is useless but good practice

    if(top < 0) {
        //throw an int because we cannot return one
        throw -1;
    } else {
        popval = stack[top--];
    }

    return popval;
}

int Intstack::peek() {
    int peekval = 0; //this init is useless but good practice

    if(top < 0) {
        //throw an int because we cannot return one
        throw -1;
    } else {
        peekval = stack[top];
    }

    return peekval;
}

bool Intstack::isEmpty() {
    /* this is using two returns. okay here because
     * the function is simple and it's a boolean return
     */
    if(top == -1){
        return true;
    } else {
        return false;
    }
}

void Intstack::dumpStack(){
    // this is a programmer debug routine
    // DO NOT LEAVE THIS IN PRODUCTION CODE
    std::cout << "dumping whole stack" << std::endl;
    for(int i=0; i<=top; i++){
        std::cout << stack[i] << std::endl;
    }
    std::cout << std::endl;
}

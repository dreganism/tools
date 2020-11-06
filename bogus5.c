#include <stdio.h>

int main(void) {
    
    /*
    This is the basic comment format in C
    int %d
    long int %ld
    long long int %ld
    short int %hd
    unsigned %hu
    float %f
    double %lf
    long double %Lf
    char %c
    string %s
    */
    
    int age;
    int salary;
    float battingAverage;
    
    age=52.4;
    salary= 500000;
    battingAverage= .382;
    
    printf("I am %d years old and I earn %d dollars per year. \nMy batting average is %f.", age, salary, battingAverage);
    
    //getch();
    
}
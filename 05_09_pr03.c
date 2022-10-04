//write a program to calculate force on a body of mass m.

#include<stdio.h>
float force(float mass);

int main(){
 
 float m;
 printf("Enter the value of mass in kgs :\n");
 scanf("%f",&m);
printf("The value of force in Newton is :%.02f\n",force(m));
    

    return 0;
}
float force(float mass){
    float result = mass*9.8;
    return result;
}
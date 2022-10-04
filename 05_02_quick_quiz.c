    /*Write a program with three different functions
    main() should call all of these in order 1-->2-->3*/

#include<stdio.h>
         void goodMorning();
         void goodAfternoon();
         void goodNight();
int main(){
         goodMorning();
         goodAfternoon();
         goodNight();
    
    return 0;
}

     void goodMorning(){
     printf("Good Morning Umesh\n");
 }
     void goodAfternoon(){
         printf("Good Afternoon Umesh\n");
     }
     void goodNight(){
         printf("Good Night Umesh\n");
     }
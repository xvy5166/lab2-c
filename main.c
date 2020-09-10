// Author: Xinyi Yang xvy5166@psu.edu
//Collaborator: Yiqian Li yvl5838@psu.edu
//Collaborator: Harsh Ladani hal5240@psu.edu
//Section: 4
//Breakout: 14


#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *Grade = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(Grade);
  if (grade >= 93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if(grade >= 90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }

  else if (grade >=87){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (grade >=83){
    printf("Your letter grade for CMPSC 131 is B.\n");

  }
  else if (grade >=80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");

  }
  else if (grade >=77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");

  }

  else if (grade >=70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");

  }

  else if (grade >=60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else{
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
long sum(int n){	
	//Write your statements here
   int s = 0;
   for (int i = 1; i <= n; ++i) {
    s += i * i;
   }
   return s;
   
   
	//End your statements   
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n;
  long r;
  printf("Enter n = "); scanf("%d",&n);   
  r = sum(n);
  printf("\nOUTPUT:\n");
  printf("%ld",r);
  printf("\n");
  system ("pause");
  return(0);
}
//======================================================================

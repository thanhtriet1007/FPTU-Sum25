#include <stdio.h>
#include <stdlib.h>
void printAverage(int n){
	//Write your statements here
  int sum = n * (n + 1) / 2;
  printf("%.2lf", sum * 1.0 / (n * 1.0));
	//End your statements 	
}

/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{  
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int n; 
  printf("Enter n = "); scanf("%d",&n);   
  printf("\nOUTPUT:\n");
  printAverage(n);
  printf("\n");
  system ("pause");
  return(0);  
}
//============================================================ 

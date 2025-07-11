#include <stdio.h>
#include <stdlib.h>
int gcd(int n,int m){
	//Begin your statements here
	//............
  int mi = (n < m) ? n : m;
  for (int i = mi; i >= 1; --i) {
    if (n % i == 0 && m % i == 0) {
      return i;
    }
  }
	//End your statements
}
//--------------------------------------------------------
int lcm(int n,int m){
	//Begin your statements here
	//............
  int ma = (n < m) ? m : n;
  for (int i = ma; i <= n * m; ++i) {
    if (i % n == 0 && i % m == 0) return i;
  }
	//End your statements
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
  system("cls");
  printf("\nTEST Q4 (3 marks):\n");
  int n,m, l, g; 
  printf("Enter n = "); scanf("%d",&n);   
  printf("Enter m = "); scanf("%d",&m);   
  g = gcd(n,m);
  l = lcm(n,m);
  printf("\nOUTPUT:\n"); 
  printf("%d;%d",g,l);
  printf("\n");
  system ("pause");
  return(0);  
}
//============================================================ 


#include<stdio.h>
void main()
{
  int num, i=0, x, d;
  char * word_no [2000];
  printf ("Enter an integer value: \n");
  scanf ("%d", &num);
  while (num)
  {
    d = num %10;
    num = num /10;
    switch(d)
    {
      case 0: word_no[i++] = "zero";
      break;
      case 1: word_no[i++] = "one"; 
      break;
      case 2: word_no[i++] = "two"; 
      break;
      case 3: word_no[i++] = "three"; 
      break;
      case 4: word_no [i++] = "four"; 
      break;
      case 5: word_no [i++] = "five"; 
      break;
      case 6: word_no [i++] = "six"; 
      break;
      case 7: word_no [i++] = "seven"; 
      break;
      case 8: word_no [i++] = "eight"; 
      break;
      case 9: word_no[i++] = "nine"; 
      break;
    }
  }
  for(x=i-1; x>=0; x--){
  printf ("%s ",word_no[x]);
  }
}

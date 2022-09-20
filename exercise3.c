// Exercise 3 - functions
#include <stdio.h>

/*
* Function prints n powers of x
*/
void n_powers(double x, int n)
{
  double power = x;
  for (int i = 0; i < n; i++){
    printf("%lf\n",power);
    power *= x;
  }
    
}

/*
* Function prints a triangle of n rows with the character c
*/
void triangle(char c, int n)
{
  // each row has 2*n - 1 characters
  for (int i = 1; i <= n; i++)
  {
    int char_number = 2*n - 1;
    // we have to put a spacebar where no character is to be displayed
    for (int j = 0; j < char_number; j++)
    {
      if (j>=((char_number/2)+i) || j<=((char_number/2)-i))
      {
        printf(" ");
      } else{
        printf("%c",c);
      }
    }
    printf("\n");
  }
  
}

/*
* Function checks how many times a character c is present in the file file
*/
int occurence(FILE *file, char checked_letter)
{
  int current_letter, check = checked_letter, count = 0;

  while ((current_letter = getc(file)) != EOF){
    if (current_letter == checked_letter){
      count++;
    }
  }
  return count;
}

/*
* Function prints file contents to terminal
*/
void print_file(FILE *fr)
{
  char c;
  while ((c = getc(fr)) != EOF){
    putchar(c);
  }
}

/*
* Read a char from user, if it is 'd', read and print integer, if it is 'f', read and print float
*/
void f_or_d(void)
{
  char c = getchar();
  if (c == 'f'){
    double f;
    scanf("%lf",&f);
    printf("%lf",f);
  } else if (c == 'd'){
    int d;
    scanf("%d",&d);
    printf("%d",d);
  } else{
    printf("Error");
  }
  
}

/*
* Main function
*/
int main()
{
  /*
  FILE *inputfile = fopen("./inputfile.txt","r");
  //int how_many = occurence(inputfile,'s');
  //printf("The chosen letter appeared %d times in the file.\n",how_many);
  print_file(inputfile);
  fclose(inputfile);
  */
  f_or_d();
  return 0;
}


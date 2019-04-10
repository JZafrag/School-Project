#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int convertBinaryToDecimal(long long n);

int main ()
{


  char yes[4] = { 'y', 'e', 's', '\0' };
  char no[3] = { 'n', 'o', '\0' };
  int a, b, c;
  c = a + b;




    char sto[10];

    //Functions -------------------------------------------------------------
    int add(int a, int b) {
      printf ("Enter the first number to add\n");
		  scanf ("%d", &a);
      printf("Enter the second number to add\n");
      scanf("%d", &b);
	    c = a + b;
	    printf ("The result is: %d\n", c);
      return c;
    }

    // LOG
    char putPass[9] = {'p', 'u', 't', 's', 'P', 'a', 's', 's', '\0'};
    const char password1[9] = {'7', 'j', 'o', 'h', 'a', 'n', 'a', '7', '\0' };

    const char password2[9] = {'7', 'h', 'e', 'r', 'm', 'e', 's', '7', '\0'};
    //----------------------------------------------------------------------------------
	
	
	
    char decToBinary[12] = {'d', 'e', 'c', 'T', 'o', 'B', 'i', 'n', 'a', 'r', 'y', '\0'};	
    int zero = 0;

    //--------------------------------------------------------------------------------
    char help[5] = {'h', 'e', 'l', 'p', '\0'};
    char add[4] = { 'a', 'd', 'd', '\0' };
    char substract[10] = { 's', 'u', 'b', 's', 't', 'r', 'a', 'c', 't', '\0' };
    char init[5] = { 'i', 'n', 'i', 't', '\0' };
    char stime[6] = { 's', 't', 'i', 'm', 'e', '\0' };
    char clear[6] = {'c', 'l', 'e', 'a', 'r', '\0'};
    //-------------------------------------------------------------------------------

  time_t t = time (NULL);
  struct tm tm = *localtime (&t);
  system("clear");
  printf (BOLDRED"Root"RESET":~$ ");
  scanf ("%s", &sto);
  if ((strcmp (init, sto)) == 0) {
      printf ("Do you want to open the calculator?\n");
      printf ("[Y/n]? ");
      scanf ("%s", &sto);
      if ((strcmp (yes, sto)) == 0) {

      system("clear");
    
    printf(BOLDBLUE"+--------------------------------------------------------------+\n");
    printf("|                                                              |\n"RESET);
    printf(BOLDBLUE"|  "RESET"           W E L C O M E   TO   "BOLDRED"M "RESET BOLDGREEN"U"RESET BOLDYELLOW" L"RESET BOLDMAGENTA" T"RESET BOLDCYAN" I"RESET BOLDBLUE" C"RESET BOLDYELLOW" S"RESET"  !     "BOLDBLUE"       |\n"RESET);
    printf(BOLDBLUE"|  "RESET"                                                           "BOLDBLUE" |\n"RESET);
    printf(BOLDBLUE"|  "RESET"   Here is the list of valid commands that you can type:   "BOLDBLUE" |\n"RESET);
    printf(BOLDBLUE"|  "RESET"                                                           "BOLDBLUE" |\n"RESET);
    printf(BOLDBLUE"|  "RESET"          <stime> - Show actual date and time          "BOLDBLUE"   |\n"RESET);
    printf(BOLDBLUE"|  "RESET"          <help>  - Gives the whole list of commands    "BOLDBLUE"  |\n"RESET);
    printf(BOLDBLUE"|  "RESET"          <add> -  Makes a simple sum of two numbers"BOLDBLUE"      |\n"RESET);
    printf(BOLDBLUE"|  "RESET"          <substract> - Makes a substraction of two numbers"BOLDBLUE" |\n"RESET);
    printf(BOLDBLUE"|  "RESET"          <multiply> - Makes                                         "BOLDBLUE"|\n"RESET);
    printf(BOLDBLUE"|  "RESET"               [6]                                          "BOLDBLUE"|\n"RESET);
    printf(BOLDBLUE"|                                                              |\n");
    printf(BOLDBLUE"|                                                              |\n");
    printf(BOLDBLUE"|                                                              |\n");
    printf(BOLDBLUE"+--------------------------------------------------------------+\n"RESET);
   
	  while (b > 0){


	      printf("\n");
        printf (BOLDCYAN"Type your choice"RESET": ");
	      scanf ("%s", &sto);
	      if ((strcmp (add, sto)) == 0) {

		        add();

		    }else if ((strcmp (abt, sto)) == 0){

            printf("            ---======HELP======---        \n");
            printf("            Version: Jace 0.3.0           \n");
            printf("            Licence: GNU GPL v3           \n");
            printf("            Made by: Josue Zafra          \n");
            printf("\n");
		    }else if ((strcmp (help, sto)) == 0){

          system("clear");
          
          printf(BOLDBLUE"+--------------------------------------------------------------+\n");
          printf("|                                                              |\n"RESET);
          printf(BOLDBLUE"|  "RESET"           W E L C O M E   TO   "BOLDRED"M "RESET BOLDGREEN"U"RESET BOLDYELLOW" L"RESET BOLDMAGENTA" T"RESET BOLDCYAN" I"RESET BOLDBLUE" C"RESET BOLDYELLOW" S"RESET"  !     "BOLDBLUE"       |\n"RESET);
          printf(BOLDBLUE"|  "RESET"                                                           "BOLDBLUE" |\n"RESET);
          printf(BOLDBLUE"|  "RESET"   Here is the list of valid commands that you can type:   "BOLDBLUE" |\n"RESET);
          printf(BOLDBLUE"|  "RESET"                                                           "BOLDBLUE" |\n"RESET);
          printf(BOLDBLUE"|  "RESET"            <stime> - Show actual date and time          "BOLDBLUE"   |\n"RESET);
          printf(BOLDBLUE"|  "RESET"            <help>  - Gives the whole list of commands    "BOLDBLUE"  |\n"RESET);
          printf(BOLDBLUE"|  "RESET"            <                                         "BOLDBLUE"      |\n"RESET);
          printf(BOLDBLUE"|  "RESET"               [4]                                         "BOLDBLUE" |\n"RESET);
          printf(BOLDBLUE"|  "RESET"               [5]                                          "BOLDBLUE"|\n"RESET);
          printf(BOLDBLUE"|  "RESET"               [6]                                          "BOLDBLUE"|\n"RESET);
          printf(BOLDBLUE"|                                                              |\n");
          printf(BOLDBLUE"|                                                              |\n");
          printf(BOLDBLUE"|                                                              |\n");
          printf(BOLDBLUE"+--------------------------------------------------------------+\n"RESET);


            printf ("\n");
		} else if ((strcmp (stime, sto)) == 0){
		  printf ("now: %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900,tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min,tm.tm_sec);
		  printf ("\n");
		} else if((strcmp (substract, sto)) == 0) {
			  printf("Enter two numbers to substract\n");
			  scanf("%d", &a);
        printf("Enter the other number\n");
        scanf("%d", &b);
			  c = a - b;
			  printf("The result is : %d\n", c);
		} else if ((strcmp (clear, sto)) == 0) {
        system("clear");
    } else if ((strcmp (zero, sto)) == 0) {
        system("Are you sure?");
        if ((strcmp(yes, sto)) == 0) {
            printf("See you later!");
            exit(1);
        } else if((strcmp(no, sto)) == 0) {
            printf("Ok, keep going!");
        } else {
            printf("Err");
        }
      } else if((strcmp (multi, sto)) == 0) {
            printf ("Enter the first number to multiply\n");
            scanf ("%d", &a);
            printf("Enter the second number\n");
            scanf("%d", &b);
            c = a * b;
            printf ("The result is: %d\n", c);
      } else {
           printf(BOLDRED"Error"RESET": the command '%s' is not valid.\n", &sto);


      }

	    }


	}			//Outside of "while"
      else if ((strcmp (no, sto)) == 0){

	  printf ("See you later!\n");
	  }else{

	  printf ("Err...\n");
	  }

    }	// Inside of ye or no


  return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

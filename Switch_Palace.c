/*The goal of this program is to test my skills in utilizing Switch Statements, coupled with initiating 2 Switch Statements*/

#include <stdio.h>

int main(void)

{
  int test;

  test = 1; /*Here is the FIRST Integer, being given a Value of "1"*/

  char test_two[15];

  test_two = "Fuzzy Mittens."; /*And the first (and ONLY) Char, being given a String Value of "Fuzzy Mittens." We allow just ONE more Character than what is readily visible, since the Compiler adds an "\O" Termination Format Specifier to the end of the String.   :)*/

  switch (test)

  {
    case 1:

      printf ("Test 1.\n");

      printf ("Test 1a.\n");

    case 2:

      FILE *ptr; /*We're getting fancy here now. Nested within this first Switch Statement Case, of Switch (test), we declare a Pointer for a Variable, which is just called "ptr". The Asterisk Symbol is used as a Pointer to bind it to FILE.*/

      ptr = fopen ("test.txt", "w");

      fprintf ("This is a test.\n\"Hello\nWorld!!\"", ptr);

      fflush (ptr);

      fclose (ptr);

      ptr = fopen ("test.txt", "a+");

      fprintf ("Hello, \"World!!\"", ptr);

      fflush (ptr);

      fclose (ptr);

      break;

    case 3:

      printf ("Nothing??\n");

      printf ("0x3BFD1YA");

      printf ("\n");

    default:

      printf ("Tihs is teh defualt.\nPl0x...?\nU Jelly...?");

  }

  switch (test_two) /*This is the SECOND Switch Statement. It is called "test_2". This is what the Char Variable was called. :)*/

  {
    case "Clash"; /*I'm playing with Strings here, now. My hope is that Char (which Equals "Fuzzy Mittens.", by the way), will activate Case #2, and Print ""Clash with Team Magma...?? This is simply a reference to Pokemon Versions Ruby, Sapphire, and Emerald, and the remakes, Omega Ruby, and Alpha Sapphire */

      printf ("Another test.\n");

      printf ("0x3YBY2K");

    case "Fuzzy Mittens.":

      printf ("Clash with Team Magma...??\n");

    default:

      printf ("Tihs is ALSO teh defualt...\n");

  }

  return 0;

}

/*And we're DONE! :D So, what'dya think...?   :)*/

#include <stdio.h>
#include <string.h> 
int main(void)
{
int choice;
  printf ("Fretboard Notes & Frequencies.\n Copyright C 2010-2023  Gary J. Teixeira Jr.\n\n You can redistribute this program and/or modify\n it under the terms of the Creative Commons\n Attribution-NonCommercial 4.0 International License.\n\n This program is distributed in the hope that it will be useful,\n but WITHOUT ANY WARRANTY without even the implied warranty of\n MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n\n You may contact the developer of this program at  ambientmine at protonmail.com\n");
  printf ("7-String Guitar \n\n");
  printf ("1. -19 Frets  2. -18 Frets\n");


  printf("Enter choice ");
  scanf ("%d", &choice);
  
if(choice == 1) {
  printf ("\n");
}
else if (choice == 2) {
  printf ("\n");
}


else {
  printf("Wrong Number");
}  
return 0;
}

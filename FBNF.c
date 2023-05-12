/* Fretboard Notes & Frequencies.
  Copyright (C) 2010-2022  Gary J. Teixeira Jr.

  You can redistribute this program and/or modify
  it under the terms of the Creative Commons
  Attribution-NonCommercial 4.0 International License.
   
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

  You may contact the developer of this program at:  ambientmine@protonmail.com
*/

#include <stdio.h>
#include <string.h> 
int main(void)
{
  printf ("Fretboard Notes & Frequencies.\n Copyright C 2010-2023  Gary J. Teixeira Jr.\n\n You can redistribute this program and/or modify\n it under the terms of the Creative Commons\n Attribution-NonCommercial 4.0 International License.\n\n This program is distributed in the hope that it will be useful,\n but WITHOUT ANY WARRANTY without even the implied warranty of\n MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n\n You may contact the developer of this program at  ambientmine AT protonmail DOT com\n\n");

  printf ("Main Menu:\n\n");  
  printf ("1.Guitar  2.Bass\n");
  printf("Enter choice ");
  scanf ("%d", &choice);
  
if(choice == 1)
  {
         goto GuitarM;
  }
else if (choice == 2) 
  {
         goto BassM;
  }
else {
  printf("Wrong Number\n");
}
GuitarM:
	STATEMENTS

BassM:
	STATEMENTS
	
return 0;
}

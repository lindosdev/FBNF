#include <stdio.h>
#include <string.h> 
int main(void)
{
int choice;
  printf ("Fretboard Notes & Frequencies.\n Copyright C 2010-2023  Gary J. Teixeira Jr.\n\n You can redistribute this program and/or modify\n it under the terms of the Creative Commons\n Attribution-NonCommercial 4.0 International License.\n\n This program is distributed in the hope that it will be useful,\n but WITHOUT ANY WARRANTY without even the implied warranty of\n MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n\n You may contact the developer of this program at  ambientmine at protonmail.com\n");
  printf ("7-String Guitar \n\n");
  printf ("1. -19 Frets  2. -18 Frets  3. -17 Frets  4. -16 Frets  5. -15 Frets\n");


  printf("Enter choice ");
  scanf ("%d", &choice);
  
if(choice == 1) {
  printf ("-19 Frets\n    S   7              6              5              4              3              2              1\n\n    0   E1   20.60172  A2   27.5      D2   36.7081   G2   48.99943  C3   65.40639  E3   82.40689  A4   110\n    1   F1   21.82676  Bb2  29.13524  D#2  38.89087  G#2  51.91309  C#3  69.29556  F3   87.30706  Bb4  116.5409\n    2   F#1  23.12465  B2   30.86771  E2   41.20344  A3   55        D3   73.41619  F#3  92.49861  B4   123.4708\n    3   G1   24.49971  C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G3   97.99886  C4   130.8128\n    4   G#1  25.95654  C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  G#3  103.8262  C#4  138.5913\n    5   A2   27.5      D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  A4   110       D4   146.8324\n    6   Bb2  29.13524  D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  Bb4  116.5409  D#4  155.5635\n    7   B2   30.86771  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  B4   123.4708  E4   164.8138\n    8   C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C4   130.8128  F4   174.6141\n    9   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    10  D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    11  D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    12  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    13  F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    14  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    15  G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    16  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    17  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    18  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    19  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    20  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    21  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    22  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    23  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    24  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n");
  printf ("\n");
}
else if (choice == 2) {
  printf ("-18 Frets\n    S   7              6              5              4              3              2              1\n\n    0   F1   21.82676  Bb2  29.13524  D#2  38.89087  G#2  51.91309  C#3  69.29556  F3   87.30706  Bb4  116.5409\n    1   F#1  23.12465  B2   30.86771  E2   41.20344  A3   55        D3   73.41619  F#3  92.49861  B4   123.4708\n    2   G1   24.49971  C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G3   97.99886  C4   130.8128\n    3   G#1  25.95654  C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  G#3  103.8262  C#4  138.5913\n    4   A2   27.5      D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  A4   110       D4   146.8324\n    5   Bb2  29.13524  D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  Bb4  116.5409  D#4  155.5635\n    6   B2   30.86771  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  B4   123.4708  E4   164.8138\n    7   C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C4   130.8128  F4   174.6141\n    8   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    9   D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    10  D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    11  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    12  F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    13  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    14  G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    15  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    16  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    17  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    18  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    19  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    20  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    21  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    22  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    23  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n    24  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F5   349.2282  Bb6  466.1638\n");
  printf ("\n");
}
else if (choice == 3) {
 printf ("-17 Frets\n    S   7              6              5              4              3              2              1\n\n    0   F#1  23.12465  B2   30.86771  E2   41.20344  A3   55        D3   73.41619  F#3  92.49861  B4   123.4708\n    1   G1   24.49971  C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G3   97.99886  C4   130.8128\n    2   G#1  25.95654  C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  G#3  103.8262  C#4  138.5913\n    3   A2   27.5      D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  A4   110       D4   146.8324\n    4   Bb2  29.13524  D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  Bb4  116.5409  D#4  155.5635\n    5   B2   30.86771  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  B4   123.4708  E4   164.8138\n    6   C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C4   130.8128  F4   174.6141\n    7   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    8   D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    9   D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    10  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    11  F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    12  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    13  G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    14  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    15  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    16  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    17  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    18  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    19  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    20  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    21  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    22  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n    23  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F5   349.2282  Bb6  466.1638\n    24  F#3  92.49861  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  F#5  369.9944  B6   493.8833\n");
 printf ("\n");
}
else if (choice == 4) {
 printf ("-16 Frets\n    S   7              6              5              4              3              2              1\n\n    0   G1   24.49971  C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G3   97.99886  C4   130.8128\n    1   G#1  25.95654  C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  G#3  103.8262  C#4  138.5913\n    2   A2   27.5      D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  A4   110       D4   146.8324\n    3   Bb2  29.13524  D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  Bb4  116.5409  D#4  155.5635\n    4   B2   30.86771  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  B4   123.4708  E4   164.8138\n    5   C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C4   130.8128  F4   174.6141\n    6   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    7   D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    8   D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    9   E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    10  F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    11  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    12  G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    13  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    14  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    15  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    16  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    17  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    18  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    19  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    20  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    21  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n    22  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F5   349.2282  Bb6  466.1638\n    23  F#3  92.49861  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  F#5  369.9944  B6   493.8833\n    24  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D#5  311.127   G5   391.9954  C6   523.2511\n");  printf ("\n");
 printf ("\n");
}
else if (choice == 5) {
 printf ("-15 Frets\n    S   7              6              5              4              3              2              1\n\n    0   G#1  25.95654  C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  G#3  103.8262  C#4  138.5913\n    1   A2   27.5      D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  A4   110       D4   146.8324\n    2   Bb2  29.13524  D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  Bb4  116.5409  D#4  155.5635\n    3   B2   30.86771  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  B4   123.4708  E4   164.8138\n    4   C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C4   130.8128  F4   174.6141\n    5   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    6   D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    7   D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    8   E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    9   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    10  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    11  G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    12  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    13  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    14  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    15  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    16  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    17  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    18  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    19  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    20  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n    21  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F5   349.2282  Bb6  466.1638\n    22  F#3  92.49861  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  F#5  369.9944  B6   493.8833\n    23  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D#5  311.127   G5   391.9954  C6   523.2511\n    24  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  E5   329.6276  G#5  415.3047  C#6  554.3653\n");
 printf ("\n");
}
else if (choice == 6) {
 printf ("-14 Frets\n    S   7              6              5              4              3              2              1\n\n    0   A2   27.5      D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  A4   110       D4   146.8324\n    1   Bb2  29.13524  D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  Bb4  116.5409  D#4  155.5635\n    2   B2   30.86771  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  B4   123.4708  E4   164.8138\n    3   C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C4   130.8128  F4   174.6141\n    4   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    5   D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    6   D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    7   E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    8   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    9   F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    10  G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    11  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    12  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    13  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    14  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    15  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    16  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    17  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    18  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    19  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n    20  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F5   349.2282  Bb6  466.1638\n    21  F#3  92.49861  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  F#5  369.9944  B6   493.8833\n    22  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D#5  311.127   G5   391.9954  C6   523.2511\n    23  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  E5   329.6276  G#5  415.3047  C#6  554.3653\n    24  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  F5   349.2282  A6   440       D6   587.3295\n");
 printf ("\n");
}
else if (choice == 7) {
 printf ("-13 Frets\n    S   7              6              5              4              3              2              1\n\n    0   Bb2  29.13524  D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  Bb4  116.5409  D#4  155.5635\n    1   B2   30.86771  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  B4   123.4708  E4   164.8138\n    2   C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C4   130.8128  F4   174.6141\n    3   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    4   D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    5   D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    6   E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    7   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    8   F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    9   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    10  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    11  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    12  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    13  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    14  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    15  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    16  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    17  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    18  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n    19  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F5   349.2282  Bb6  466.1638\n    20  F#3  92.49861  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  F#5  369.9944  B6   493.8833\n    21  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D#5  311.127   G5   391.9954  C6   523.2511\n    22  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  E5   329.6276  G#5  415.3047  C#6  554.3653\n    23  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  F5   349.2282  A6   440       D6   587.3295\n    24  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F#5  369.9944  Bb6  466.1638  D#6  622.254\n");
 printf ("\n");
}
else if (choice == 8) {
 printf ("-12 Frets\n    S   7              6              5              4              3              2              1\n\n    0   B2   30.86771  E2   41.20344  A3   55        D3   73.41619  G3   97.99886  B4   123.4708  E4   164.8138\n    1   C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C4   130.8128  F4   174.6141\n    2   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    3   D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    4   D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    5   E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    6   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    7   F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    8   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    9   G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    10  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    11  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    12  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    13  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    14  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    15  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    16  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    17  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n    18  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F5   349.2282  Bb6  466.1638\n    19  F#3  92.49861  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  F#5  369.9944  B6   493.8833\n    20  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D#5  311.127   G5   391.9954  C6   523.2511\n    21  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  E5   329.6276  G#5  415.3047  C#6  554.3653\n    22  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  F5   349.2282  A6   440       D6   587.3295\n    23  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F#5  369.9944  Bb6  466.1638  D#6  622.254\n    24  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  G5   391.9954  B6   493.8833  E6   659.2551\n");
 printf ("\n");
}
else if (choice == 9) {
 printf ("-11 Frets\n    S   7              6              5              4              3              2              1\n\n    0   C2   32.7032   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C4   130.8128  F4   174.6141\n    1   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    2   D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    3   D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    4   E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    5   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    6   F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    7   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    8   G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    9   A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    10  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    11  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    12  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    13  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    14  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    15  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    16  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n    17  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F5   349.2282  Bb6  466.1638\n    18  F#3  92.49861  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  F#5  369.9944  B6   493.8833\n    19  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D#5  311.127   G5   391.9954  C6   523.2511\n    20  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  E5   329.6276  G#5  415.3047  C#6  554.3653\n    21  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  F5   349.2282  A6   440       D6   587.3295\n    22  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F#5  369.9944  Bb6  466.1638  D#6  622.254\n    23  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  G5   391.9954  B6   493.8833  E6   659.2551\n    24  C4   130.8128  F4   174.6141  Bb5  233.0819  D#5  311.127   G#5  415.3047  C6   523.2511  F6   698.4565\n");
 printf ("\n");
}
else if (choice == 10) {
 printf ("-10 Frets\n    S   7              6              5              4              3              2              1\n\n    0   C#2  34.64783  F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       C#4  138.5913  F#4  184.9972\n    1   D2   36.7081   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D4   146.8324  G4   195.9977\n    2   D#2  38.89087  G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  D#4  155.5635  G#4  207.6523\n    3   E2   41.20344  A3   55        D3   73.41619  G3   97.99886  C4   130.8128  E4   164.8138  A5   220\n    4   F2   43.65353  Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F4   174.6141  Bb5  233.0819\n    5   F#2  46.2493   B3   61.73541  E3   82.40689  A4   110       D4   146.8324  F#4  184.9972  B5   246.9417\n    6   G2   48.99943  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G4   195.9977  C5   261.6256\n    7   G#2  51.91309  C#3  69.29566  F#3  92.49861  B4   123.4708  E4   164.8138  G#4  207.6523  C#5  277.1826\n    8   A3   55        D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  A5   220       D5   293.6648\n    9   Bb3  58.27047  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  Bb5  233.0819  D#5  311.127\n    10  B3   61.73541  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  B5   246.9417  E5   329.6276\n    11  C3   65.40639  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C5   261.6256  F5   349.2282\n    12  C#2  69.29566  F#3  92.49861  B4   123.4708  E4   164.8324  A5   220       C#5  277.1826  F#5  369.9944\n    13  D3   73.41619  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D5   293.6648  G5   391.9954\n    14  D#3  77.78175  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  D#5  311.127   G#5  415.3047\n    15  E3   82.40689  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  E5   329.6276  A6   440\n    16  F3   87.30706  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F5   349.2282  Bb6  466.1638\n    17  F#3  92.49861  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  F#5  369.9944  B6   493.8833\n    18  G3   97.99886  C4   130.8128  F4   174.6141  Bb5  233.0819  D#5  311.127   G5   391.9954  C6   523.2511\n    19  G#3  103.8262  C#4  138.5913  F#4  184.9972  B5   246.9417  E5   329.6276  G#5  415.3047  C#6  554.3653\n    20  A4   110       D4   146.8324  G4   195.9977  C5   261.6256  F5   349.2282  A6   440       D6   587.3295\n    21  Bb4  116.5409  D#4  155.5635  G#4  207.6523  C#5  277.1826  F#5  369.9944  Bb6  466.1638  D#6  622.254\n    22  B4   123.4708  E4   164.8138  A5   220       D5   293.6648  G5   391.9954  B6   493.8833  E6   659.2551\n    23  C4   130.8128  F4   174.6141  Bb5  233.0819  D#5  311.127   G#5  415.3047  C6   523.2511  F6   698.4565\n    24  C#4  138.5913  F#4  184.9972  B5   246.9417  E5   329.6276  A6   440       C#6  554.3653  F#6  739.9888\n");
 printf ("\n");
}


else {
  printf("Wrong Number");
}  
return 0;
}

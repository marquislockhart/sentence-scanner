// Marquis Lockhart - CSCI 1110
// Program 5 - Sentences
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char sentence=' ';
    char tmp = ' ';
    int counter=0; //variable for counting in the loop
    int keystrokes=0; //counts number of keystrokes
    int alpha_characters=0; //counts number of total alphabetic letters
    int vowels=0; //counts number of vowels

    printf("Marquis Lockhart - CSCI 1110\n");
    printf("Program 5 - Sentences");

    while(1)
    {
    sentence = ' ';
    keystrokes=0;
    alpha_characters=0;
    vowels=0;
    printf("\nPlease input your sentences.\n\n");//user input for sentence

while(sentence!='\n')//for loop to analyze sentence
{
    scanf("%c", &sentence);
    ++keystrokes;//add to keystroke count
    tmp = toupper(sentence);//analyze uppercase letters
    switch(tmp)
{
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        ++vowels;//add to vowel count
        break;
    case '\n':
        keystrokes--;
        break;
}
    if(isalpha(sentence))//analyze all alphabet characters in sentence
    {
        ++alpha_characters;//add to alphabet characters
    }
}
    if(keystrokes>0)
    {
    //displays number of keystrokes, alphabet characters, and vowels
    printf("Keystrokes:\t\t %4i\n", keystrokes);
    printf("Alpha Characters:\t %4i\n", alpha_characters);
    printf("Vowels:\t\t\t %4i\n", vowels);
    }
    else break;
    }
    printf("Enter was pressed. Goodbye.");
   return 0;//exit program
}
/*Marquis Lockhart - CSCI 1110
Program 5 - Sentences
Please input your sentences.

Here is my program in action
Keystrokes:                28
Alpha Characters:          23
Vowels:                     9

Please input your sentences.

I hope i get a 100 on it
Keystrokes:                24
Alpha Characters:          14
Vowels:                     8

Please input your sentences.

Please professor?
Keystrokes:                17
Alpha Characters:          15
Vowels:                     6

Please input your sentences.


Enter was pressed. Goodbye.*/

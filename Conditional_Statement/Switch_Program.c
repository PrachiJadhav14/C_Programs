#include<stdio.h>
#include<conio.h>
int main()
    {
     char character="0";
     printf("Enter Any Alphabet =>");
     scanf("%s",&character);
     switch(character)
    {
      case'a':
      case'e':
      case'i':
      case'o':
      case'u':
          printf("\n Enter Any Vowel.");
          break;
      case'b':
      case'c':
      case'd':
      case'f':
      case'g':
      case'h':
      case'j':
      case'k':
      case'l':
      case'm':
      case'n':
      case'p':
      case'q':
      case'r':
      case's':
      case't':
      case'v':
      case'w':
      case'x':
       case'y':
      case'z':
           printf("\n Given Alphabet Is Consonant. ");
           break;
      case'A':
      case'E':
      case'I':
      case'O':
      case'U':
           printf("\n Given Alphabet Is Vowel. ");
           break;
      case'B':
      case'C':
      case'D':
      case'F':
      case'G':
      case'H':
      case'J':
      case'K':
      case'L':
      case'M':
      case'N':
      case'P':
      case'Q':
      case'R':
      case'S':
      case'T':
      case'V':
      case'W':
      case'X':
      case'Y':
      case'Z':
        printf("\n Alphabet Is Consonant.");
        break;
      case'1':
      case'2':
      case'3':
      case'4':
      case'5':
      case'6':
      case'7':
      case'8':
      case'9':
      case'10':
        printf("\n Given Alphabet Is Digit");
        break;
     default:
     printf("\n Given Alphabet Is Special Symbol.");
    }
     printf("\n\n\t============Thanks==========");
     getch();
     return 0;
    }

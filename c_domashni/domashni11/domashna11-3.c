/*. Да се пронајдат на Интернет кодовите за бројки и букви во Морзеовата азбука.
 Да се напише програм кој чита текст фраза и ја дава нејзината вредност во Морзеовата азбука.
  Да се направи и друга функција на која и се предава Морзеов текст,
 а треба како резултат да се добие текст фраза во говорен јазик.*/
 #include<stdio.h>
#include<string.h>

void convertMorseCodeTotekst(char *morseCode);

int main()
{
        char tekst[100];
        char tekstMk[500];
        int i;
        int brojac = 0;
        char morsetekst[500];

        printf("Vnesete tekst od brojki i bukvi: ");
        gets(tekst);

        for(i=0; i<strlen(tekst); ++i)
        {
            switch(toupper(tekst[i]))
            {
                case 'A':
                    tekstMk[brojac++]='.';
                    tekstMk[brojac++]='-';
                    break;
                case 'B':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
                case 'C':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      break;
                case 'D':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
                case 'E':
                      tekstMk[brojac++]='.';
                      break;
                case 'F':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      break;
                case 'G':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      break;
                case 'H':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
                case 'I':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
                case 'J':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      break;
               case 'K':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      break;
               case 'L':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
               case 'M':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      break;
               case 'N':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      break;
              case 'O':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      break;

              case 'P':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      break;
              case 'Q':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      break;
              case 'R':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      break;
              case 'S':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
              case 'T':
                      tekstMk[brojac++]='-';
                      break;
              case 'U':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                    break;
              case 'V':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      break;
              case 'W':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      break;
              case 'X':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      break;
              case 'y':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      break;
              case 'Z':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
              case '0':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      break;
              case '1':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      break;
              case '2':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      break;
              case '3':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      break;
              case '4':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='-';
                      break;
              case '5':
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
              case '6':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
              case '7':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
              case '8':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      tekstMk[brojac++]='.';
                      break;
              case '9':
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='-';
                      tekstMk[brojac++]='.';
                      break;
              case ' ':
                      tekstMk[brojac++] = ' ';
                      break;
              default:
                    printf("nevaliden znak %c", tekst[i]);
            }
            tekstMk[brojac++] = ' ';
        }
        tekstMk[brojac] = '\0';
        printf("%s\n", tekstMk);

        printf("Vnesete nekoj Morzeov tekst: ");
        gets(morsetekst);
        convertMorseCodeTotekst(morsetekst);

        return 0;
}

void convertMorseCodeTotekst(char *morseCode)
{
    char tekst[100];
    int brojac = 0;
    char *tempValue;

    tempValue = strtok(morseCode, " ");

    while(tempValue != NULL)
    {
        if(strcmp(tempValue, ".-") == 0) tekst[brojac++] = 'A';
        else if(strcmp(tempValue, "-...") == 0) tekst[brojac++] = 'B';
        else if(strcmp(tempValue, "-...") == 0) tekst[brojac++] = 'B';
        else if(strcmp(tempValue, "-.-.") == 0) tekst[brojac++] = 'C';
        else if(strcmp(tempValue, "-..") == 0) tekst[brojac++] = 'D';
        else if(strcmp(tempValue, ".") == 0) tekst[brojac++] = 'E';
        else if(strcmp(tempValue, "..-.") == 0) tekst[brojac++] = 'F';
        else if(strcmp(tempValue, "--.") == 0) tekst[brojac++] = 'G';
        else if(strcmp(tempValue, "....") == 0) tekst[brojac++] = 'H';
        else if(strcmp(tempValue, "..") == 0) tekst[brojac++] = 'I';
        else if(strcmp(tempValue, ".---") == 0) tekst[brojac++] = 'J';
        else if(strcmp(tempValue, "-.-") == 0) tekst[brojac++] = 'K';
        else if(strcmp(tempValue, ".-..") == 0) tekst[brojac++] = 'L';
        else if(strcmp(tempValue, "--") == 0) tekst[brojac++] = 'M';
        else if(strcmp(tempValue, "-.") == 0) tekst[brojac++] = 'N';
        else if(strcmp(tempValue, "---") == 0) tekst[brojac++] = 'O';
        else if(strcmp(tempValue, ".--.") == 0) tekst[brojac++] = 'P';
        else if(strcmp(tempValue, ".-.") == 0) tekst[brojac++] = 'R';
        else if(strcmp(tempValue, "...") == 0) tekst[brojac++] = 'S';
        else if(strcmp(tempValue, "-") == 0) tekst[brojac++] = 'T';
        else if(strcmp(tempValue, "..-") == 0) tekst[brojac++] = 'U';
        else if(strcmp(tempValue, "...-") == 0) tekst[brojac++] = 'V';
        else if(strcmp(tempValue, ".--") == 0) tekst[brojac++] = 'W';
        else if(strcmp(tempValue, "-..-") == 0) tekst[brojac++] = 'X';
        else if(strcmp(tempValue, "-.--") == 0) tekst[brojac++] = 'Y';
        else if(strcmp(tempValue, "--..") == 0) tekst[brojac++] = 'Z';
        else if(strcmp(tempValue, "----") == 0) tekst[brojac++] = '0';
        else if(strcmp(tempValue, ".---") == 0) tekst[brojac++] = '1';
        else if(strcmp(tempValue, "..--") == 0) tekst[brojac++] = '2';
        else if(strcmp(tempValue, "...--") == 0) tekst[brojac++] = '3';
        else if(strcmp(tempValue, "....-") == 0) tekst[brojac++] = '4';
        else if(strcmp(tempValue, ".....") == 0) tekst[brojac++] = '5';
        else if(strcmp(tempValue, "-....") == 0) tekst[brojac++] = '6';
        else if(strcmp(tempValue, "--...") == 0) tekst[brojac++] = '7';
        else if(strcmp(tempValue, "---..") == 0) tekst[brojac++] = '8';
        else if(strcmp(tempValue, "----.") == 0) tekst[brojac++] = '9';
        else if(strcmp(tempValue, "/") == 0) tekst[brojac++] = ' ';

        tempValue = strtok(NULL, " ");
    }
    tekst[brojac] = '\0';
    printf("%s", tekst);
}
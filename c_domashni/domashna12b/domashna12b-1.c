/*Вие сте сопственик на продавница за компјутерска опрема.
 Треба да си направите апликација која ќе се грижи за хардверот што го имате на располагање, 
 количината на секој од деловите во продавницата и цените на деловите. 
 Напишете програма која иницијализира датотека “hardware.dat”, ви овозможува да внесете податоци за секој дел, 
 да ги излистате податоците за специфичен дел, да дадете комплетен листинг на состојбата во вашата продавница,
  да избришете податоци за даден дел ако тој веќе го немате на лагер, да ажурирате податоци за даден дел и да правите продажба.
   Под продажба се подразбира намалување на бројот на потребни делови од датотеката, доколку има толку делови, колку што бара 
   купецот. Да претпоставиме дека имаме оптички читач на касата и дека секој дел се вчитува со негов код. 

За започнување со работа, користете ги следните информации:
Код 	Име на дел	Количина	Цена
3	glusec Mico	7	10.34
56	monitor Kiki3	5	65.09
75	tastatura Biko8	4	12.09
89	matploc Ziko32	6	87.09

*/


#include <stdio.h>
struct produkt {
    int kod;
    char ime[30];
    int kolicina;
    float cena;
};
void postaviProdukti(FILE *ptr, int KodOfprodukts);
void kompletenListing(FILE *ptr);
void izlistajSpecificenProdukt(FILE *ptr);
void izbrishiProdukt(FILE *ptr);
void azurirajProdukt(FILE *ptr);
void dodadiProdukt(FILE *ptr);
void prodazba(FILE *ptr);
int enterChoice(void);

int main()
{
    int choice;
    int i;
    int KodOfprodukts;
    FILE *ptr;

   
   struct produkt prod = { 0, "", 0, 0.0 };

      if ( (ptr = fopen( "hardware.dat", "rb" ) ) == NULL ) {
      printf( "Datotekata ne mozhe da se otvori.\n" );
   } 
   else { 
     
      /* korisnikot specificira akcija */
       while((choice = enterChoice()) != 7)
        {
             switch ( choice )
             {
             case 1:
                 kompletenListing(ptr);
                 break;
             case 2:
                izlistajSpecificenProdukt(ptr);
                break;
             case 3:
                izbrishiProdukt(ptr);
                break;
             case 4:
                azurirajProdukt(ptr);
             case 5:
                dodadiProdukt(ptr);
                break;
             case 6:
                prodazba(ptr);
                break;
            default:
               printf( "Greshen izbor\n" );
               break;
             }
        }

      fclose( ptr ); 
   } 

   return 0; 
} 

int enterChoice( void )
{ 
   int menuChoice;

   printf( "\nVnesi izbor\n"
      "1 - Kompleten listing\n"
      "2 - Izlistaj produkt\n"
      "3 - Izbrishi produkt\n"
      "4 - Azuriraj Produkt\n"
      "5 - Dodadi produkt\n"
      "6 - Prodazba\n"
      "7 - Kraj na programot\n? ");

   scanf("%d", &menuChoice);

   return menuChoice;

} 
void kompletenListing(FILE *readPtr)
{
     
   FILE *writePtr; 

   struct produkt prod = { 0, "", 0, 0.0 };

   
   if ( ( writePtr = fopen( "hardware.txt", "w" ) ) == NULL ) {
      printf( "Datotekata ne mozhe da se otvori.\n" );
   } 
   else { 
      rewind( readPtr ); 
      fprintf( writePtr, "%-8s%-16s%-11s%10s\n", 
         "Kod", "Ime na del", "Kolicina","Cena" );

     
      while ( !feof( readPtr ) ) { 
         fread( &prod, sizeof( struct produkt ), 1, readPtr );

         
         if ( prod.kod != 0 ) {
            fprintf( writePtr, "%-8d%-16s%-11d%10.2f\n",
               prod.kod, prod.ime,
               prod.kolicina, prod.cena);
         } /* kraj if */
      } /* kraj while */

      fclose( writePtr ); /* fclose ja zatvora datotekata */
   } /* kraj else */

}
void izlistajSpecificenProdukt(FILE *ptr)
{
    struct produkt prod = {0, "", 0, 0.0};
    int produktKod;

    printf("Vnesi broj na produkt: ");
    scanf("%d", &produktKod);

    fseek(ptr, (produktKod - 1) * sizeof(struct produkt),
          SEEK_SET);
    fread(&prod, sizeof(struct produkt), 1, ptr);

    if(prod.kod == 0)
        printf("Produktot %d nema informacii.\n", produktKod);
    else
         printf( "%-8d%-16s%-11d%10.2f\n",
         prod.kod, prod.ime,
         prod.kolicina, prod.cena);
}

void izbrishiProdukt(FILE *ptr)
{
    struct produkt prod;
    struct produkt prazenProdukt = {0, "", 0, 0.0};
    int produktKod;

    printf("Vnesi broj na produkt: ");
    scanf("%d", &produktKod);

    fseek(ptr, (produktKod - 1) * sizeof(struct produkt),
          SEEK_SET);
    fread(&prod, sizeof(struct produkt), 1, ptr);
    if(prod.kod == 0)
    {
      printf("Produktot %d nema informacii.\n",
            produktKod);
    }
    else
    {
         if(prod.kolicina != 0)
        {
            printf("Produktot %d nemoze da bide izbrishan"
                   " bidejki go ima na zaliha.\n", produktKod);
        }
        else
        {
            fseek(ptr, (produktKod - 1) * sizeof(struct produkt),
              SEEK_SET);
            fwrite(&prazenProdukt, sizeof(struct produkt), 1, ptr);
        }
    }
}

void azurirajProdukt(FILE *ptr)
{
    struct produkt prod = {0, "", 0, 0.0};
    int produktKod;

    printf("Vnesi broj na produkt: ");
    scanf("%d", &produktKod);

    fseek(ptr, (produktKod - 1) * sizeof(struct produkt),
          SEEK_SET);
    fread(&prod, sizeof(struct produkt), 1, ptr);
    if(prod.kod == 0)
    {
      printf("Produktot %d nema informacii.\n",
            produktKod);
    }
    else
    {
         printf( "%-8d%-16s%-11d%10.2f\n",
        prod.kod, prod.ime,
         prod.kolicina, prod.cena );
        printf("Vnesete ime, kolicina i cena na produktot: \n");
        scanf("%s%d%f",&prod.ime,
              &prod.kolicina, &prod.cena);

        fseek(ptr, (produktKod - 1) * sizeof(struct produkt),
          SEEK_SET);
        fwrite(&prod, sizeof(struct produkt), 1, ptr);
    }
}

void dodadiProdukt(FILE *ptr)
{
   struct produkt prod = {0, "", 0, 0.0};

   int produktKod;

   printf("Vnesi broj na produkt: ");
    scanf("%d", &produktKod);

   fseek(ptr, (produktKod - 1) * sizeof(struct produkt),
          SEEK_SET);
   fread(&prod, sizeof(struct produkt), 1, ptr);


   if (prod.kod!= 0)
   {
      printf( "Produktot %d e veke vnesen.\n",
              produktKod);
   }
   else
   {
       printf("Vnesete ime, kolicina i cena na produktot: \n");
       scanf("%s%d%f",&prod.ime,
              &prod.kolicina, &prod.cena);
        prod.kod = produktKod;

      fseek(ptr, (produktKod - 1) * sizeof(struct produkt),
          SEEK_SET);

      fwrite(&prod, sizeof(struct produkt), 1, ptr);
   }
}

void prodazba(FILE *ptr)
{
    struct produkt prod = {0, "", 0, 0.0};
    int produktKod, kolicina;

    printf("Vnesi broj na produkt i potrebna kolicina: ");
    scanf("%d%d", &produktKod, &kolicina);

    fseek(ptr, (produktKod - 1) * sizeof(struct produkt),
          SEEK_SET);
    fread(&prod, sizeof(struct produkt), 1, ptr);
    if(prod.kod == 0)
    {
        printf("Produktot %d nema informacii.\n",
            produktKod);
    }
    else
    {
         printf( "%-8d%-16s%-11d%10.2f\n",
        prod.kod, prod.ime,
         prod.kolicina, prod.cena );
         if(kolicina > prod.kolicina)
         {
             printf("Produktot %d ja nema baranata "
                    "kolicina na zaliha.\n",prod.ime);
         }
         else
         {
             prod.kolicina -= kolicina;
              printf( "%-8d%-16s%-11d%10.2f\n",
                prod.kod, prod.ime,
                 prod.kolicina, prod.cena );
             fseek(ptr, (produktKod - 1) * sizeof(struct produkt),
                SEEK_SET);
             fwrite(&prod, sizeof(struct produkt), 1, ptr);
         }
    }
}


#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date( int = 1, int = 1, int = 2007 ); // predefiniran konstruktor
   void print() const;  // pechati data kako mesec/den/godina
   ~Date();  // za da se prikazhe redosledot na unishtuvanje objekti
   int getDay() {return day;}
   int getMonth() {return month;}
   int getYear() {return year;}
private:
   int month;  // 1-12
   int day;    // 1-31 vo zavisnost od mesecot
   int year;   // bilo koja godina

   // funkcija za testiranje dali vrednostite se validni
   int checkDay( int );
}; // kraj na klasata Date

#endif

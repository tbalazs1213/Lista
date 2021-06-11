#include <iostream>

using namespace std;

struct list
{
  string nev;
  int ar;
  list* kov;
};

void kiir(list* horgony)
{
  list* akt = horgony;
  if(akt != NULL)
  {
    while(akt != NULL)
    {
      cout << "Nev:\t" << akt->nev << endl;
      cout << "Ar:\t\t" << akt->ar << endl;
      cout << endl;
      akt = akt->kov;
    }
  }
  else return;
}

int main()
{
  list* horgony = new list;
  list* uj = new list;
  list* vege = new list;

  horgony->nev = "Asztal";
  horgony->ar = 10000;
  horgony->kov = uj;

  uj->nev = "Szek";
  uj->ar = 5500;
  uj->kov = vege;

  vege->nev = "Szekreny";
  vege->ar = 50000;
  vege->kov = NULL;
  kiir(horgony);
  return 0;
}

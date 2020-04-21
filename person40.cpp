#include "person40.h"

//Konstruktordefinitionen
/*-----------------------------------------------------------------*/
//Default Konstruktor
personen::personen()
{
    Vorname.clear();
    Nachname.clear();

    time_t Rawtime;
    struct tm * timeinfo;
    char puffer[9] = {0};
    time (&Rawtime);
    timeinfo = localtime(&Rawtime);

    strftime(puffer,9,"%Y%m%d",timeinfo);
    Geburtsdatum = stoi(puffer);
}
/*-----------------------------------------------------------------*/
personen::personen(const string firstname, const string lastname)
{
    this->Vorname = firstname;
    this->Nachname = lastname;
    this->Geburtsdatum = personen().Geburtsdatum;
}
/*-----------------------------------------------------------------*/
personen::personen(const string firstname, const string lastname, const int birthday)
{
    this->Vorname = firstname;
    this->Nachname = lastname;
    this->Geburtsdatum = birthday;  
}
/*-----------------------------------------------------------------*/
//Methodendefinitionen
/*-----------------------------------------------------------------*/
void personen::print1 (void)
{
    cout<<Vorname<<" "<<Nachname<<" "<<Geburtsdatum<<endl;
    Sleep(2000);
}
/*-----------------------------------------------------------------*/
void personen::print2 (void)
{
    cout<<Nachname<<" "<<Vorname<<endl;
}
/*-----------------------------------------------------------------*/
bool personen::is_ok(void)
{
    if (!Vorname.empty() && !Nachname.empty() && !Kennzeichen.empty() && Geburtsdatum > 0 && Kilometerstand > 0) return true;
    else return false;
}

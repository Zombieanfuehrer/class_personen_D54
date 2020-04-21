#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;
class personen
{
private:
    string Vorname, Nachname, Kennzeichen;
    int Geburtsdatum, Kilometerstand;   
public:
    personen();
    personen(const string firstname, const string lastname);
    personen(const string firstname, const string lastname, const int birthday);
    void print1 (void);
    void print2 (void);
    bool is_ok(void);
}; 
#endif

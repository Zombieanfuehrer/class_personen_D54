#include "person40.cpp"

int main (void)
{
    string V_Name = "Paul", N_Name = "Meier";
    int G_Datum = 19901003;
    char eingabe;
    personen *Aufg_a,*Aufg_b,*Aufg_c; 
    
    cout<<"Welche Aufgabe aus D53A soll ausgefuehrt werden?"<<endl <<"a); b); c);" <<endl;
    cin.get(eingabe);

    switch(eingabe)
    {
        case 'A':
        case 'a':
                Aufg_a = new personen;
                Aufg_a->print1();
                break;
        case 'B':
        case 'b':
                Aufg_b = new personen(V_Name,N_Name);
                Aufg_b->print1();
                break;     
        case 'C':
        case 'c':               
                Aufg_c = new personen(V_Name,N_Name,G_Datum);
                Aufg_c->print1();
                break;
        default :
                cout<<"Eingabe fehlerhaft!"<<endl;
                Sleep(2000);
    }
    return 0;
}

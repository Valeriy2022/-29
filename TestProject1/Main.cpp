#include <iostream>
using namespace std;
//7. Найти индекс первого вхождения подстроки в строку
int indeks_Podstroka(char* string, char* Podstroka)
{
    int index;
    for (size_t i = 0; string[i]; i++)
    {
        for (size_t k = 0, j = i; Podstroka[k] && string[j] == Podstroka[k]; j++, k++)
        {
            if (k > 0 && Podstroka[k] == '\0')
            {
                index = i;
                break;
            }
        }

    }
    return index;
}

void main()
{
    char* string = new char[255];
    cout << "Enter a string: ";
    cin.getline(string, 255);
    cout << "Your string was: " << string<< endl;  
    //7. Найти индекс первого вхождения подстроки в строку *************************************************************************************
    char* Podstroka = new char[255];
    /*char* p;*/
    cout << "Enter a Podstroka: ";
    cin.getline(Podstroka, 255);
    /*p = strstr(string, Podstroka);*/
    /*cout << "The indeks of Podstroka: " << *p << "\n";*/
    cout << "The indeks of Podstroka: " << indeks_Podstroka(string, Podstroka) << "\n";
    /* indeks_Podstroka(string, Podstroka);*/



     /*for (size_t i = 0; i < 256; i++)
      cout << i << "\t" << (char)i << endl;*/

    delete[] string;
    delete[] Podstroka;
}
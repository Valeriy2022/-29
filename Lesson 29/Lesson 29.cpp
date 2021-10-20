//1. Подсчитать длину строки
//2. Подсчитать количество слов в строке
//3. Перевести строку в верхний регистр
//4. Перевести строку в нижний регистр
//5. Проверить вхождение указанного символа в строку
//6. Подсчитать количество вхождений указанного символа в строку
//7. Найти индекс первого вхождения подстроки в строку
//8. Проверить входит ли указанная подстрока в строку
//9. Перевернуть строку
//10. Удалить из строки все знаки припенания
//11. Сравнения строк
//12. Конкатинации строк, то есть добавления второй строки в конец первой
//13. Получение подстроки, состоящей из первых n символов строки, если n >= динны строки, то необходимо выдать всю строку

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

// 1. Подсчет длины строки ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++==

char Mystrlength(const char* string)
{
    size_t length = 0;
    while (*string)
    {
      length++;
      string++;
    }
      
    return length + 48;
} 
//char Mystrlength(const char* string)
//{
//    return !string || !*string ? 0: 1 + Mystrlength(string + 1);
//}

//////2. Подсчитать количество слов в строке +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

char wordsnumber(const char* string)
{
    size_t wordsnumber = 0;
    while (*string)
    {
	  if(*string ==' ')      
        wordsnumber++;    
      string++;
    }
      
    return wordsnumber + 49;
}
void to_upper(char* string)  //3. Перевести строку в верхний регистр
{
    for (size_t i = 0; string[i]; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] -= 32;
    }
}
void to_downer(char* string) //4. Перевести строку в нижний регистр
{
    for (size_t i = 0; string[i]; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            string[i] += 32;
    }
}
char Number_of_Simbols(char* string, char simbol) //6. Подсчитать количество вхождений указанного символа в строку
{
    int count = 0;
    for (size_t i = 0; string[i]; i++)
    {
        if (string[i] == simbol)
            count++;
    }
    return count + 48 ;
}
//7. Найти индекс первого вхождения подстроки в строку
int indeks_Podstroka(char* string, char* Podstroka)
{
    int index;
    for (size_t i = 0; string[i]; i++)
    {
        for ( size_t k = 0, j = i; Podstroka[k] && string[j] == Podstroka[k]; j++, k++)
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
    /*cout << "Your string was: " << string<< endl;  */  
    /*cout << "Length of string: " << Mystrlength(string) << endl;  */   
    /*cout << "Number of words: " << wordsnumber(string) << endl;*/
    /*to_upper(string);
    cout << string << endl;*/
   /* to_downer(string);
    cout << string << endl;*/

    //5. Проверить вхождение указанного символа в строку *************************************************************************************
    /*char simbol;
    cout << "Enter a simbol: ";
    cin >> simbol;
    if (strchr(string, simbol))
        cout << "The string has simbol" << "\n";
    else
        cout << "The string has not simbol" << "\n";*/

    //6. Подсчитать количество вхождений указанного символа в строку ***************************************************************************
    
    /*char simbol;
    cout << "Enter a simbol: ";
    cin >> simbol;    
    cout << "The number of simbols: "<< Number_of_Simbols(string, simbol) << "\n";*/
    
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


//#include <iostream>
//using namespace std;
//const char* message;
//char privet[] = "and bye!";
//char* pr = privet;
//int main()
//{
//	/*message = "Hello";
//	cout << " " << message << " " << pr << "\n";*/
//	int i = 0;
//	while (*(pr + i) != '\0')
//	{
//	cout << *(pr + i++) << " ";
//	}
//}

//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int n = 15;
//	char* month_name(int);	
//	for (int i = 0; i < n; i++)
//		cout << "Month number " << i << " - " << month_name(i) << "\n";
//}
//
//const char* month_name(int k) /* Название k-го месяца */
//{
//const char* name[] = {"none","January","February","March","April","May","June","July","August","September","October","November","December"};
//	return (k < 1 || k > 12) ? name[0] : name[k];
//}

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


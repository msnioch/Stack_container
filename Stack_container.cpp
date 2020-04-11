/* Stack container - napisz program, który w 10-elementowej tablicy symuluje działanie stosu. Na początku stos jest pusty, a następnie ma się zapełniać lub opróżniać zgodnie z wczytanymi z wejścia poleceniami.
Wejście:	podana zostanie pewna nieokreślona liczba zestawów danych. Zestawy składają się albo z jednej linii zawierającej znak '-' (polecenie zdjęcia liczby ze stosu i wypisania jej na wyjście),
			albo dwóch linii, z których pierwsza zawiera znak + (polecenie wstawienia liczby na stos), a druga niewielką liczbę całkowitą. Poszczególne zestawy zostaną rozdzielone znakiem nowej linii.

Wyjście:	ma się pojawić ciąg napisów będących rezultatem wykonania pojawiających się na wejściu poleceń (jeżeli polecenie udało się wykonać, to wypisujemy jego rezultat: w przypadku wstawienia liczby na stos wypisujemy:
			"Value ... added on the stack."; w przypadku zdjęcia liczby: "Value ... removed from the stack.", a w przypadku błędu odpowiedni komentarz). Poszczególne napisy należy rozdzielić znakami nowej linii. */

#include <iostream>
#include <stack>					//Library for stack funtions.
#include <conio.h>					//Library for 'responsive control'.
#include <Windows.h>				//Library for Sleep (miliseconds) function.

using namespace std;

stack<int> StackArray;

int main()
{
	char choice;

	while (true)
	{
		cout << "########## Stack container ##########" << endl;

		cout << "########## Main menu ##########" << endl;

		cout << "1 - add value on top.\n2 - remove value from top." << endl;

		cout << "3 - show value on top.\n4 - show number of elements." << endl;

		cout << "5 - test if the stack is empty.\n6 - close application." << endl;

		cout << "Enter correct function value: ";

		choice = _getch();

		cout << endl;

		switch (choice)
		{
			case '1':

				if (StackArray.size() < 10)
				{
					int input;

					cout << "Enter value that should be added on the stack: ";

					cin >> input;

					StackArray.push(input);

					cout << "Value " << StackArray.top() << " added on the stack." << endl;

					Sleep(4000);
				}

				else
				{
					cout << "The stack is full! It has 10 elements." << endl;

					Sleep(4000);
				}

			break;

			case '2':
			
				if (!StackArray.empty())
				{
					cout << "Value " << StackArray.top() << " removed from the stack." << endl;

					StackArray.pop();

					Sleep(4000);
				}

				else
				{
					cout << "The stack is empty!" << endl;

					Sleep(4000);
				}

			break;

			case '3':

				if (!StackArray.empty())
				{
					cout << "Value " << StackArray.top() << " is on the top of the stack." << endl;

					Sleep(4000);
				}

				else
				{
					cout << "The stack is empty!" << endl;

					Sleep(4000);
				}

			break;

			case '4':

				if (!StackArray.empty())
				{
					cout << "Stack has " << StackArray.size() << " numbers of elements." << endl;

					Sleep(4000);
				}

				else
				{
					cout << "The stack is empty!" << endl;

					Sleep(4000);
				}

			break;

			case '5':
				
				if (StackArray.empty())
				{
					cout << "The stack is empty!" << endl;

					Sleep(4000);
				}

				else
				{
					cout << "The stack isn't empty!" << endl;

					Sleep(4000);
				}

			break;

			case '6':

				cout << "The application will be close in 4 seconds." << endl;

				Sleep(4000);

				exit(0);

			break;

			default:

				cout << "Please enter correctly number of function." << endl;

				Sleep(4000);

			break;
		}

		system("cls");
	}
	return 0;
}
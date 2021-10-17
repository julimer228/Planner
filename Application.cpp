#include "Application.h"
#include<cstdlib>
#include<Windows.h>
bool Application::Start()
{
	std::cout << "----------Organizer--------" << std::endl;
	std::cout << "Wybierz opcjê, wpisuj¹c odpowiedni prze³¹cznik:" << std::endl;
	std::cout << "(-o) - Organizer" << std::endl;
	std::cout << "(-c) - Ksi¹¿ka telefoniczna" << std::endl;
	std::cout << "(-x) - Zakoñczenie pracy programu" << std::endl;
	std::string option;
	std::cin >> option;

	if (option == "-o")
	{
		Planner();
	}
	else if (option == "-c")
	{
		ContactBook();
	}
	else if (option == "-x")
	{
		contacts.Save();
		tasks.Save();
		return false;
	}
}

void Application::Planner()
{
	while (true)
	{
		system("cls");
		std::cout << "----Organizer Zadañ---" << std::endl;
		std::cout << "Wybierz odpowiedni¹ opcjê wpisuj¹c odpowieni prze³¹cznik:" << std::endl;
		std::cout << "(-a) Dodaj nowe zadanie" << std::endl;
		std::cout << "(-r) Usuñ zadanie" << std::endl;
		std::cout << "(-s) Wyœwietl szczegó³y zadania" << std::endl;
		std::cout << "(-e) Edytuj zadanie" << std::endl;
		std::cout << "(-w) Wyœwietl wszystkie zadania w kolejnoœci chronologicznej" << std::endl;
		std::cout << "(-x) Powrót do menu g³ównego" << std::endl;
		std::string letter;
		std::cin >> letter;
		if (letter == "-a")
			tasks.Add();
		else if (letter == "-r")
		{
			std::cout << "Podaj indeks zadania do usuniêcia" << std::endl;
			int indeks;
			std::cin >> indeks;
			tasks.Remove(indeks);
		}
		else if (letter == "-s")
		{
			std::cout << "Podaj indeks zadania" << std::endl;
			int indeks;
			std::cin >> indeks;
			tasks.ShowInfo(indeks);
			Sleep(1500);
		}
		else if (letter == "-e")
		{
			std::cout << "Podaj indeks zadania" << std::endl;
			int indeks;
			std::cin >> indeks;
			tasks.Edit(indeks);
		}
		else if (letter == "-w")
		{
			tasks.ShowInOrder();
			Sleep(2000);
		}
		else if (letter == "-x")
		{
			return;
		}
		Sleep(1000);
	}
	
}

void Application::ContactBook()
{
	while (true)
	{
		system("cls");
		std::cout << "----Ksi¹¿ka Telefoniczna---" << std::endl;
		std::cout << "Wybierz odpowiedni¹ opcjê wpisuj¹c odpowieni prze³¹cznik:" << std::endl;
		std::cout << "(-a) Dodaj nowy kontakt" << std::endl;
		std::cout << "(-r) Usuñ kontakt" << std::endl;
		std::cout << "(-s) Wyœwietl szczegó³owe informacje o kontakcie" << std::endl;
		std::cout << "(-e) Edytuj kontakt" << std::endl;
		std::cout << "(-w) Wyœwietl wszystkie kontakty" << std::endl;
		std::cout << "(-x) Powrót do menu g³ównego" << std::endl;
		std::string letter;
		std::cin >> letter;
		if (letter == "-a")
			contacts.Add();
		else if (letter == "-r")
		{
			std::cout << "Podaj id kontatku" << std::endl;
			int indeks;
			std::cin >> indeks;
			contacts.Remove(indeks);
		}
		else if (letter == "-s")
		{
			std::cout << "Podaj id kontaktu" << std::endl;
			int indeks;
			std::cin >> indeks;
			contacts.ShowInfo(indeks);
		}
		else if (letter == "-e")
		{
			std::cout << "Podaj id kontaktu" << std::endl;
			int indeks;
			std::cin >> indeks;
			contacts.Edit(indeks);
		}
		else if (letter == "-w")
		{
			contacts.ShowInOrder();
			Sleep(2000);
		}
		else if (letter == "-x")
		{
			
			return;
		}
		Sleep(1000);
	}

}

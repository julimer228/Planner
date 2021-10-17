#include "Application.h"
#include<cstdlib>
#include<Windows.h>
bool Application::Start()
{
	std::cout << "----------Organizer--------" << std::endl;
	std::cout << "Wybierz opcj�, wpisuj�c odpowiedni prze��cznik:" << std::endl;
	std::cout << "(-o) - Organizer" << std::endl;
	std::cout << "(-c) - Ksi��ka telefoniczna" << std::endl;
	std::cout << "(-x) - Zako�czenie pracy programu" << std::endl;
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
		std::cout << "----Organizer Zada�---" << std::endl;
		std::cout << "Wybierz odpowiedni� opcj� wpisuj�c odpowieni prze��cznik:" << std::endl;
		std::cout << "(-a) Dodaj nowe zadanie" << std::endl;
		std::cout << "(-r) Usu� zadanie" << std::endl;
		std::cout << "(-s) Wy�wietl szczeg�y zadania" << std::endl;
		std::cout << "(-e) Edytuj zadanie" << std::endl;
		std::cout << "(-w) Wy�wietl wszystkie zadania w kolejno�ci chronologicznej" << std::endl;
		std::cout << "(-x) Powr�t do menu g��wnego" << std::endl;
		std::string letter;
		std::cin >> letter;
		if (letter == "-a")
			tasks.Add();
		else if (letter == "-r")
		{
			std::cout << "Podaj indeks zadania do usuni�cia" << std::endl;
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
		std::cout << "----Ksi��ka Telefoniczna---" << std::endl;
		std::cout << "Wybierz odpowiedni� opcj� wpisuj�c odpowieni prze��cznik:" << std::endl;
		std::cout << "(-a) Dodaj nowy kontakt" << std::endl;
		std::cout << "(-r) Usu� kontakt" << std::endl;
		std::cout << "(-s) Wy�wietl szczeg�owe informacje o kontakcie" << std::endl;
		std::cout << "(-e) Edytuj kontakt" << std::endl;
		std::cout << "(-w) Wy�wietl wszystkie kontakty" << std::endl;
		std::cout << "(-x) Powr�t do menu g��wnego" << std::endl;
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

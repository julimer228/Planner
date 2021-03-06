#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
static int id=200;
/// <summary>
/// Klasa odpowiedzialna za element (klasa bazowa dla klasy Task i Contact)
/// </summary>
class Item
{
protected:

	int ID;///Numer id
	/// <summary>
	/// Konstruktor domyślny przypisuje numer id do obiektu
	/// </summary>
	Item() :ID(id) { id++;};

public:
	/// <summary>
	/// Funkcja zwracająca numer id obiektu
	/// </summary>
	/// <returns></returns>
	int GetID() { return ID; }
	/// <summary>
	/// Funkcja wyświetlająca obiekt na ekranie
	/// </summary>
	virtual void Show() {std::cout <<"Numer ID: "<< ID << std::endl;}
	/// <summary>
	/// Funkcja wyświetlająca informację o obiekcie na ekranie
	/// </summary>
	virtual void ShowInfo(){std::cout <<"Informacje szczegółowe: " << std::endl;}
	/// <summary>
	/// Funkcja pozwalająca na edycję obiektu
	/// </summary>
	virtual void Edit() { std::cout <<"Rozpoczęto edycję: " << std::endl; }
};
#endif


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
	/// Konstruktor domyœlny przypisuje numer id do obiektu
	/// </summary>
	Item() :ID(id) { id++;};

public:
	/// <summary>
	/// Funkcja zwracaj¹ca numer id obiektu
	/// </summary>
	/// <returns></returns>
	int GetID() { return ID; }
	/// <summary>
	/// Funkcja wyœwietlaj¹ca obiekt na ekranie
	/// </summary>
	virtual void Show() {std::cout <<"Numer ID: "<< ID << std::endl;}
	/// <summary>
	/// Funkcja wyœwietlaj¹ca informacjê o obiekcie na ekranie
	/// </summary>
	virtual void ShowInfo(){std::cout <<"Informacje szczegó³owe: " << std::endl;}
	/// <summary>
	/// Funkcja pozwalaj¹ca na edycjê obiektu
	/// </summary>
	virtual void Edit() { std::cout <<"Rozpoczêto edycjê: " << std::endl; }
};
#endif


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
	/// Konstruktor domy�lny przypisuje numer id do obiektu
	/// </summary>
	Item() :ID(id) { id++;};

public:
	/// <summary>
	/// Funkcja zwracaj�ca numer id obiektu
	/// </summary>
	/// <returns></returns>
	int GetID() { return ID; }
	/// <summary>
	/// Funkcja wy�wietlaj�ca obiekt na ekranie
	/// </summary>
	virtual void Show() {std::cout <<"Numer ID: "<< ID << std::endl;}
	/// <summary>
	/// Funkcja wy�wietlaj�ca informacj� o obiekcie na ekranie
	/// </summary>
	virtual void ShowInfo(){std::cout <<"Informacje szczeg�owe: " << std::endl;}
	/// <summary>
	/// Funkcja pozwalaj�ca na edycj� obiektu
	/// </summary>
	virtual void Edit() { std::cout <<"Rozpocz�to edycj�: " << std::endl; }
};
#endif


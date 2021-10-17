#ifndef CONTACTCONTEINER_H
#define CONTACTCONTEINER_H
#include "Contact.h"
#include <vector>
#include <algorithm>
#include <fstream>
/// <summary>
/// Klasa reprezentuj�ca kontener kontakt�w
/// </summary>
class ContactConteiner
{
	std::vector <Contact> Contacts;///vector kontakt�w
public:
	/// <summary>
	/// Dodaje kontakt na koniec vectora
	/// </summary>
	void Add() { Contacts.push_back(Contact()); };
	/// <summary>
	/// Pokazuje informacje szczeg�owe o kontakcie po podaniu numeru ID
	/// </summary>
	/// <param name="id">numer ID</param>
	void ShowInfo(const int id);
	/// <summary>
	/// Wy�wietla kontakty alfabetycznie
	/// </summary>
	void ShowInOrder();
	/// <summary>
	/// Usuwa kontakt o wybranym numerze ID
	/// </summary>
	/// <param name="id">id</param>
	void Remove(const int id);
	/// <summary>
	/// Umo�liwia edycj� kontaktu
	/// </summary>
	/// <param name="id">id</param>
	void Edit(const int id);
	/// <summary>
	/// Zapisuje kontakty do pliku tekstowego
	/// </summary>
	void Save();
	//void Upload();
	/// <summary>
	/// Destruktor
	/// </summary>
	~ContactConteiner() { Contacts.clear(); }
};
#endif

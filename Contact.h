#ifndef CONTACT_H
#define CONTACT_H
#include "Item.h"
/// <summary>
/// Klasa reprezentuj�ca kontakt
/// </summary>
class Contact:public Item
{
	std::string name;//Imi�
	std::string surname;//Nazwisko
	std::string phone;//Numer telefonu
	std::string info;//Informacja o kontakcie

public:
	/// <summary>
	/// Konstruktor tworz�cy kontakt, dane podane s� przez uzytkownika
	/// </summary>
	Contact();

	/// <summary>
	/// Konstruktor parametryczny
	/// </summary>
	/// <param name="name">imi�</param>
	/// <param name="surname">nazwisko</param>
	/// <param name="phone">numer telefonu</param>
	/// <param name="info">opis</param>
	Contact(const std::string name, const std::string surname, const std::string phone, const std::string info);

	/// <summary>
	/// Wypisuje informacj� o kontakcie na ekranie konsoli
	/// </summary>
	void ShowInfo();
	/// <summary>
	/// Wypisuje dane kontaktowe na ekranie konsoli
	/// </summary>
	void Show() {
		Item::Show();
		std::cout << "Nazwisko: " << surname << " Imi�:" << name << std::endl;
		std::cout << "Numer telefonu: " <<phone<< std::endl;
	}
	/// <summary>
	/// Funkcja umo�liwa edycj� kontaktu przez u�ytkownika
	/// </summary>
	void Edit();

	/// <summary>
	/// Operator por�wnania
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true je�li kontakty s� takie same w przeciwnym wypadku false</returns>
	bool operator ==(const Contact contact_t) {
		if (name==contact_t.name&&surname==contact_t.surname) return true;
		return false;
	}
	/// <summary>
	/// Operator nier�wno�ci
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true, je�li kontakty s� r�ne false je�li s� takie same</returns>
	bool operator !=(const Contact contact_t)
	{
		if (name == contact_t.name && surname == contact_t.surname)return false;
		return true;
	}
	/// <summary>
	/// Operator mniejszo�ciowy
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true, je�li kontakt jest wcze�niej wed�ug kolejno�ci alfabetycznej</returns>
	bool operator <(const Contact contact_t);
	/// <summary>
	/// Operator wi�kszo�ciowy
	/// </summary>
	/// <param name="contact_t"></param>
	/// <returns>true je�li kontakt jest p�niej wed�ug kolejno�ci alfabetycznej</returns>
	bool operator >(const Contact contact_t);
	/// <summary>
	/// Operator mniejszy r�wny
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true, je�li kontakt znajduje si� wcze�niej wed�ug kolejno�ci alfabetycznej lub kontakty s� r�wne</returns>
	bool operator <=(const Contact contact_t);
	/// <summary>
	/// Operator wi�kszy r�wnny
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true je�li kontakt znajduje si� p�niej wed�ug kolejno�ci alfabetycznej lub w tym samym miejscu</returns>
	bool operator >=(const Contact contact_t);

	/// <summary>
	/// Metoda zwracaj�ca numer telefonu
	/// </summary>
	/// <returns>numer telefonu</returns>
	std::string GetPhone() { return phone; }
	/// <summary>
	/// Metoda zwracaj�ca imi�
	/// </summary>
	/// <returns>imi�</returns>
	std::string GetName() { return name; };
	/// <summary>
	/// Metoda zwracaj�ca nazwisko
	/// </summary>
	/// <returns>nazwisko</returns>
	std::string GetSurname() {
		return surname;
	}
	/// <summary>
	/// Metoda zwracaj�ca informacj� o kontakcie
	/// </summary>
	/// <returns>informacja</returns>
	std::string GetInfo() { return info; }
};
#endif


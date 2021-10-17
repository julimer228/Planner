#ifndef CONTACT_H
#define CONTACT_H
#include "Item.h"
/// <summary>
/// Klasa reprezentuj¹ca kontakt
/// </summary>
class Contact:public Item
{
	std::string name;//Imiê
	std::string surname;//Nazwisko
	std::string phone;//Numer telefonu
	std::string info;//Informacja o kontakcie

public:
	/// <summary>
	/// Konstruktor tworz¹cy kontakt, dane podane s¹ przez uzytkownika
	/// </summary>
	Contact();

	/// <summary>
	/// Konstruktor parametryczny
	/// </summary>
	/// <param name="name">imiê</param>
	/// <param name="surname">nazwisko</param>
	/// <param name="phone">numer telefonu</param>
	/// <param name="info">opis</param>
	Contact(const std::string name, const std::string surname, const std::string phone, const std::string info);

	/// <summary>
	/// Wypisuje informacjê o kontakcie na ekranie konsoli
	/// </summary>
	void ShowInfo();
	/// <summary>
	/// Wypisuje dane kontaktowe na ekranie konsoli
	/// </summary>
	void Show() {
		Item::Show();
		std::cout << "Nazwisko: " << surname << " Imiê:" << name << std::endl;
		std::cout << "Numer telefonu: " <<phone<< std::endl;
	}
	/// <summary>
	/// Funkcja umo¿liwa edycjê kontaktu przez u¿ytkownika
	/// </summary>
	void Edit();

	/// <summary>
	/// Operator porównania
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true jeœli kontakty s¹ takie same w przeciwnym wypadku false</returns>
	bool operator ==(const Contact contact_t) {
		if (name==contact_t.name&&surname==contact_t.surname) return true;
		return false;
	}
	/// <summary>
	/// Operator nierównoœci
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true, jeœli kontakty s¹ ró¿ne false jeœli s¹ takie same</returns>
	bool operator !=(const Contact contact_t)
	{
		if (name == contact_t.name && surname == contact_t.surname)return false;
		return true;
	}
	/// <summary>
	/// Operator mniejszoœciowy
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true, jeœli kontakt jest wczeœniej wed³ug kolejnoœci alfabetycznej</returns>
	bool operator <(const Contact contact_t);
	/// <summary>
	/// Operator wiêkszoœciowy
	/// </summary>
	/// <param name="contact_t"></param>
	/// <returns>true jeœli kontakt jest póŸniej wed³ug kolejnoœci alfabetycznej</returns>
	bool operator >(const Contact contact_t);
	/// <summary>
	/// Operator mniejszy równy
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true, jeœli kontakt znajduje siê wczeœniej wed³ug kolejnoœci alfabetycznej lub kontakty s¹ równe</returns>
	bool operator <=(const Contact contact_t);
	/// <summary>
	/// Operator wiêkszy równny
	/// </summary>
	/// <param name="contact_t">kontakt</param>
	/// <returns>true jeœli kontakt znajduje siê póŸniej wed³ug kolejnoœci alfabetycznej lub w tym samym miejscu</returns>
	bool operator >=(const Contact contact_t);

	/// <summary>
	/// Metoda zwracaj¹ca numer telefonu
	/// </summary>
	/// <returns>numer telefonu</returns>
	std::string GetPhone() { return phone; }
	/// <summary>
	/// Metoda zwracaj¹ca imiê
	/// </summary>
	/// <returns>imiê</returns>
	std::string GetName() { return name; };
	/// <summary>
	/// Metoda zwracaj¹ca nazwisko
	/// </summary>
	/// <returns>nazwisko</returns>
	std::string GetSurname() {
		return surname;
	}
	/// <summary>
	/// Metoda zwracaj¹ca informacjê o kontakcie
	/// </summary>
	/// <returns>informacja</returns>
	std::string GetInfo() { return info; }
};
#endif


#include "Contact.h"
bool CheckNumber(std::string number)
{
	for (int i = 0; i < 9; i++)
	{
		if (number[i] < '0' || number[i]>'9')
			return false;
	}
	return true;
}
Contact::Contact():Item()
{
	std::cout << "Podaj imiê" << std::endl;
	std::cin >> name;
	std::cout << "Podaj nazwisko" << std::endl;
	std::cin >> surname;
	std::cout << "Podaj opis kontaktu" <<std::endl;
	getchar();
	std::getline(std::cin, info);
	std::cout << "Podaj numer telefonu" << std::endl;
	std::string number;
	std::cin >> number;
	if (number.size() == 9&&CheckNumber(number))phone = number; else throw std::exception("Niepoprawna liczba cyfr w numerze telefonu!");
	std::cout << "Kontakt zosta³ dodany" << std::endl;
}

Contact::Contact(const std::string name_t, const std::string surname_t, const std::string phone_t, const std::string info_t)
	:Item(),name(name_t),surname(surname_t),info(info_t)
{
	if (phone.size() == 9)phone = phone_t; else throw std::exception("Niepoprawna liczba cyfr w numerze telefonu!");
}

void Contact::ShowInfo()
{
	Item::ShowInfo();
	std::cout << "Imiê: " << name << "\nNazwisko: " << surname << std::endl;
	std::cout << "Numer telefonu: " << phone << std::endl;
	std::cout << "Opis: " <<info<< std::endl;
}

void Contact::Edit()
{
	Item::Edit();
	
	std::cout << "Jeœli chcesz zostawiæ aktualne dane wpisz pomiñ element wpisuj¹c =" << std::endl;
	std::string name_t, surname_t, phone_t, info_t;
	std::cout << "Imiê: ";
	std::cin >> name_t;
	std::cout << "Nazwisko: ";
	std::cin >> surname_t;
	std::cout << "Numer telefonu: ";
	std::cin >> phone_t;
	std::cout << "Opis: ";
	getchar();
	std::getline(std::cin, info_t);
	if (name_t!="=")
		name = name_t;
	if (surname_t!="=")
		surname = surname_t;
	
	if (info_t!="=")
		info = info_t;
	if (phone_t.size() == 9 && CheckNumber(phone_t))
	{
		phone = phone_t;
	}
	else if (phone != "=")std::cout << "Numer nie zostanie zmieniony.\n";
}

bool Contact::operator<(const Contact contact_t)
{
	if (surname<contact_t.surname||((surname==contact_t.surname)&&(name>contact_t.name)))
		return true;
	return false;
}

bool Contact::operator>(const Contact contact_t)
{
	if (surname>contact_t.surname||(surname==contact_t.surname&&name<contact_t.name))
		return true;
	return false;
}

bool Contact::operator<=(const Contact contact_t)
{
	if (surname <= contact_t.surname&&name<=contact_t.name)
		return true;
	return false;
}

bool Contact::operator>=(const Contact contact_t)
{
	if (surname >= contact_t.surname&&name>=contact_t.surname)
		return true;
		return false;
}

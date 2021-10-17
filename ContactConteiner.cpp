#include "ContactConteiner.h"

void ContactConteiner::ShowInfo(const int id)
{
	for (int i = 0; i < Contacts.size(); i++)
	{
		if (id == Contacts[i].GetID())
			Contacts[i].ShowInfo();
	}
}

void ContactConteiner::ShowInOrder()
{
	if (Contacts.empty())
	{
		std::cout << "Brak kontaktów do wyœwietlenia." << std::endl;
		return;
	}
	std::sort(Contacts.begin(), Contacts.end());
	for (int i = 0; i < Contacts.size(); i++)
	{
		Contacts[i].Show();
		std::cout << std::endl;
	}
}

void ContactConteiner::Remove(const int id)
{
	for (int i = 0; i < Contacts.size(); i++)
	{
		if (id == Contacts[i].GetID())
			Contacts.erase(Contacts.begin() + i);
	}
}

void ContactConteiner::Edit(const int id)
{
	for (int i = 0; i < Contacts.size(); i++)
	{
		if (id == Contacts[i].GetID())
			Contacts[i].Edit();
	}
}

void ContactConteiner::Save()
{
	std::fstream file("Contacts.txt");
	if (file)
	{
		for (int i = 0; i < Contacts.size(); i++)
		{
			file << Contacts[i].GetName() <<std::endl<< Contacts[i].GetSurname() <<std::endl<< Contacts[i].GetInfo() <<std::endl<< Contacts[i].GetPhone() << std::endl;
		}
	}
	file.close();
}

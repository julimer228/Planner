#include "Task.h"

Importance ImportanceToEnum(const std::string importance_string)
{
	if (importance_string == "niski")
		return low;
	if (importance_string == "sredni")
		return medium;
	if (importance_string == "wysoki")
		return high;
	else throw std::exception("Niew³aœciwa waga!");
}
std::string ImportanceToString(const Importance importance)
{
	switch (importance)
	{
	case 1: return "niski";
	case 2: return "sredni";
	case 3: return "wysoki";
	default:
		throw std::exception("B³¹d niepoprawnie odczytano priorytet");
		break;
	}
}
Task::Task()
{
	
	std::cout << "Podaj nazwê zadania:" << std::endl;
	getchar();
	std::getline(std::cin, name);
	std::cout << "Podaj opis zadania:" << std::endl;
	std::getline(std::cin, info);
	std::cout<< "Podaj priorytet zadania: niski, sredni, wysoki" << std::endl;
	std::string importance_string;
	std::cin >> importance_string;
	importance = ImportanceToEnum(importance_string);

	std::cout << "Podaj datê w formacie godzina minuta dzieñ miesi¹c rok" << std::endl;
	unsigned int data_tab[5];
	for (int i = 0; i < 5; i++)
		std::cin >> data_tab[i];
	*this = Task(name, info,importance, data_tab[0], data_tab[1], data_tab[2], data_tab[3], data_tab[4]);
	if (this)
		std::cout << "Zadanie zosta³o dodane do organizera." << std::endl;
	else std::cout << "Niepoprawne dane! Nie mo¿na dodaæ zadania." << std::endl;
	
}

bool Task::operator==(const Task task_t)
{
	if (ID == task_t.ID) return true;
	return false;
}

bool Task::operator!=(const Task task_t)
{
	if (ID != task_t.ID) return true;
	return false;
}

bool Task::operator<(const Task task_t)
{
	if (data < task_t.data)
		return true;
	return false;
}

bool Task::operator>(const Task task_t)
{
	if (data > task_t.data)
		return true;
	return false;
}

void Task::Show()
{
	Item::Show();
	std::cout << name <<"\nPriorytet: "<<ImportanceToString(importance) << std::endl;
	data.ShowData();
}

void Task::Edit()
{
	Item::Edit();
	std::string name_t;
	std::string info_t;
	std::string importance_t;
	std::string hour_t, year_t, minute_t, month_t, day_t;
	std::cout << "Je¿eli chcesz aby jakaœ informacja nie zosta³a zmieniona wpisz =" << std::endl;
	std::cout << "Nazwa: ";
	getchar();
	std::getline(std::cin, name_t);
	std::cout << "Opis: ";
	std::getline(std::cin, info_t);
	std::cout << "Podaj priorytet (niski, œredni, wysoki):" << std::endl;
	std::cin >> importance_t;
	std::cout << "Podaj godzinê: " << std::endl;
	std::cin >> hour_t;
	std::cout << "Podaj minutê: " << std::endl;
	std::cin >> minute_t;
	std::cout << "Podaj dzieñ: "<<std::endl;
	std::cin >> day_t;
	std::cout << "Podaj miesi¹c: "<<std::endl;
	std::cin >> month_t;
	std::cout << "Podaj rok: "<<std::endl;
	std::cin >> year_t;

	if (name_t != "=")
		name = name_t;
	if (info_t != "=")
		info = info_t;
	if (importance_t != "=")
		importance = ImportanceToEnum(importance_t);
	if (hour_t != "=")
		data.SetHour(atoi(hour_t.c_str()));
	if (minute_t != "=")
		data.SetMinute(atoi(minute_t.c_str()));
		if (month_t != "=")
			data.SetMonth(atoi(month_t.c_str()));
	if (year_t != "=")
		data.SetYear(atoi(year_t.c_str()));
	if (day_t != "=")
		data.SetDay(atoi(day_t.c_str()), data.GetMonth(), data.GetYear());
}

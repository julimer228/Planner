#ifndef TASK_H
#define TASK_H
#include "Item.h"
#include "Data.h"
#include <string>
/// <summary>
/// Priorytet zadania niski, sredni lub wysoki
/// </summary>
enum Importance
{
	low=1, medium, high
};
/// <summary>
/// Funkcja zwracaj¹ca priorytet na podstawie podanego napisu, jeœli priorytet jest niepoprawny, funkcja zwróci wyj¹tek
/// </summary>
/// <param name="importance_string">napis</param>
/// <returns>odpowiedni priorytet</returns>
Importance ImportanceToEnum(const std::string importance_string);
/// <summary>
/// Funkcja zwraca napis odpowiedni dla danego priorytetu
/// </summary>
/// <param name="importance">priorytet</param>
/// <returns>zapis priorytetu w postaci ³añcucha znaków</returns>
std::string ImportanceToString(const Importance importance);

/// <summary>
/// Klasa reprezentuj¹ca zadanie
/// </summary>
class Task:public Item
{
	std::string name; ///nazwa zadania
	std::string info; ///krótki opis zadania
	Importance importance;///priorytet
	Data data; ///data zadania

public:
	/// <summary>
	/// Zwraca nazwê zadania
	/// </summary>
	/// <returns>nazwa zadania</returns>
	std::string GetName() { return name; }
	/// <summary>
	/// Zwraca informacjê o zadaniu
	/// </summary>
	/// <returns>informacja o zadaniu</returns>
	std::string GetInfo() { return info; }
	/// <summary>
	/// Zwraca priorytet w postaci ³añcucha znaków
	/// </summary>
	/// <returns>priorytet</returns>
	std::string GetImportance() { return ImportanceToString(importance); }
	/// <summary>
	/// Zwraca datê
	/// </summary>
	/// <returns>data</returns>
	Data GetData() { return data; }

	/// <summary>
	/// Konstruktor parametryczny 
	/// </summary>
	/// <param name="name_t">nazwa zadania</param>
	/// <param name="info_t">opis zadania</param>
	/// <param name="importance_t">priorytet</param>
	/// <param name="hour">godzina</param>
	/// <param name="minute">minuta</param>
	/// <param name="day">dzieñ</param>
	/// <param name="month">miesi¹c</param>
	/// <param name="year">rok</param>
	Task(const std::string name_t, const std::string info_t,const Importance importance_t, const unsigned int hour, 
		const unsigned int minute,const unsigned int day, const unsigned int month, 
		const unsigned int year ) :name(name_t), info(info_t),importance(importance_t), data(hour, minute, day, month,year){}
	/// <summary>
	/// Konstruktor tworz¹cy zadania
	/// </summary>
	/// <param name="name_t">nazwa zadania</param>
	/// <param name="info_t">opis zadania</param>
	/// <param name="importance_t">priorytet</param>
	/// <param name="hour">godzina</param>
	/// <param name="minute">minuta</param>
	/// <param name="day">dzieñ</param>
	/// <param name="month">miesi¹c</param>
	/// <param name="year">rok</param>
	Task(const std::string name_t, const std::string info_t, const std::string importance_t, const unsigned int hour,
		const unsigned int minute, const unsigned int day, const unsigned int month,
		const unsigned int year) :name(name_t), info(info_t), data(hour, minute, day, month, year) {
		
	}


	/// <summary>
	/// Konstruktor tworz¹cy zadanie
	/// </summary>
	/// <param name="name_t">nazwa zadania</param>
	/// <param name="info_t">informacja o zadaniu</param>
	/// <param name="importance_t">priorytet</param>
	/// <param name="data_t">data</param>
	Task(const std::string name_t, const std::string info_t, const Importance importance_t, Data data_t)
		:name(name_t), info(info_t), importance(importance_t), data(data_t){}

	/// <summary>
	/// Konstruktor pobieraj¹cy dane od u¿ytkownika
	/// </summary>
	Task();
	
	/// <summary>
	/// Operator porównania
	/// </summary>
	/// <param name="task_t">zadanie</param>
	/// <returns>true jeœli zadania s¹ takie same</returns>
	bool operator ==(const Task task_t);
	/// <summary>
	/// Operator nierównoœci
	/// </summary>
	/// <param name="task_t">zadanie</param>
	/// <returns>true jeœli zadania s¹ ró¿ne</returns>
	bool operator !=(const Task task_t);
	/// <summary>
	/// Operator mniejszoœciowy
	/// </summary>
	/// <param name="task_t">zadanie</param>
	/// <returns></returns>
	bool operator <(const Task task_t);
	/// <summary>
	/// Operator wiêkszoœciowy
	/// </summary>
	/// <param name="task_t">zadanie</param>
	/// <returns>true jeœli zadanie jest wiêksze, false jeœli jest mniejsze</returns>
	bool operator >(const Task task_t);

	/// <summary>
	/// Metoda wypisuj¹ca informacjê o zadaniu na ekrania, nie wyœwietla opisu
	/// </summary>
	void Show();
	/// <summary>
	/// Metoda umo¿liwiaj¹ca edycjê zadania przez u¿ytkownika
	/// </summary>
	void Edit();
	/// <summary>
	/// Metoda wyœwietlaj¹ca informacje szczegó³owe o zadaniu
	/// </summary>
	void ShowInfo() {
		Item::ShowInfo();
		Show();
		std::cout<<"Opis:\n"<<info << std::endl;
	}
};
#endif

#ifndef TASKCONTEINER_H
#define TASKCONTEINER_H
#include <vector>
#include <algorithm>
#include<fstream>
#include<sstream>
#include "Task.h"
/// <summary>
/// Klasa reprezentująca kontener z zadaniami
/// </summary>
class TaskConteiner
{
	std::vector <Task> Tasks;//vector zadań

public:
	/// <summary>
	/// Konstruktor tworzący pusty vector
	/// </summary>
	TaskConteiner() :Tasks(0) {};
	/// <summary>
	/// Funkcja umożliwiająca dodanie zadania przez użytkownika
	/// </summary>
	void Add() {
		Tasks.push_back(Task());
	}
	/// <summary>
	/// Funkcja umożliwiająca odczyt zadania z pliku tekstowego
	/// </summary>
	/// <param name="task">zadanie</param>
	void Add(const Task &task);
	/// <summary>
	/// Funkcja umożliwiająca edycję zadania o podanym numerze ID
	/// </summary>
	/// <param name="id">numer id</param>
	void Edit(const int id);
	/// <summary>
	/// Funkcja umożliwiająca usunięcie zadania o podanym numerze ID
	/// </summary>
	/// <param name="id">numer id</param>
	void Remove(const int id);
	/// <summary>
	/// Funkcja umożliwiająca wyświetlenie informacji o danym zadaniu
	/// </summary>
	/// <param name="id">numer id</param>
	void ShowInfo(const int id);
	/// <summary>
	/// Funkcja wyświetlająca wszystkie zadania w kolejności chronologicznej
	/// </summary>
	void ShowInOrder();
	/// <summary>
	/// Funkcja zapisująca zadania do pliku tekstowego
	/// </summary>
	void Save();
	/// <summary>
	/// Funkcja ładująca zadania z pliku tekstowego
	/// </summary>
	void Upload();
	/// <summary>
	/// Destruktor
	/// </summary>
	~TaskConteiner() { Tasks.clear(); }
};
#endif


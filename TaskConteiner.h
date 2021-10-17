#ifndef TASKCONTEINER_H
#define TASKCONTEINER_H
#include <vector>
#include <algorithm>
#include<fstream>
#include<sstream>
#include "Task.h"
/// <summary>
/// Klasa reprezentuj�ca kontener z zadaniami
/// </summary>
class TaskConteiner
{
	std::vector <Task> Tasks;//vector zada�

public:
	/// <summary>
	/// Konstruktor tworz�cy pusty vector
	/// </summary>
	TaskConteiner() :Tasks(0) {};
	/// <summary>
	/// Funkcja umo�liwiaj�ca dodanie zadania przez u�ytkownika
	/// </summary>
	void Add() {
		Tasks.push_back(Task());
	}
	/// <summary>
	/// Funkcja umo�liwiaj�ca odczyt zadania z pliku tekstowego
	/// </summary>
	/// <param name="task">zadanie</param>
	void Add(const Task &task);
	/// <summary>
	/// Funkcja umo�liwiaj�ca edycj� zadania o podanym numerze ID
	/// </summary>
	/// <param name="id">numer id</param>
	void Edit(const int id);
	/// <summary>
	/// Funkcja umo�liwiaj�ca usuni�cie zadania o podanym numerze ID
	/// </summary>
	/// <param name="id">numer id</param>
	void Remove(const int id);
	/// <summary>
	/// Funkcja umo�liwiaj�ca wy�wietlenie informacji o danym zadaniu
	/// </summary>
	/// <param name="id">numer id</param>
	void ShowInfo(const int id);
	/// <summary>
	/// Funkcja wy�wietlaj�ca wszystkie zadania w kolejno�ci chronologicznej
	/// </summary>
	void ShowInOrder();
	/// <summary>
	/// Funkcja zapisuj�ca zadania do pliku tekstowego
	/// </summary>
	void Save();
	/// <summary>
	/// Funkcja �aduj�ca zadania z pliku tekstowego
	/// </summary>
	void Upload();
	/// <summary>
	/// Destruktor
	/// </summary>
	~TaskConteiner() { Tasks.clear(); }
};
#endif


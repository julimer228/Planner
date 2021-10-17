#ifndef TASKCONTEINER_H
#define TASKCONTEINER_H
#include <vector>
#include <algorithm>
#include<fstream>
#include<sstream>
#include "Task.h"
/// <summary>
/// Klasa reprezentuj¹ca kontener z zadaniami
/// </summary>
class TaskConteiner
{
	std::vector <Task> Tasks;//vector zadañ

public:
	/// <summary>
	/// Konstruktor tworz¹cy pusty vector
	/// </summary>
	TaskConteiner() :Tasks(0) {};
	/// <summary>
	/// Funkcja umo¿liwiaj¹ca dodanie zadania przez u¿ytkownika
	/// </summary>
	void Add() {
		Tasks.push_back(Task());
	}
	/// <summary>
	/// Funkcja umo¿liwiaj¹ca odczyt zadania z pliku tekstowego
	/// </summary>
	/// <param name="task">zadanie</param>
	void Add(const Task &task);
	/// <summary>
	/// Funkcja umo¿liwiaj¹ca edycjê zadania o podanym numerze ID
	/// </summary>
	/// <param name="id">numer id</param>
	void Edit(const int id);
	/// <summary>
	/// Funkcja umo¿liwiaj¹ca usuniêcie zadania o podanym numerze ID
	/// </summary>
	/// <param name="id">numer id</param>
	void Remove(const int id);
	/// <summary>
	/// Funkcja umo¿liwiaj¹ca wyœwietlenie informacji o danym zadaniu
	/// </summary>
	/// <param name="id">numer id</param>
	void ShowInfo(const int id);
	/// <summary>
	/// Funkcja wyœwietlaj¹ca wszystkie zadania w kolejnoœci chronologicznej
	/// </summary>
	void ShowInOrder();
	/// <summary>
	/// Funkcja zapisuj¹ca zadania do pliku tekstowego
	/// </summary>
	void Save();
	/// <summary>
	/// Funkcja ³aduj¹ca zadania z pliku tekstowego
	/// </summary>
	void Upload();
	/// <summary>
	/// Destruktor
	/// </summary>
	~TaskConteiner() { Tasks.clear(); }
};
#endif


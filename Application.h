#ifndef APPLICATION_H
#define APPLICATION_H
#include "TaskConteiner.h"
#include "ContactConteiner.h"
/// <summary>
/// Funkcja reprezentuj�ca aplikacj� 
/// </summary>
class Application
{
	TaskConteiner tasks; ///obiekt przechowuj�cy list� zada�
	ContactConteiner contacts; ///obiekt przechowywuj�cy list� kontakt�w

public:
	/// <summary>
	/// Konstruktor domy�lny
	/// </summary>
	Application() :tasks(), contacts() {};
	/// <summary>
	/// G��wna funkcja programu, umo�liwa obs�ug� zdarze� u�ytkownika
	/// </summary>
	/// <returns>true, je�li nie zako�czono pracy z programem, false je�li zako�czono</returns>
	bool Start();
	/// <summary>
	/// Funkcja umo�liwiaj�ca obs�ug� polece� u�ytkownika zwi�zanych z organizerem
	/// </summary>
	void Planner();
	/// <summary>
	/// Funkcja umo�liwiaj�ca obs�ug� polece� u�ytkownika zwi�zanych z ksi��k� telefoniczn�
	/// </summary>
	void ContactBook();
	
	
};
#endif


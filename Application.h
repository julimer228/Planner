#ifndef APPLICATION_H
#define APPLICATION_H
#include "TaskConteiner.h"
#include "ContactConteiner.h"
/// <summary>
/// Funkcja reprezentuj¹ca aplikacjê 
/// </summary>
class Application
{
	TaskConteiner tasks; ///obiekt przechowuj¹cy listê zadañ
	ContactConteiner contacts; ///obiekt przechowywuj¹cy listê kontaktów

public:
	/// <summary>
	/// Konstruktor domyœlny
	/// </summary>
	Application() :tasks(), contacts() {};
	/// <summary>
	/// G³ówna funkcja programu, umo¿liwa obs³ugê zdarzeñ u¿ytkownika
	/// </summary>
	/// <returns>true, jeœli nie zakoñczono pracy z programem, false jeœli zakoñczono</returns>
	bool Start();
	/// <summary>
	/// Funkcja umo¿liwiaj¹ca obs³ugê poleceñ u¿ytkownika zwi¹zanych z organizerem
	/// </summary>
	void Planner();
	/// <summary>
	/// Funkcja umo¿liwiaj¹ca obs³ugê poleceñ u¿ytkownika zwi¹zanych z ksi¹¿k¹ telefoniczn¹
	/// </summary>
	void ContactBook();
	
	
};
#endif


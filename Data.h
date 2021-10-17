#ifndef DATA_H
#define DATA_H
#include <iostream>



/// <summary>
/// Funkcja sprawdza poprawno�� minuty
/// </summary>
/// <param name="m">minuta</param>
/// <returns>true je�li minutaj jest poprawna, false je�li minuta nie jest poprawna</returns>
inline bool CheckMinute(const unsigned int m) { if (m < 60)return true; return false; }
/// <summary>
/// Funkcja sprawdzaj�ca poprawno�� godziny
/// </summary>
/// <param name="h">godzina</param>
/// <returns>true je�li godzina jest poprawna, false je�li nie jest</returns>
inline bool CheckHour(const unsigned int h) { if (h < 24) return true; return false; }
/// <summary>
/// Funkcja sprawdzaj�ca poprawno�� dnia miesi�ca
/// </summary>
/// <param name="d">dzie�</param>
/// <param name="mm">miesi�c</param>
/// <param name="IsLeapYear">informacja o tym, czy rok jest przest�pny</param>
/// <returns>true je�li dzie� jest poprawny, false je�li nie jest</returns>
inline bool CheckDay(const unsigned int d, const unsigned int mm, bool IsLeapYear);
/// <summary>
/// Funkcja sprawdzaj�ca poprawno�� miesi�ca
/// </summary>
/// <param name="m">miesi�c</param>
/// <returns>true, je�li dzie� miesi�ca jest poprawny, false je�li nie jest</returns>
inline bool CheckMonth(const unsigned int m) { if (m < 13 && m>0)return true; return false; }
/// <summary>
/// Funkcja sprawdzaj�ca poprawno�� roku
/// </summary>
/// <param name="year">rok</param>
/// <returns>true je�li rok jest poprawny, false je�li nie jest</returns>
inline bool CheckYear(const unsigned int year) { if (year > 0)return true; return false; }
/// <summary>
/// Funkcja sprawdzaj�ca czy rok jest przest�pny
/// </summary>
/// <param name="y">rok</param>
/// <returns>true je�li rok jest przest�pny, false je�li  nie jest</returns>
bool IsYearLeap(const unsigned int y);
/// <summary>
/// Klasa reprezentuj�ca dat�
/// </summary>
class Data
{
	unsigned int Minute;///Minuta
	unsigned int Hour;///Godzina
	unsigned int Day;///Dzie�
	unsigned int Month;///Miesi�c
	unsigned int Year;///Rok

public:
	/// <summary>
	/// Metoda zwracaj�ca minut�
	/// </summary>
	/// <returns>minuta</returns>
	unsigned int GetMinute() const { return Minute; }
	/// <summary>
	/// Metoda zwracaj�ca dzie�
	/// </summary>
	/// <returns>dzie�</returns>
	unsigned int GetDay() const { return Day; }
	/// <summary>
	/// Metoda zwracaj�ca godzin�
	/// </summary>
	/// <returns>godzina</returns>
	unsigned int GetHour()const { return Hour; }
	/// <summary>
	/// Metoda zwracaj�ca miesi�c
	/// </summary>
	/// <returns>miesi�c</returns>
	unsigned int GetMonth()const { return Month; }
	/// <summary>
	/// Metoda zwracaj�ca rok
	/// </summary>
	/// <returns>rok</returns>
	unsigned int GetYear()const { return Year; }

	/// <summary>
	/// Metoda zmieniaj�ca minut�
	/// </summary>
	/// <param name="m">minuta</param>
	void SetMinute(unsigned int m) { if (CheckMinute(m))Minute = m;}
	/// <summary>
	/// Metoda zmieniaj�ca godzin�
	/// </summary>
	/// <param name="h">godzina</param>
	void SetHour(unsigned int h) { if (CheckHour(h))Hour = h; }
	/// <summary>
	/// Metoda zmieniaj�ca dzie�
	/// </summary>
	/// <param name="day">dzie�</param>
	/// <param name="month">miesi�c</param>
	/// <param name="year">rok</param>
	void SetDay(unsigned int day, unsigned int month, unsigned int year) { if (CheckDay(day, month, IsYearLeap(year)))Day = day; }
	/// <summary>
	/// Metoda zmieniaj�ca miesi�c
	/// </summary>
	/// <param name="m">miesi�c</param>
	void SetMonth(unsigned int m) { if (CheckMonth(m))Month = m; }
	/// <summary>
	/// Metoda zmieniaj�ca rok
	/// </summary>
	/// <param name="y">rok</param>
	void SetYear(unsigned int y) { if (CheckYear(y))Year = y; }

	
	/// <summary>
	/// Konstruktor tworz�cy dat� po podaniu poprawnych parametr�w
	/// </summary>
	/// <param name="h">godzina</param>
	/// <param name="m">minuta</param>
	/// <param name="d">dzie�</param>
	/// <param name="mm">miesi�c</param>
	/// <param name="y">rok</param>
	Data(const unsigned int h, const unsigned int m, const unsigned int d, const unsigned int mm, const unsigned int y);
	/// <summary>
	/// Konstruktor domy�lny, data zostaje ustawiona na 0:00 1-01-2020
	/// </summary>
	Data() :Hour(0), Minute(0), Day(1), Month(1), Year(2020) {};

	/// <summary>
	/// Metoda wypisuj�ca dat� na ekranie konsoli
	/// </summary>
	void ShowData();


	/// <summary>
	/// Operator por�wnania
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>true je�li daty s� r�wne</returns>
	bool operator == (const Data data);
	/// <summary>
	/// Operator nier�wno�ci
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>true je�li daty nie s� r�wne</returns>
	bool operator !=(const Data data);
	/// <summary>
	/// Operator mniejszo�ciowy, data wcze�niejsza jest mniejsza
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>true je�li data by�a mniejsza</returns>
	bool operator< (const Data data);
	/// <summary>
	/// Operator wi�kszo�ciowy
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>true je�li data by�a  wi�ksza</returns>
	bool operator>(const Data data);
	/// <summary>
	/// Operator przypisania
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>Nowo przypisana data</returns>
	Data& operator =(const Data& data);
};





#endif


#ifndef DATA_H
#define DATA_H
#include <iostream>



/// <summary>
/// Funkcja sprawdza poprawnoœæ minuty
/// </summary>
/// <param name="m">minuta</param>
/// <returns>true jeœli minutaj jest poprawna, false jeœli minuta nie jest poprawna</returns>
inline bool CheckMinute(const unsigned int m) { if (m < 60)return true; return false; }
/// <summary>
/// Funkcja sprawdzaj¹ca poprawnoœæ godziny
/// </summary>
/// <param name="h">godzina</param>
/// <returns>true jeœli godzina jest poprawna, false jeœli nie jest</returns>
inline bool CheckHour(const unsigned int h) { if (h < 24) return true; return false; }
/// <summary>
/// Funkcja sprawdzaj¹ca poprawnoœæ dnia miesi¹ca
/// </summary>
/// <param name="d">dzieñ</param>
/// <param name="mm">miesi¹c</param>
/// <param name="IsLeapYear">informacja o tym, czy rok jest przestêpny</param>
/// <returns>true jeœli dzieñ jest poprawny, false jeœli nie jest</returns>
inline bool CheckDay(const unsigned int d, const unsigned int mm, bool IsLeapYear);
/// <summary>
/// Funkcja sprawdzaj¹ca poprawnoœæ miesi¹ca
/// </summary>
/// <param name="m">miesi¹c</param>
/// <returns>true, jeœli dzieñ miesi¹ca jest poprawny, false jeœli nie jest</returns>
inline bool CheckMonth(const unsigned int m) { if (m < 13 && m>0)return true; return false; }
/// <summary>
/// Funkcja sprawdzaj¹ca poprawnoœæ roku
/// </summary>
/// <param name="year">rok</param>
/// <returns>true jeœli rok jest poprawny, false jeœli nie jest</returns>
inline bool CheckYear(const unsigned int year) { if (year > 0)return true; return false; }
/// <summary>
/// Funkcja sprawdzaj¹ca czy rok jest przestêpny
/// </summary>
/// <param name="y">rok</param>
/// <returns>true jeœli rok jest przestêpny, false jeœli  nie jest</returns>
bool IsYearLeap(const unsigned int y);
/// <summary>
/// Klasa reprezentuj¹ca datê
/// </summary>
class Data
{
	unsigned int Minute;///Minuta
	unsigned int Hour;///Godzina
	unsigned int Day;///Dzieñ
	unsigned int Month;///Miesi¹c
	unsigned int Year;///Rok

public:
	/// <summary>
	/// Metoda zwracaj¹ca minutê
	/// </summary>
	/// <returns>minuta</returns>
	unsigned int GetMinute() const { return Minute; }
	/// <summary>
	/// Metoda zwracaj¹ca dzieñ
	/// </summary>
	/// <returns>dzieñ</returns>
	unsigned int GetDay() const { return Day; }
	/// <summary>
	/// Metoda zwracaj¹ca godzinê
	/// </summary>
	/// <returns>godzina</returns>
	unsigned int GetHour()const { return Hour; }
	/// <summary>
	/// Metoda zwracaj¹ca miesi¹c
	/// </summary>
	/// <returns>miesi¹c</returns>
	unsigned int GetMonth()const { return Month; }
	/// <summary>
	/// Metoda zwracaj¹ca rok
	/// </summary>
	/// <returns>rok</returns>
	unsigned int GetYear()const { return Year; }

	/// <summary>
	/// Metoda zmieniaj¹ca minutê
	/// </summary>
	/// <param name="m">minuta</param>
	void SetMinute(unsigned int m) { if (CheckMinute(m))Minute = m;}
	/// <summary>
	/// Metoda zmieniaj¹ca godzinê
	/// </summary>
	/// <param name="h">godzina</param>
	void SetHour(unsigned int h) { if (CheckHour(h))Hour = h; }
	/// <summary>
	/// Metoda zmieniaj¹ca dzieñ
	/// </summary>
	/// <param name="day">dzieñ</param>
	/// <param name="month">miesi¹c</param>
	/// <param name="year">rok</param>
	void SetDay(unsigned int day, unsigned int month, unsigned int year) { if (CheckDay(day, month, IsYearLeap(year)))Day = day; }
	/// <summary>
	/// Metoda zmieniaj¹ca miesi¹c
	/// </summary>
	/// <param name="m">miesi¹c</param>
	void SetMonth(unsigned int m) { if (CheckMonth(m))Month = m; }
	/// <summary>
	/// Metoda zmieniaj¹ca rok
	/// </summary>
	/// <param name="y">rok</param>
	void SetYear(unsigned int y) { if (CheckYear(y))Year = y; }

	
	/// <summary>
	/// Konstruktor tworz¹cy datê po podaniu poprawnych parametrów
	/// </summary>
	/// <param name="h">godzina</param>
	/// <param name="m">minuta</param>
	/// <param name="d">dzieñ</param>
	/// <param name="mm">miesi¹c</param>
	/// <param name="y">rok</param>
	Data(const unsigned int h, const unsigned int m, const unsigned int d, const unsigned int mm, const unsigned int y);
	/// <summary>
	/// Konstruktor domyœlny, data zostaje ustawiona na 0:00 1-01-2020
	/// </summary>
	Data() :Hour(0), Minute(0), Day(1), Month(1), Year(2020) {};

	/// <summary>
	/// Metoda wypisuj¹ca datê na ekranie konsoli
	/// </summary>
	void ShowData();


	/// <summary>
	/// Operator porównania
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>true jeœli daty s¹ równe</returns>
	bool operator == (const Data data);
	/// <summary>
	/// Operator nierównoœci
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>true jeœli daty nie s¹ równe</returns>
	bool operator !=(const Data data);
	/// <summary>
	/// Operator mniejszoœciowy, data wczeœniejsza jest mniejsza
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>true jeœli data by³a mniejsza</returns>
	bool operator< (const Data data);
	/// <summary>
	/// Operator wiêkszoœciowy
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>true jeœli data by³a  wiêksza</returns>
	bool operator>(const Data data);
	/// <summary>
	/// Operator przypisania
	/// </summary>
	/// <param name="data">data</param>
	/// <returns>Nowo przypisana data</returns>
	Data& operator =(const Data& data);
};





#endif


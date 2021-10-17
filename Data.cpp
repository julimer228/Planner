#include "Data.h"
bool CheckDay(const unsigned int d, const unsigned int mm, bool IsLeapYear)
{
	switch (mm)
	{
	case 2:
		if (d <= 28)
			return true;
		if (d == 29 && IsLeapYear)
			return true;
		return false;

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (d <= 31)
			return true;
		return false;
	case 4:
	case 6:
	case 9:
	case 11:
		if (d < 30)return true;
		return false;
	default: throw std::exception("Invalid month");
	}
}
bool IsYearLeap(const unsigned int y)
{
	//przest�pne s� lata kt�re dziel� si� przez 4, ale nie dziel� si� przez 100 i lata, kt�re dziel� si� przez 400
	if ((y % 4 == 0) && (y % 4 != 0))
		return true;
	if (y % 400 == 0)
		return true;
	return false;
}

Data::Data(const unsigned int h, const unsigned int m, const unsigned int  d, const unsigned int mm, const unsigned int y)
{
	if (CheckMinute(m))Minute = m;
	else throw std::exception("Invalid minute");
	if (CheckHour(h))Hour = h;
	else throw std::exception("Invalid hour");
	if (CheckYear(y))Year = y;
	else throw std::exception("Invalid year");
	if (CheckMonth(mm))Month = mm;
	else throw std::exception("Invalid month");
	if (CheckDay(d, Month, IsYearLeap(Year)))Day = d;
	else throw std::exception("Invalid year");
}

void Data::ShowData()
{
	std::cout << "Data: " << GetHour() << ":" << GetMinute() << " " << GetDay() << "-" << GetMonth() << "-" << GetYear() << std::endl;
}

bool Data::operator==(const Data data)
{
	if ((Minute == data.Minute) && (Hour == data.Hour) && (Day = data.Day) && (Month == data.Month) && (data.Year == Year))
		return true;
	return false;
}

bool Data::operator!=(const Data data)
{
	return !(*this == data);	
}

bool Data::operator<(const Data data)
{
	//Sprawdzamy rok
	if (Year < data.Year)
		return true;
	else if (Year > data.Year)
		return false;
	//rok ten sam, sprawdzam miesi�c
	if (Month < data.Month)
		return true;
	else if (Month > data.Month)
		return false;
	//miesi�c ten sam, sprawdzam dzie�
	if (Day < data.Day)
		return true;
	else if (Day > data.Day)
		return false;
	//dzie� ten sam, sprawdzam godzin�
	if (Hour < data.Hour)
		return true;
	else if (Hour > data.Hour)
		return false;
	//godzina ta sama, sprawdzam minut�
	if (Minute < data.Minute)
		return true;
	else if (Minute >= data.Minute)
		return false; 
	//Wydarzenie ma p�niejsz� lub tak� sam� dat� (dlatego >=)

}

bool Data::operator>(const Data data)
{
	//Sprawdzamy rok
	if (Year > data.Year)
		return true;
	else if (Year < data.Year)
		return false;
	//rok ten sam, sprawdzam miesi�c
	if (Month > data.Month)
		return true;
	else if (Month < data.Month)
		return false;
	//miesi�c ten sam, sprawdzam dzie�
	if (Day > data.Day)
		return true;
	else if (Day < data.Day)
		return false;
	//dzie� ten sam, sprawdzam godzin�
	if (Hour > data.Hour)
		return true;
	else if (Hour < data.Hour)
		return false;
	//godzina ta sama, sprawdzam minut�
	if (Minute > data.Minute)
		return true;
	else if (Minute <= data.Minute)
		return false;
	//Wydarzenie ma wcze�niejsz� lub tak� sam� dat� (dlatego <=)

}

Data& Data::operator=(const Data& data)
{
	if (this != &data)
	{
		Hour = data.Hour;
		Minute = data.Minute;
		Day = data.Day;
		Month = data.Month;
		Year = data.Year;

	}
	return *this;
}



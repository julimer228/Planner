#include "TaskConteiner.h"
#include<string>
void TaskConteiner::Add(const Task& task)
{
	Tasks.push_back(task);
}
void TaskConteiner::Edit(const int id)
{
	for (int i = 0; i < Tasks.size(); i++)
	{
		if (id == Tasks[i].GetID())
			Tasks[i].Edit();
	}
}

void TaskConteiner::Remove(const int id)
{
	for (int i = 0; i < Tasks.size(); i++)
	{
		if (id == Tasks[i].GetID())
			Tasks.erase(Tasks.begin() + i);
	}
}

void TaskConteiner::ShowInfo(const int id)
{
	for (int i = 0; i < Tasks.size(); i++)
	{
		if (id == Tasks[i].GetID())
			Tasks[i].ShowInfo();
	}
}

void TaskConteiner::ShowInOrder()
{
	if (Tasks.empty())
	{
		std::cout << "Brak zadañ do wyœwietlenia!" << std::endl;
		return;
	}
	std::sort(Tasks.begin(), Tasks.end());
	for (int i = 0; i < Tasks.size(); i++)
	{
		Tasks[i].Show();
		std::cout<<std::endl;
	}
}

void TaskConteiner::Save()
{
	std::ofstream file("Task.txt");
	if (file)
	{
		for (int i = 0; i < Tasks.size(); i++)
		{
			file << Tasks[i].GetName() << std::endl << Tasks[i].GetInfo() << std::endl << Tasks[i].GetImportance() <<std::endl<< Tasks[i].GetData().GetHour() <<':'<< Tasks[i].GetData().GetMinute() <<" "<< Tasks[i].GetData().GetDay() <<"-"<< Tasks[i].GetData().GetMonth() <<" "<< Tasks[i].GetData().GetYear()<<std::endl;
		}
	}
	file.close();
}

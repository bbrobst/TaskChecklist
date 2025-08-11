#pragma once
#include <string>
#include <vector>
#include "Task.h"
class ToDoList
{
	std::vector<Task> tasks;

public:
	void addTask(const std::string& name, int priority);
	void displayAllTasks() const;
	void markTaskAsDone(int index);
};


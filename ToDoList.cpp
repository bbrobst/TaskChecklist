#include "ToDoList.h"
#include <iostream>

void ToDoList::addTask(const std::string& name, int priority)
{
	Task task(name, priority);
	tasks.push_back(task);
	std::cout << "Successfully added task.\n";
	std::cout << "\n";
}

void ToDoList::displayAllTasks() const
{
	for (size_t i = 0; i < tasks.size(); i++) {
		tasks[i].displayTask();
	}
	std::cout << "\n";
}

void ToDoList::markTaskAsDone(int index)
{
	if (index >= 0 && index < static_cast<int> (tasks.size())) {
		tasks[index].markDone();
	}
	else {
		std::cout << "Invalid task index.\n";
	}
}

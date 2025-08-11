#include "Task.h"
#include <iostream>

Task::Task(const std::string& taskName, int priority) : taskName(taskName), priority(priority), isDone(false)
{
}

Task::~Task()
{
	std::cout << taskName << " object destroyed.\n";
}

void Task::displayTask() const
{
	std::cout << "Task: " << taskName << "\n";
	std::cout << "Priority Number: " << priority << "\n";
	std::cout << "Status: " << (isDone ? "Done" : "Not Done") << "\n";
	
}

std::string Task::getTaskName() const
{
	return taskName;
}

int Task::getPriority() const
{
	return priority;
}

bool Task::getStatus() const
{
	return isDone;
}

void Task::markDone()
{
	if (!isDone) {
		isDone = true;
		std::cout << "Task marked as done.\n";
	}
	else {
		std::cout << "The task is already done.\n";
	}
}

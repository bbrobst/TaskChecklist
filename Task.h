#pragma once
#include <string>
class Task
{
	std::string taskName;
	int priority;
	bool isDone;

public:
	Task(const std::string& taskName, int priority);
	~Task();

	void displayTask() const;
	std::string getTaskName() const;
	int getPriority() const;
	bool getStatus() const;
	void markDone();
};


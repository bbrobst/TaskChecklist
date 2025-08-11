#include "ToDoList.h"
#include "Task.h"
#include <iostream>
int main() {
	ToDoList toDoList;
	int choice;

	do {
		std::cout << "\nTask Manager Menu:\n";
		std::cout << "1. Add Task\n";
		std::cout << "2. Display All Tasks\n";
		std::cout << "3. Mark Task as Done\n";
		std::cout << "4. Exit\n";
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		std::cout << "\n";

		std::string task;
		int taskPriority;
		int index;

		switch (choice) {
		case 1:
			std::cin.ignore();
			std::cout << "Enter task name: ";
			std::getline(std::cin, task);
			std::cout << "Enter task priority: ";
			std::cin >> taskPriority;
			toDoList.addTask(task, taskPriority);
			break;
		case 2:
			toDoList.displayAllTasks();
			break;
		case 3:
			std::cout << "Enter index: ";
			std::cin >> index;
			toDoList.markTaskAsDone(index);
			break;
		case 4:
			std::cout << "Exiting program...\n";
			return 0;
		default:
			std::cout << "Invalid choice, please try again.\n";
		}
	} while (choice != 4);
	
}
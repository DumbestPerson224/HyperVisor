#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include "task.h"
bool isRunning = true;
struct CLI {
	std::unordered_map<std::string, std::function<void()>> commands = {
		{"exit", [this]() {isRunning = false;}},
		{"clear", [this]() {clear_process();}},
	};

	std::string* read_command(std::string& command){
		if (commands.find(command) != commands.end()) {
			commands[command]();
		}else {
			command = "Not a valid command";
			return &command;
		}
	};

};
int main() {
	CLI cli;
	std::string command;
	while (isRunning) {
		std::cout << command << std::endl;
		std::cout << "Enter command: ";
		std::cin >> command;
		cli.read_command(command);
	}
	return 0;
}

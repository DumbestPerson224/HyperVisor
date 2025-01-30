#include <string>
struct InputManager {
	std::string* input = nullptr;
};

struct InputManager* inputManager = new InputManager;

inline void* read_input(std::string& input)  {
	if (inputManager != nullptr) {
		inputManager->input = &input;
		return inputManager;
	}
}

inline void* delete_input()  {
	if (inputManager != nullptr) {
		if (inputManager->input = nullptr) {
			inputManager->input = nullptr;
		}
		return inputManager;
	}
}

void deallocate() {
	if (inputManager != nullptr) {
		delete inputManager;
	}
}

struct VMManager {
	int proc_id = 0;
	int* proc_address = nullptr;
};

struct VMManager vmManager;
/*
  @parameters (Reference) proc_number
  @parameters (Reference) proc_address
  @types int
  @returns vmManager
*/
VMManager* set_process(int& proc_number, int& proc_address) {
	vmManager.proc_id = proc_number;
	vmManager.proc_address = &proc_address;
	return &vmManager;
}

VMManager* clear_process() {
	if (vmManager.proc_address != nullptr) {
		vmManager.proc_address = nullptr;
	}
	std::cout << "Process cleared\n";
	return &vmManager;
}

/*
   @parameter (Reference) object
   @types int
   @returns vmManager
*/
VMManager* write_to_process(int& object) {
	if (vmManager.proc_address != nullptr) {
		*vmManager.proc_address = object;
	}
	return &vmManager;
}

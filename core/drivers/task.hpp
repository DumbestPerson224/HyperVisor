/*
section .data
   VMManager:
     dd 0
     dd 0
     
  set_process:
     push ebp
     mov ebp, esp
     lea eax, [ebp + 8]
     lea edx, [ebp + 12]
     mov dword [vmManager], dword [eax]
     mov [vmManager + 4], [edx]
     lea eax, [ebp + 4]
     push eax
     pop ebp
     mov ebp, esp
     ret

clear_process:
   mov dword [vmManager], 0
   
write_to_process:
   push ebp
   mov ebp, esp
   lea eax, [ebp + 8]
   mov dword [vmManager], dword [eax]
   lea eax, [ebp + 4]
   push eax
   pop ebp 
   mov ebp, esp
   ret
*/
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

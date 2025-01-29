struct VMManager {
    int proc_id = 0;
    int* proc_address = nullptr;
};
struct VMManager* vmManager = new VMManager;




/*
  @parameters (Reference) proc_number
  @parameters (Reference) proc_address
  @types int
  @returns vmManager
*/
inline VMManager* set_process(int& proc_number, int& proc_address) {
    if (vmManager != nullptr) {
        vmManager->proc_id = proc_number;
        vmManager->proc_address = &proc_address;
        if (vmManager->proc_address != nullptr) {
            vmManager->proc_id = 0;
        }
        return vmManager;
    }
}




inline VMManager* clear_process() {
    if (vmManager != nullptr) {
        if (vmManager->proc_address != nullptr) {
            vmManager->proc_id = 0;
            vmManager->proc_address = nullptr;
        }
        return vmManager;
    }
}
/*
   @parameter (Reference) object
   @types int
   @returns vmManager
*/
inline VMManager* write_to_process(int& object) {
    if (vmManager != nullptr) {
        if (vmManager->proc_address != nullptr) {
            *vmManager->proc_address = object;
        }
        return vmManager;
    }
}

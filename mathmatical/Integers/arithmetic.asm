section .text 
    global addition
    global subtraction
    global multiply
    global _divide

%macro setup_stack 0 
  push ebp 
  mov ebp, esp
%endmacro 

%macro destroy_stack 0 
 mov esp, ebp
 pop ebp
 ret 
%endmacro

addition:
    setup_stack
    lea eax, [ebp + 4]
    lea ebx, [ebp + 8]
    add eax, dword [ebx]
    destroy_stack 

subtraction:
    setup_stack
    lea eax, [ebp + 4]
    lea edx, [ebp + 8]
    sub eax, dword [ebx]
    destroy_stack 

multiply:
    setup_stack
    lea eax, [ebp + 4]
    lea ebx, [ebp + 8]
    mul dword [ebx]
    destroy_stack

divide:
    setup_stack
    lea eax, [ebp + 4]
    lea ebx, [ebp + 8]
    cmp dword [eax], 0 
    jnz not_division_by_zero
    destroy_stack
    
not_division_by_zero:
    div dword [ebx]
    destroy_stack

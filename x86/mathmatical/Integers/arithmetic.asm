; (C) 2024 - DumbestPerson224
; File: arithmetic.asm
; Project Name: HyperVisor
; Location: https://githu.com/DumbestPerson224/HyperVisor/x86/mathmatical/Integers/arithmetic.asm

;Permissions:
;    1. Edit
;    2. Copy
;    3. Use

;int addition(int a, int b){
;    return a + b;
;}
;
;int subtraction(int a, int b){
;    a = a - b;
;    return;
;}
;
;int multiply(int a, int b){
;    a = a * b;
;    return;
;}
;
;int divide(int a, int b){
;    if(b != 0){
;        a = a / b;
;    };
;    return;
;}

section .text 
    global addition
    global subtraction
    global multiply
    global division

%macro setup 0
    ; Setup the stack frame
    push ebp     ; Save the original base pointer
    mov ebp, esp ; Set the new base pointer
%endmacro 

%macro load 0
  ; Get the return address and save it
  lea eax, [ebp + 4]
  push eax 

  ; Get the parameters
  mov eax, dword [ebp + 8]
  mov edx, dword [ebp + 12]

%endmacro


%macro destroy 0
  ; Destroy the stack frame
  pop eax  ; Get the return address
  pop ebp 
  mov ebp, esp 
  ret 
%endmacro 


%macro store 0
  mov [ebp + 8], eax 
%endmacro 

addition:
    load 
    add eax, edx 
    store  
    destroy 

division:
    setup 
    load 

    ; Check for a division by zero
    test edx, edx 
    jz not_divide
    div edx 
    store 
    destroy 

not_divide:
    destroy

; ebp + 4 = Return address
; ebp + 8 = Parameter 1
; ebp + 12 = Parameter 2

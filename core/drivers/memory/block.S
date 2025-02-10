section .data
   block:
     times 510 - db 0 

section .text
  global _write_to_block
  global write_to_block
  global read_block

write_to_block:
  push ebp
  mov ebp, esp
  lea eax, [ebp + 8]
  lea edx, [ebp + 12]
  cmp dword [eax], dword [edx]
  jle write_to_block
  pop ebp
  ret 
  
_write_to_block:
  mov [eax], [edx]
  pop ebp 
  ret 


read_block:
 push ebp
 mov ebp, esp 
 mov eax, [ebp + 4]
 mov [ebp + 8], eax 
 pop ebp
 ret

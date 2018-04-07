
title  Subroutine Demonstration       (lab4.asm)
; ; This program calls three subroutines: one for keyboard input, one to print
; a string terminated by '$', and the last to compute  the sum of the digits of the 
; first N numbers, where N is passed into the procedure through the AX register.
.model small
.stack 100h

.data
char  db  ?
sum   dw  ?   
prompt db  'Please input a character: $'
mess   db  1,' Have a nice day! ',1,10,13,'$'
crlf   db  10,13,'$'

.code
main proc
    mov   ax,@data         ; set up the DS register
    mov   ds,ax
;
    mov   dx,offset prompt
    call  PrintString      ; display string whose address is in ds:dx

; Get keyboard input    
    call  input_char       ; input keyboard into AL
    mov   char,AL          ; store in a variable

; call again for carriage return and line feed.
    mov   dx,offset crlf
    call  PrintString

; Call SumDigits  procedure with N=4
    mov   ax,4
    call  SumDigits        ; calculate sum

; Print exit message
    mov   dx,offset mess
    call  PrintString
;
    mov   ax,4C00h       ; return to DOS
    int   21h
main endp
;-----------------------------------------------------
; Use DOS function 1 to get keyboard input.
;   Exit Condition:  AL register has input data.
    
input_char proc   
    mov   ah,1
    int   21h
    ret
input_char endp
;-----------------------------------------------------
; Print the $ terminated string pointed to by DS:DX, using
; DOS function 9.  
;   Input: On entry DX has string offset address and DS 
;          has been initialized with the data segment address.  
;   Exit Condition:  Registers have not been modified.
PrintString  proc
    push  ax      ; save register modified
    mov   ah,9
    int   21h
    pop   ax
    ret
PrintString endp

;-----------------------------------------------------
; On entry AX = N.  SumDigits calculates N+(N-1)...+2+1
; and stores result at location SUM.
; Registers modified are saved and restored by this procedure.
;
SumDigits proc 
     push  bx           ; save BX, CX
     push  cx
; sum to zero, count to N
     xor   bx,bx
     mov   cx,ax
NEXT:
     add   bx,cx  
     loop  NEXT         ; repeat until cx=0
; result in bx, save at sum
     mov   sum,bx
; restore registers
     pop   cx           ; restore BX, CX
     pop   bx
     ret                ; sum stored in AX
SumDigits endp

end main


; iotest.asm decimal i/o
; Assemble this program then assemble the sub programs
; indec.asm and outdec.asm
;    tasm /zi iotest
;    tasm /zi indec
;    tasm /zi outdec
; When the three object code files are linked the main program should
; be lidted first.
;    tlink /v iotest+indec+outdec
;
  .model small
  .stack 100h
  extrn indec : proc
  extrn outdec : proc
  .data
  .code
  main proc
  ; input a number
       call indec ; number in ax
       push ax
   ; move cursor to a new line
       mov ah, 2
       mov dl, 0dh
       int 21h
       mov dl,0ah
       int 21h
   ; output the number
       pop ax           ; retrieve number
       call outdec
    ; exit to dos
       mov ah,4ch
       int 21h
       main endp
       end main

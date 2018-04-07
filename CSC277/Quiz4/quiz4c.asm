;;                                   Name____________________________________
;; Quiz 4 Part 2 answer

.MODEL SMALL
.STACK 100h
.DATA
   string1 db 't h i s i s a t e s t'
   slen equ $-string1
   string2 db 11 dup(?)

.CODE
Start:
   mov     ax, @DATA
   mov     ds, ax
   mov     es, ax
   
   lea si, string1
   lea di, string2
   
   mov cx,slen   ; string length
   cld
   
   top:
       lodsb      ; load char from si into al
       cmp al, ' '
       je next
       stosb      ; store char from al into di
   next:
       loop top

    mov     ax, 4c00h
    int     21h
END     Start


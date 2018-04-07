;;                                   Name____________________________________
;; Quiz 4 Part 2 answer

.MODEL SMALL
.STACK 100h
.DATA
   string1 db 't h i s i s a t e s t'
   string2 db 11 dup(?)

.CODE
Start:
   mov     ax, @DATA
   mov     ds, ax
   mov     es, ax
   
   lea si, string1
   lea di, string2
   
   mov cx,10   ; no of blank characters
   cld
   
   top:
       movsb
       inc si
       loop top
       movsb     ; last character

    mov     ax, 4c00h
    int     21h
END     Start


;;                                   Name____________________________________
;; Quiz 4 part A - E answers
;;
.MODEL SMALL
.STACK 100h
.DATA
   A dw 1,2,3
   B db 4,5,6
   C label word
    msg db 'ABC'
   

.CODE
Start:
   mov     ax, @DATA
   mov     ds, ax

    mov     ah, byte ptr A     ;ah=______________         
    mov     ax, word ptr B     ;ax=______________                     
    mov     ax, C     	       ;ax=______________                
 ;   mov     ax, msg            ;ax=______________         
    mov     ah, byte ptr C    ;ah=______________         

    mov     ax, 4c00h
    int     21h
END     Start


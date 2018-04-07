; first program in assembly sample1.asm
; by: j. student
.model small
.stack 100h
.data
 greeting db ' hello world !!',13,10,'$'
.code
main proc
; initialize ds register
        mov ax,@data  ; get data segment address
        mov ds,ax     ; initialize ds
 ; display message using dos function
        mov ah,9      ; print string function
        mov dx, offset greeting ; ds:dx points to string
        int 21h
; exit to dos
        mov ah,4ch
        int 21h
       
main endp
        end main

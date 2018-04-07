;Shaun Lake
;CSC 277 Program #3 ASCII to binary 

.model small
.stack 100h
.data

enterascii db 0ah,0dh,"Enter a character: ",'$'
result1 db 0ah,0dh, "The ASCII code of ",'$'
result2 db " in binary is: ",'$'  
numberofbits db 0ah, 0dh,"The number of 1 bits is ",'$'
savedvalue db 0

.code
main proc

mov ax,@data
mov ds,ax


mov bl,0

lea dx, enterascii
mov ah,9
int 21h
;get input
mov ah,1
int 21h

mov savedvalue,al
 mov cx,8

lea dx, result1
mov ah,9
int 21h

mov dl,savedvalue
mov ah,2
int 21h

lea dx,result2
mov ah,9
int 21h


loopnumber:

and al,10000000b

;convert al into a working ascii 1 or 0
;we add 30h if it's a 0 and subtract 50h if it's a 1
cmp al,0
je makezero
mov al,31h
jmp converstiondone
makezero:
mov al,30h
converstiondone:


mov dl,al 
mov ah,2
int 21h

cmp al,'1'
jne continue
;else add 1 then continue
inc bl

continue:

shl savedvalue,1

mov al, savedvalue

loop loopnumber

lea dx,numberofbits
mov ah,9
int 21h

;convert bl into an ascii value
add bl,30h

mov dl,bl
mov ah,2
int 21h

;exit to dos

mov ah,4ch
int 21h

main endp
end main
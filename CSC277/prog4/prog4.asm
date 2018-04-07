;Cody Adams
;CSC277-01
;W08
;Program 4

.model small

.stack 100h

EXTRN indec: PROC
EXTRN outdec: PROC

.data

prompt db 10,13,'please enter a number $'
linep db 10,13,'13','$'
spaces db '     ', '$'

.code

MAIN PROC
mov ax,@data
mov ds,ax

mov ah,9
lea dx,prompt
int 21h
call indec
mov cx,4
push ax
mov ah,9
lea dx,linep
int 21h
pop ax

again:
	shl ax,1
	mov bx,ax
	shl bx,1
	jo diff

	and ax,0fffeh
	jmp next
diff:
	or ax,1
next:
	and ax,7fffh
	call outdec
	push ax
	mov ah,9
	lea dx, spaces
	int 21h
	pop ax

	loop again

	mov ah, 4ch
	int 21h
main endp
end main

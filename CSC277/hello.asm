;Cody Adams
;First program written for CSC277
;
.MODEL SMALL
.STACK 100H
.DATA

 Greeting db 'Hello World !!', 13,10,'$'

.code
MAIN PROC
; INitialize DS register
	mov ax,@data	;get data segment address
	mov ds,ax	;initialize ds
;display message using dos function
	mov ah,9	;print string function
	mov dx,offset Greeting	;DS:DX points to string
	int 21h
;Exit to DOS
	mov ah,4ch
	int 21h
main endp
	end MAIN

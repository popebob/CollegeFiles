;Cody Adams
;CSC277-01
;W08
;Program 4

.model small
.stack 100h


;EXTRN indec: PROC
;EXTRN outdec: PROC

.data

prompt db 10,13,'Enter a number','$'
linep db 10,13,'$'
spaces db '  ','$'

.code

main proc

;mov ax,@data
;mov ds,ax

;mov ah,9
lea dx,prompt
int 21h


main endp

end


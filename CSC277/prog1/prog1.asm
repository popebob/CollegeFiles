;Cody Adams
;CSC277-01
;prog1
;Program that accepts two inputs and outputs the sum.


.model SMALL
.stack 100h
.data

numprompt db 10,13,'Enter a one digit number: ','$'
results   db 10,13,'The result of the additon is: ','$'
num1      db ?
num2      db ?
sum       db ?

.code
MAIN PROC
     mov ax,@data
     mov ds,ax

;input prompt for 1st number
	mov ah,9
	mov dx,offset numprompt
	int 21h
	mov ah,1
	int 21h                               ;1st number in al register
	mov bl,al                             ;1st number -> bl
	mov num1, al                          ;store the 1st number -> num1

;input prompt for 2nd number
	mov ah,9
	mov dx,offset numprompt
	int 21h
	mov ah,1

;storing the second number
	int 21h                               ;2nd number in al register
	mov bl,al                             ;2nd number -> bl
	mov num2, al                          ;store the 2nd number -> num2	

;computing the sum
	mov cl,num1
	add cl,num2
	mov sum,cl

;making the correction for the ascii values
	sub sum, 30h

;display input numbers and results
        mov ah,9
        mov dx, offset results
        int 21h
        mov ah,2
        mov dl,num1                             ;1st number to display
	int 21h
     	mov dl,'+'                              ;display the + sign
	int 21h

;code to display the second number and the = sign

	mov ah,2
	mov dl,num2                            ;2nd number to display
	int 21h
	mov dl,'='                             ;display the = sign
	int 21h



;code to display the results

	mov ah,2
	mov dl,sum
	int 21h

;return to command screen
	mov ah,4ch
	int 21h

main endp
   end MAIN
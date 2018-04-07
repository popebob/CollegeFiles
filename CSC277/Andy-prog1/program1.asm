;Program One
;Andrew Cascarelli

;Purpose: inputs 2 numbers, add, display results

.MODEL SMALL
.STACK 100H
.DATA
numprompt db 10,13,'Enter a one digit number: ','$'
results   db 10,13,'Inputs numbers: ','$'
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
          int 21h                               ;2nd number in al register
          mov bl,al                             ;2nd number -> bl
          mov num2, al                          ;store the 2nd number -> num2


;code to store the second number


;code to add the first and second number
mov cl,num1
add cl,num2
mov sum,cl

;hint use the cl register to add the two numbers

;remember the ascii value difference from character to number



;display input numbers and results
          mov ah,9
          mov dx, offset results
          int 21h
          mov ah,2
          mov dl,num1                             ;1st number to display
     int 21h
     mov dl,'+'                                 ;display the + sign
     int 21h

;code to display the second number and the = sign

          mov ah,2
          mov dl,num2                            ;2nd number to display
     int 21h
     mov dl,'='                                 ;display the = sign
     int 21h



;code to display the results

mov ah,2
mov d1,sum
int 21h

;return to command screen
mov ah,4ch
int 21h

main endp
   end MAIN
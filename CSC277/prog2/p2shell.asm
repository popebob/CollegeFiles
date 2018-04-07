;
;Program 2 Shell for CSC 277
;Program takes in a hex digit to output its' decimal equivalent
;using if and loop statments
;
model small
.stack 100H
.data

pnum db 10,13,'Enter a hex digit: $'
pcontinue db 10,13,'Do you want to continue?: $'
perror db 10,13,'Illegal character, Enter 0..9 or A..F: $'
pdecnum db 10,13,'In decimal it is: $'

.code
MAIN PROC
        mov ax,@data
        mov ds,ax
        continue:      ; start of loop
                mov ah,9
                mov dx,offset pnum
                int 21h
                mov ah,1
                int 21h
                mov cl,al
                
                legal:
                        cmp cl,30h   ;cl < 30h
                        jl  end_if   ;yes, error msg
                        cmp cl,49h   ;compare cl >49h
                        jg  end_if   ;yes, error msg

                        jmp finally
                end_if:
                        ; print error message


                        ; reenter a hex number
                        


                        ; jump back to test

                        jmp legal

                finally:
                        ; display number and message             
                        
                                       
                        ; determine if number ; 0..9 and display
                        


                        ; determine if number a..f and display
                        

               












                             
        mov ah,9
        lea dx,pcontinue     ; display continue message
        int 21h
        mov ah,1
        int 21h
        mov bl,al
        cmp bl,'Y'           ;bl = Y
        jne eoj              ;no, end

        je continue          ;yes, loop back to top


 eoj:                ;return to DOS prompt
        mov ah,4ch
        int 21h
main endp
        end MAIN

                      
                        

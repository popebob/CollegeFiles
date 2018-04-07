;Cody Adams
;CSC277-01
;W08
;Program 4


.model small
.stack 100h
.data
	Quarters dw 0h
	Dimesdw 0h
	Nickel dw 0h
	Pennies dw 0h
	NumberOfCoins dw 0h
	CoinTotal dw 0h
	
	Output1 db 'The Input amounts to $'
	Output2 db ' cents using $'
	Output3 db ' coins.$'
	Output4 db 'The same amount could have been as such:$'
	
	msgoq db 'Quartersters = $'
	msgod db 'Dimes =s = $'
	msgon db 'Nickelels = $'
	msgop db 'Penniesies = $'
	
	msgot db 'Total Coins = $'
.code
main proc
	mov ax,@data
	mov ds,ax

	call INDEC		;read Quartersters
	lea bx,Quarters
	mov [bx],ax
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	call INDEC		;read Dimes =s
	lea bx,Dimes =
	mov [bx],ax
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	call INDEC		;read Nickelels
	lea bx,Nickel
	mov [bx],ax
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	call INDEC		;read Penniesies
	lea bx,Pennies
	mov [bx],ax
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Output1
	mov ah,9
	int 21h
	
	lea bx,Quarters		;total change
	mov ax,[bx]
	lea bx,CoinTotal
	mov cx,19h
	mul cx
	add [bx],ax
	
	lea bx,Dimes =
	mov ax,[bx]
	lea bx,CoinTotal
	mov cx,9h
	inc cx
	mul cx
	add [bx],ax
	
	lea bx,Nickel
	mov ax,[bx]
	lea bx,CoinTotal
	mov cx,5h
	mul cx
	add [bx],ax
	
	lea bx,Pennies
	mov ax,[bx]
	lea bx,CoinTotal
	mov cx,1h
	mul cx
	add [bx],ax
	
	lea bx,CoinTotal
	mov ax,[bx]
	call OUTDEC
	
	lea dx,Output2
	mov ah,9
	int 21h
	
	lea bx,Quarters		;total Output coins
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,Dimes =
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,Nickel
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,Pennies
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,NumberOfCoins
	mov ax,[bx]
	call OUTDEC
	
	lea dx,Output3
	mov ah,9
	int 21h
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Output4
	mov ah,9
	int 21h
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea bx,CoinTotal	;find least number of coins
	mov ax,[bx]
	mov cx,19h	;Quartersters
	mov dx,0
	div cx
	lea bx,Quarters
	mov [bx],ax
	mov ax,dx
	
	mov cx,9h	;Dimes =s
	inc cx
	mov dx,0
	div cx
	lea bx,Dimes =
	mov [bx],ax
	mov ax,dx
	
	mov cx,5h	;Nickelles
	mov dx,0
	div cx
	lea bx,Nickel
	mov [bx],ax
	mov ax,dx
	
	lea bx,Pennies ;Penniesies
	mov [bx],ax
	mov ax,dx
	
	lea dx,msgoq
	mov ah,9
	int 21h
	
	lea bx,Quarters		;print Quartersters
	mov ax,[bx]
	call OUTDEC
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,msgod
	mov ah,9
	int 21h
	
	lea bx,Dimes =		;print Dimes =s
	mov ax,[bx]
	call OUTDEC
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,msgon
	mov ah,9
	int 21h
	
	lea bx,Nickel		;print Nickelels
	mov ax,[bx]
	call OUTDEC
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,msgop
	mov ah,9
	int 21h
	
	lea bx,Pennies		;print Penniesies
	mov ax,[bx]
	call OUTDEC
	
	mov ah,2		;return
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,msgot
	mov ah,9
	int 21h
	
	lea bx,Quarters		;total output coins
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,Dimes =
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,Nickel
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,Pennies
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,NumberOfCoins
	mov ax,[bx]
	call OUTDEC
	
	mov ah,4ch
	int 21h

main endp

INDEC   PROC
     ;reads a number in range -32768 to 32767
     ;Output: none
     ;output: AX = binary equivalent of number
             PUSH    BX              ;save registers used            
             PUSH    CX      
             PUSH    DX
     ;print prompt
     @BEGIN:
             MOV     AH,2
             MOV     DL,'?'
             ;INT     21H             ;print '?'
     ;total = 0
             XOR     BX,BX           ;BX holds total
     ;negative = false
             XOR     CX,CX           ;CX holds sign
     ;read a character
             MOV     AH,1
             INT     21H             ;character in AL
     ;case character of
             CMP     AL,'-'          ;minus sign?
             JE      @MINUS          ;yes, set sign
             CMP     AL,'+'          ;plus sign?
             JE      @PLUS           ;yes, get another char
             JMP     @REPEAT2        ;start processing chars
     @MINUS:
             MOV     CX,1            ;negative = true
     @PLUS:
             INT     21H             ;read a char
     ;end_case
     @REPEAT2:
     ;if character is between '0' and '9'
             CMP     AL,'0'          ;char >= '0'?
             JNGE    @NOT_DIGIT      ;illegal char
             CMP     AL,'9'          ;char <= '9'?
             JNLE    @NOT_DIGIT      ;no, illegal char
     ;then convert character to a digit
             AND     AX,000FH        ;convert to digit
             PUSH    AX              ;save on stack
     ;total = total*10 + digit
             MOV     AX,10           ;get 10
             MUL     BX              ;AX = total*10
             POP     BX              ;retrieve digit
             ADD     BX,AX           ;total = total*10 + digit
     ;read a character
             MOV     AH,1
             INT     21H     
             CMP     AL,0DH          ;CR?
             JNE     @REPEAT2        ;no, keep going
     ;until CR
             MOV     AX,BX           ;store number in AX
     ;if negative
             OR      CX,CX           ;negative number?
             JE      @EXIT           ;no, exit
     ;then
             NEG     AX              ;yes, negate
     ;end_if
     @EXIT:
             POP     DX              ;restore registers
             POP     CX                                      
             POP     BX
             RET                     ;and return
     ;here if illegal character entered
     @NOT_DIGIT:
             MOV     AH,2            ;go to a new line
             MOV     DL,0DH
             INT     21H
             MOV     DL,0AH
             INT     21H
             JMP     @BEGIN	     ;go to beginning		
     INDEC   ENDP

OUTDEC  PROC
    ;prints AX as a signed decimal integer
    ;Output: AX
    ;output: none
            PUSH    AX              ;save registers
            PUSH    BX
            PUSH    CX
            PUSH    DX              
    ;if AX < 0
            OR      AX,AX           ;AX < 0?
            JGE     @END_IF1        ;no, > 0
    ;then
            PUSH    AX              ;save number
            MOV     DL,'-'          ;get '-'
            MOV     AH,2            ;print char fcn
            INT     21H             ;print '-'
            POP     AX              ;get AX back
            NEG     AX              ;AX = -AX               
    @END_IF1:
    ;get decimal digits
            XOR     CX,CX           ;CX counts digits                 
            MOV     BX,10D          ;BX has divisor
    @REPEAT1:
            XOR     DX,DX           ;prepare high part of dividend  
            DIV     BX              ;AX = quotient, DX = remainder
            PUSH    DX              ;save remainder on stack
            INC     CX              ;count = count + 1
    ;until
            OR      AX,AX           ;quotient = 0?
            JNE     @REPEAT1        ;no, keep going
    ;convert digits to characters and print
            MOV     AH,2            ;print char fcn
    ;for count times do
    @PRINT_LOOP:
            POP     DX              ;digit in DL
            OR      DL,30H          ;convert to character
            INT     21H             ;print digit
            LOOP    @PRINT_LOOP     ;loop until done
    ;end_if
            POP     DX              ;restore registers
            POP     CX
            POP     BX
            POP     AX
            RET
    OUTDEC  ENDP
end main
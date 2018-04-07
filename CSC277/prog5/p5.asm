;Cody Adams
;CSC277-01
;W08
;Program 5


.MODEL SMALL
.STACK 100H

EXTRN indec: PROC
EXTRN outdec: PROC

.DATA
	Quarters dw 0h
	Dimes dw 0h
	Nickels dw 0h
	Pennies dw 0h
	NumberOfCoins dw 0h
	CoinTotal dw 0h
	
	Input1 db 'The Input Change Amounts to $'
	Input2 db ' cents using $'
	Input3 db ' coins.$'
	Input4 db 'The same change could be made with:$'
	
	NumberQ db 'Quarters = $'
	NumberD db 'Dimes = $'
	NumberN db 'Nickels = $'
	NumberP db 'Pennies = $'
	
	NumberT db 'Total Coins = $'
.CODE
MAIN PROC

	MOV AX,@DATA
	MOV DS,AX

	CALL INDEC
	MOV Quarters,AX
	
	MOV AH,2	
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	CALL INDEC
	MOV Dimes,AX
	
	MOV AH,2
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	CALL INDEC
	MOV Nickels,AX
	
	MOV AH,2
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	CALL INDEC
	MOV Pennies,AX
	
	MOV AH,2
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	LEA dx,Input1
	MOV AH,9
	int 21H
	
	LEA BX,Quarters
	MOV AX,[BX]
	LEA BX,CoinTotal
	MOV cx,19h
	mul cx
	add [BX],AX
	
	LEA BX,Dimes
	MOV AX,[BX]
	LEA BX,CoinTotal
	MOV cx,9h
	inc cx
	mul cx
	add [BX],AX
	
	LEA BX,Nickels
	MOV AX,[BX]
	LEA BX,CoinTotal
	MOV cx,5h
	mul cx
	add [BX],AX
	
	LEA BX,Pennies
	MOV AX,[BX]
	LEA BX,CoinTotal
	MOV cx,1h
	mul cx
	add [BX],AX
	
	LEA BX,CoinTotal
	MOV AX,[BX]
	CALL OUTDEC
	
	LEA dx,Input2
	MOV AH,9
	int 21H
	
	LEA BX,Quarters		;total input coins
	MOV AX,[BX]
	LEA BX,NumberOfCoins
	add [BX],AX
	
	LEA BX,Dimes
	MOV AX,[BX]
	LEA BX,NumberOfCoins
	add [BX],AX
	
	LEA BX,Nickels
	MOV AX,[BX]
	LEA BX,NumberOfCoins
	add [BX],AX
	
	LEA BX,Pennies
	MOV AX,[BX]
	LEA BX,NumberOfCoins
	add [BX],AX
	
	LEA BX,NumberOfCoins
	MOV AX,[BX]
	CALL OUTDEC
	
	LEA dx,Input3
	MOV AH,9
	int 21H
	
	MOV AH,2		;return
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	LEA dx,Input4
	MOV AH,9
	int 21H
	
	MOV AH,2		;return
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	LEA BX,CoinTotal	;find least number of coins
	MOV AX,[BX]
	MOV cx,19h	;Quarters
	MOV dx,0
	div cx
	LEA BX,Quarters
	MOV [BX],AX
	MOV AX,dx
	
	MOV cx,9h	;Dimes
	inc cx
	MOV dx,0
	div cx
	LEA BX,Dimes
	MOV [BX],AX
	MOV AX,dx
	
	MOV cx,5h	;Nickelsles
	MOV dx,0
	div cx
	LEA BX,Nickels
	MOV [BX],AX
	MOV AX,dx
	
	LEA BX,Pennies ;Pennies
	MOV [BX],AX
	MOV AX,dx
	
	LEA dx,NumberQ
	MOV AH,9
	int 21H
	
	LEA BX,Quarters		;print Quarters
	MOV AX,[BX]
	CALL OUTDEC
	
	MOV AH,2		;return
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	LEA dx,NumberD
	MOV AH,9
	int 21H
	
	LEA BX,Dimes		;print Dimes
	MOV AX,[BX]
	CALL OUTDEC
	
	MOV AH,2		;return
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	LEA dx,NumberN
	MOV AH,9
	int 21H
	
	LEA BX,Nickels		;print Nickels
	MOV AX,[BX]
	CALL OUTDEC
	
	MOV AH,2		;return
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	LEA dx,NumberP
	MOV AH,9
	int 21H
	
	LEA BX,Pennies		;print Pennies
	MOV AX,[BX]
	CALL OUTDEC
	
	MOV AH,2		;return
	MOV DL,0DH
	int 21H
	MOV DL,0AH
	int 21H
	
	LEA dx,NumberT
	MOV AH,9
	int 21H
	
	MOV BX,0	

	MOV NumberOfCoins,0

	lea bx,quar		;total output coins
	mov ax,[bx]
	lea bx,numc
	add [bx],ax
	
	lea bx,dime
	mov ax,[bx]
	lea bx,numc
	add [bx],ax
	
	lea bx,nick
	mov ax,[bx]
	lea bx,numc
	add [bx],ax
	
	lea bx,penn
	mov ax,[bx]
	lea bx,numc
	add [bx],ax
	
	lea bx,numc
	mov ax,[bx]
	call OUTDEC
	
	mov ah,4ch
	int 21h

main endp
end main
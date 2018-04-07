;Cody Adams
;CSC277-01
;W08
;Program 4



.MODEL SMALL
.STACK 100H


EXTRN indec: PROC
EXTRN outdec: PROC

.DATA

prompt db 10,13, "please enter a number $"
linep db 10,13,'$'
spaces db '     ','$'

.CODE

MAIN PROC

MOV AX,@DATA
MOV DS,AX

LEA DX,prompt
MOV AH,9
INT 21H

CALL INDEC

MOV CX,4
push ax
mov ah,9
lea dx,linep
int 21h
pop ax



Burnination:

MOV	BX,AX	;copy AX to BX
SHL	BX,1		; OF = SF xor CF
JO	DIFF		;bits 14 & 15 of AX are different

;Here bits 14 & 15 are the same
AND	AX,0FFFEh	;clear bit 0
JMP	NEXT

DIFF:
OR	AX,1		;set bit 0

NEXT:




;CALL RANDOMIZER
CALL OUTDEC
LOOP Burnination

;Exit to DOS
MOV AH,4CH
INT 21H

MAIN ENDP
   

;RANDOMIZER PROC


;RET

;RANDOMIZER ENDP

END

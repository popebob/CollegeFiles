;Cody Adams
;CSC277-01
;Program Three

;Program to display the ascii vALue in binary


.MODEL SMALL
.STACK 100H
.DATA

ASCIIInput db 0AH,0dh,"Enter a character: ",'$'
ASCIICode db 0AH,0dh, "The ASCII code of ",'$'
Binary db " in binary is: ",'$'  
EvenParity db 0AH, 0dh,"The number of 1 bits is ",'$'
Storage db 0

.CODE
MAIN PROC

MOV AX,@DATA
MOV DS,AX


MOV BL,0

LEA DX, ASCIIInput
MOV AH,9
INT 21H
;get input
MOV AH,1
INT 21H

MOV Storage,AL
 MOV cx,8

LEA DX, Binary
MOV AH,9
INT 21H

MOV dl,Storage
MOV AH,2
INT 21H

LEA DX,EvenParity
MOV AH,9
INT 21H


loopnumber:

and AL,10000000b

;convert AL INTo a working ascii 1 or 0
;we add 30h if it's a 0 and subtract 50h if it's a 1
CMP AL,0
JE ClearBits
MOV AL,31h
JMP AllDone
ClearBits:
MOV AL,30h
AllDone:


MOV dl,AL 
MOV AH,2
INT 21H

CMP AL,'1'
JNE CarryOn
INC BL

CarryOn:

SHL Storage,1

MOV AL, Storage

LOOP loopnumber

LEA DX,EvenParity
MOV AH,9
INT 21H

;change to ascii vALue
ADD BL,30h

MOV dl,BL
MOV AH,2
INT 21H

;exit to dos

MOV AH,4ch
INT 21H

main endp
end main
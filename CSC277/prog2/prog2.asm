;Cody Adams
;CSC277-01
;W08
;Program 2



.model smALl
.stack 100h
.data

UserInput db 0AH,0dh,"Please input a single digit hex number [0-9,A-F]: ",'$'
WrongInput db 0AH,0dh,"InvALid input, try again. ",'$'
Answer db 0AH,0dh,"The decimAL equivALent is: ",'$'
ReRun db 0AH,0dh,"Would you like to try another? [y for yes] ",'$'

.code
main proc
MOV AX,@data
MOV DS,AX
MOV BL,0
MOV BH,0


Input:
MOV DX,0
LEA DX, UserInput
MOV AH,9
INT 21H
MOV AH,1   ;Capture incoming keystroke
INT 21H
;copy into BL for storage
MOV BL,AL
;Ignore any other keystrokes until you get enter
Enter:
MOV AH,1   ;Look for keyboard
INT 21H
CMP AL,0DH  ;Enter = 0DH, so if AL = 0DH, then Enter is in
JE Entered
JMP Enter
Entered:
;swap dl back INTo AL
MOV AL,BL
MOV BL,0; remember to cLEAr BL.
JMP checkrange

;ignore this jumpback relay poINT
Inputrelay2:
CMP dl,17
JE Input



storenumdata:

;store in BL reguardless
;use a 0 or 1 to assign if the vALue was a letter originALly
MOV BH,0  ;BH 0 means we are reading a numericAL part of hex
MOV BL,AL
JMP displayresults



storehexdata:
;first convert the ascii code to a reAL number of 10-15
;because we ALready echoed the users input.

sub AL,11h ; this turns our A-F INTo 10-15 and stores it in AL
MOV BH,1 ;BH 1 means that we are reading a letter from hex
MOV BL,AL
JMP displayresults






;check to see if our vALue is within range:


checkrange:


;que up the error message so we can just cALl with INT 21H
MOV DX,0
LEA DX,WrongInput
MOV AH,9

CMP AL,'0'
JGE check9
INT 21H ;cALl error
JMP Input
check9:
CMP AL,'9'
JLE storenumdata
;else we might have a letter vALue:
CMP AL,'F'
JLE checkA
;else we have to large of a vALue
INT 21H ;error message
JMP Input
checkA:
CMP AL,'A'
JGE storehexdata
;else we are >9 and <A and have errored
INT 21H
JMP Input


;relay to Input
Inputrelay1:
JMP Input



displayresults:

;check to see if we are displaying letter or number parts of hex results:
CMP BH,1
JE hexletterdisplay

MOV DX,0
LEA DX,Answer
MOV AH,9
INT 21H
MOV DX,0
MOV AH,2
MOV dl,'0'
INT 21H
MOV dl,BL
INT 21H

JMP continuecheck

hexletterdisplay:

MOV DX,0
LEA DX,Answer
MOV AH,9
INT 21H
MOV DX,0
MOV AH,2
MOV dl,'1'
INT 21H
MOV dl,BL
INT 21H

continuecheck:

MOV DX,0
LEA DX,ReRun
MOV AH,9
INT 21H

;setup dl for Inputrelay1 incase user wants to repeat.
MOV dl,17
;get response from kb
MOV AH,1
INT 21H
CMP AL,'Y'
JE Inputrelay1
CMP AL,'y'
JE Inputrelay1


;exit to dos
MOV AH,4ch
INT 21H

;main endpoINT
main endp
;end program
end main
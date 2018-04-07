;Shaun Lake
;CSC-277 Program 2 hex input to decimal conversion



.model small
.stack 100h
.data

askinput db 0ah,0dh,"Please enter a hex digit 0..9 or A..F: ",'$'
errorinput db 0ah,0dh,"Illegal character, enter a hex character; try capital letters",'$'
erroryn db 0ah,0dh,"Please choose Y/N",'$'
decimalreply db 0ah,0dh,"In decimal it is: ",'$'
askcontinue db 0ah,0dh,"Do you want to continue?",'$'

.code
main proc
mov ax,@data  ;move the address of data beginning into ax
mov ds,ax      ;set the data address with the beginning dataline segment

;init bl and bh

mov bl,0
mov bh,0


hexinput:
mov dx,0
lea dx, askinput
mov ah,9
int 21h
mov ah,1 ; get kb input
int 21h
;store the ascii code we entered into bl
mov bl,al
;now loop until we press enter
waitforenter:
mov ah,1 ; get kb input
int 21h
cmp al,0dh  ;enter key is 0dh asoii code
je enterpressed
jmp waitforenter
enterpressed:
;swap dl back into al
mov al,bl
mov bl,0; remember to clear bl.
jmp checkrange

;ignore this jumpback relay point
hexinputrelay2:
cmp dl,17
je hexinput



storenumdata:

;store in bl reguardless
;use a 0 or 1 to assign if the value was a letter originally
mov bh,0  ;bh 0 means we are reading a numerical part of hex
mov bl,al
jmp displayresults



storehexdata:
;first convert the ascii code to a real number of 10-15
;because we already echoed the users input.

sub al,11h ; this turns our A-F into 10-15 and stores it in al
mov bh,1 ;bh 1 means that we are reading a letter from hex
mov bl,al
jmp displayresults






;check to see if our value is within range:


checkrange:


;que up the error message so we can just call with int 21h
mov dx,0
lea dx,errorinput
mov ah,9

cmp al,'0'
jge check9
int 21h ;call error
jmp hexinput
check9:
cmp al,'9'
jle storenumdata
;else we might have a letter value:
cmp al,'F'
jle checkA
;else we have to large of a value
int 21h ;error message
jmp hexinput
checkA:
cmp al,'A'
jge storehexdata
;else we are >9 and <A and have errored
int 21h
jmp hexinput


;relay to hexinput
hexinputrelay1:
jmp hexinput



displayresults:

;check to see if we are displaying letter or number parts of hex results:
cmp bh,1
je hexletterdisplay

mov dx,0
lea dx,decimalreply
mov ah,9
int 21h
mov dx,0
mov ah,2
mov dl,'0'
int 21h
mov dl,bl
int 21h

jmp continuecheck

hexletterdisplay:

mov dx,0
lea dx,decimalreply
mov ah,9
int 21h
mov dx,0
mov ah,2
mov dl,'1'
int 21h
mov dl,bl
int 21h

continuecheck:

mov dx,0
lea dx,askcontinue
mov ah,9
int 21h

;setup dl for hexinputrelay1 incase user wants to repeat.
mov dl,17
;get response from kb
mov ah,1
int 21h
cmp al,'Y'
je hexinputrelay1
cmp al,'y'
je hexinputrelay1


;exit to dos
mov ah,4ch
int 21h

;main endpoint
main endp
;end program
end main
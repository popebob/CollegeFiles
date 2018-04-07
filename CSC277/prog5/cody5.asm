;Cody Adams
;CSC277-01
;W08
;Program 4


.model small
.STACK 100H

EXTRN indec: PROC
EXTRN outdec: PROC

.data
	Quarters dw 0h
	Dimes dw 0h
	Nickel dw 0h
	Pennies dw 0h
	NumberOfCoins dw 0h
	CoinTotal dw 0h
	
	Input1 db 'Quarters? $'
	Input2 db 'Dimes? $'
	Input3 db 'Nickels? $'
	Input4 db 'Pennies? $'	

	Output1 db 'The Input amounts to $'
	Output2 db ' cents using $'
	Output3 db ' coins.$'
	Output4 db 'The same amount could have been made as such:$'
	
	Outptut5 db 'Quarters = $'
	Outptut6 db 'Dimes $'
	Outptut7 db 'Nickels = $'
	Outptut8 db 'Pennies = $'
	
	Outptut9 db 'Total Coins = $'
.code
main proc
	mov ax,@data
	mov ds,ax

	lea dx,Input1
	mov ah,9
	int 21h
	
	call INDEC		
	mov Quarters,ax
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Input2
	mov ah,9
	int 21h	

	call INDEC		
	mov Dimes,ax
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Input3
	mov ah,9
	int 21h

	call INDEC		
	mov Nickel,ax
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h

	lea dx,Input4
	mov ah,9
	int 21h

	
	call INDEC		
	mov Pennies,ax
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Output1
	mov ah,9
	int 21h
	
	lea bx,Quarters		
	mov ax,[bx]
	lea bx,CoinTotal
	mov cx,19h
	mul cx
	add [bx],ax
	
	lea bx,Dimes
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
	
	lea bx,Quarters		
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,Dimes
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
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Output4
	mov ah,9
	int 21h
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea bx,CoinTotal	
	mov ax,[bx]
	mov cx,19h	
	mov dx,0
	div cx
	lea bx,Quarters
	mov [bx],ax
	mov ax,dx
	
	mov cx,9h	
	inc cx
	mov dx,0
	div cx
	lea bx,Dimes
	mov [bx],ax
	mov ax,dx
	
	mov cx,5h	
	mov dx,0
	div cx
	lea bx,Nickel
	mov [bx],ax
	mov ax,dx
	
	lea bx,Pennies 
	mov [bx],ax
	mov ax,dx
	
	lea dx,Outptut5
	mov ah,9
	int 21h
	
	lea bx,Quarters		
	mov ax,[bx]
	call OUTDEC
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Outptut6
	mov ah,9
	int 21h
	
	lea bx,Dimes		
	mov ax,[bx]
	call OUTDEC
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Outptut7
	mov ah,9
	int 21h
	
	lea bx,Nickel		
	mov ax,[bx]
	call OUTDEC
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Outptut8
	mov ah,9
	int 21h
	
	lea bx,Pennies		
	mov ax,[bx]
	call OUTDEC
	
	mov ah,2		
	mov dl,0dh
	int 21h
	mov dl,0ah
	int 21h
	
	lea dx,Outptut9
	mov ah,9
	int 21h
	
	mov NumberOfCoins,0

	lea bx,Quarters		
	mov ax,[bx]
	lea bx,NumberOfCoins
	add [bx],ax
	
	lea bx,Dimes
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
end main
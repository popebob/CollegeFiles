	.MODEL  SMALL
	.STACK  100h
	jumps
WriteSt  MACRO   MessLab 
	 push  ax
	 push  dx
	 mov   ah,9
	 mov   dx,offset MessLab 
	 Int   21h
	 pop   dx
	 pop   ax
	 ENDM

	.DATA
InRecs    db   25*24 dup (?)
RecCount dw   ?
fname    db  'd6',0
handle   dw  ?
crlf     db    10,13,'$'
errorclose db 10,13,'Error closing file',10,13,'$'
Greet    db   10,13, 'Testing my WriteST macro!',10,13,'$'
Fini     db   10,13,'That''s all Folks!',10,13,'$'
Step1    db   10,13,'After read.',10,13,'$'
	.CODE
MyP6  PROC
	  mov   ax, @data ;     The standard prolog
	  mov   ds, ax
	  WriteSt greet

; Open file for input
	  mov   ah,3dh     ; open file function
	  lea   dx,fname   ; dx points to file name
	  mov   al,0       ; open for reading
	  int   21h        ; open file

	  mov   handle,ax  ; save handle or error code
	  jc    error 
          lea   dx,InRecs


ReadLoop:
; Read one record into Table
	  mov   bx,handle    ;file handle returned by file open  
	  mov   ah,3Fh
	  mov   cx,24
	  int   21h

	  cmp   ax,cx       ; EOF YET?
	  JL    EOF
  
        WriteSt  crlf

; Using DOS function 40h to echo print name to sceen output, see pg.406 
	  mov   ah,40h
	  mov   cx,14       ; cx= # bytes to write
	  mov   bx,1        ;file handle for screen output
; Prints string pointed to by DS:DX, CX= # bytes to print.  Doesn't
; require the string to be terminated by a `$'
	  int   21h
; On return AX = # bytes written.  If AX < cx error (full disk)
; If CF = 1, error code in AX is 5 or 6.
          add   dx,24
	  inc   RecCount    ; one more record read in
	  jmp   ReadLoop

EOF:      

error:  ; write out some error message here
eoj:
; close files

	mov   ah,3eh     ; close file function
	mov   bx,handle
	int   21h
	jnc   done
	
	WriteSt errorclose
done:
	WriteSt fini
	mov    ax,4c00h
	int    21h

MyP6 ENDP
	 end   MyP6


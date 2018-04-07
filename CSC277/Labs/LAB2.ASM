;;  Debugger Lab2--looking at simple instructions using the debugger
;;
;;  Assemble and link for use with the turbo debugger:
;;
;;  tasm /zi lab2
;;  tlink /v lab2
;;  td lab2
;;
;;  and trace through the program, filling in the blanks in comments.
;;
  .MODEL  SMALL
  .STACK  100h
  .DATA
				  ; Contents of memory
SIX      EQU   6
AVAL     DW    15         ;______________
BVAL     DW    -5         ;______________
MESSAGE  DB    '12345'    ;________________________________
LIST     DW    1,2,3,4,5  ;________________________________
STUFF    DB    ?          ;______

  .CODE
Lab2 PROC
  mov  ax, @data ;  The standard prolog
  mov  ds, ax
  ; Fill in the specified register contents before execution of the
  ; instruction then after execution.  Also indicate any flags that
  ; were modified by an instruction.
  ;                                                       FLAGS
                                ;BEFORE        AFTER      MODIFIED

  mov  ax, AVAL           ;ax = _______  ax = _______    ________

  add  ax, BVAL           ;ax = _______  ax = _______    ________

  mov  bx, BVAL           ;bx = _______  bx = _______    ________

  mov  cx, SIX            ;bx = _______  bx = _______    ________

  neg  bx                 ;bx = _______  bx = _______    ________

  inc  bx                 ;bx = _______  bx = _______    ________
  

     ;                                                       FLAGS
                                ;BEFORE        AFTER      MODIFIED
  mov  ax, 0aaaah
  mov  al, '+'            ;ax = _______  ax = _______    ________
  dec  AVAL
  mov  ax,aval            ;ax = _______  ax = _______    ________

  sub  ax,3               ;ax = _______  ax = _______    ________

  mov  ax, 0aaaah
  mov  al, Message        ;ax = _______  ax = _______    ________

  mov  ah, Message+1      ;ax = _______  ax = _______    ________
  mov  ax, 0aaaah
  lea  ax, BVAL           ;ax = _______  ax = _______    ________

  mov  bx, OFFSET BVAL    ;bx = _______  bx = _______    ________
  mov  ax, 1234h
  mov  al, -22            ;ax = _______  ax = _______    ________
  mov  AVAL, -22
  mov  bx, AVAL           ;bx = _______  bx = _______    ________

  mov  ax,0ffffh
  mov  bx,1
  add  ax,bx              ;ax = _______  ax = _______    ________
  mov  ax,-32768
  sub  ax,bx              ;ax = _______  ax = _______    ________
  mov  ax,32767
  inc  ax                 ;ax = _______  ax = _______    ________

  mov  STUFF,11110011B    ;stuff=______  stuff=_______   ________

  mov  ax, LIST           ;ax = _______  ax = _______    ________

  mov  bx, LIST+2         ;bx = _______  bx = _______    ________

  mov  cx, LIST+4         ;cx = _______  cx = _______    ________

  mov  dx, LIST+SIX       ;dx = _______  dx = _______    ________

  mov  si, LIST+1         ;si = _______  si = _______    ________

  mov  di,'AB'            ;di = _______  di = _______    ________


; End program
  mov     ah,4Ch
  int  21h
Lab2 ENDP
  END  Lab2


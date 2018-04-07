;;                                     Name________________________________________
;;  277 Lab--looking at logical, shift and rotate instructions in the debugger
;;
;;  Assemble and link for use with the turbo debugger:
;;
;;  tasm /zi lab3
;;  tlink /v lab3
;;  td lab3
;;
;;  Under View, select either registers or open the CPU view, 
;;  and trace through the program, filling in the blanks in comments
;;
  .MODEL  SMALL
  .STACK  100h
  .DATA
  .CODE
Logic PROC
  mov  ax, @data ;  The standard prolog
  mov  ds, ax
  ; Fill in the specified register contents before execution of the
  ; instruction then after execution.  Also indicate any flags that
  ; were modified by an instruction.
  ;                                                     
  ; Convert TD reg. hex display to binary, then fill in the ah
  ; register contents after tracing executing with F7 key
                       ;BEFORE pressing F7  AFTER execution with F7
  mov  ah, 11010110B
  and  ah, 11110000B      ;ah = 11010110B  ah = __________________   

  mov  ah, 11010110B
  or   ah, 11110000B      ;ah = 11010110B  ah = __________________   

  mov  ah, 11010110B
  xor  ah, 11110000B      ;ah = 11010110B  ah = __________________   

  mov  ah, 11010110B
  not  ah                 ;ah = 11010110B  ah = __________________   

;; Fill in results in HEX and as signed DECIMAL, after executing each instruction.

  mov  ax, 0FFFFh
  xor  ax, ax             ;ax = FFFF         ax = ___________10   

  mov  ax, 2
  shl  ax, 1              ;ax = ___________16 ax = ___________10 
  mov  cl,3
  mov  ax, 2
  shl  ax, cl             ;ax = ___________16 ax = ___________10   

  mov  ax, 12
  shr  ax, 1              ;ax = ___________16 ax = ___________ 10  

  mov  ax, 12
  shr  ax, cl             ;ax = ___________16 ax = ___________10 

  mov  ax, 0fff2h
  shr  ax, 1              ;ax = ___________16 ax = ___________10   

  mov  ax, 0fff2h
  shr  ax, cl             ;ax = ___________16 ax = ___________10

  mov  ax, 0fff2h
  sar  ax, 1              ;ax = ___________16 ax = ___________10   

  mov  ax, 0fff2h
  sar  ax, cl             ;ax = ___________16 ax = ___________10   

  mov  ax, 2
  sal  ax, 1              ;ax = ___________16 ax = ___________10   

  mov  ax, 2
  sal  ax, cl             ;ax = ___________16 ax = ___________10   

  mov  ax, 12
  sar  ax, 1              ;ax = ___________16 ax = ___________10   

  mov  ax, 12
  sar  ax, cl             ;ax = ___________16 ax = ___________10   

; Convert the debuggers hex display to binary, then fill in the ax
; register after each instruction executes.
                          ;; before execution     binary result after execution
  mov  ax, 1111111011010110B 
  rol  ax, 1              ;ax = 1111111011010110B   ax = __________________   

  mov  ax, 1111111011010110B
  ror  ax, 1              ;ax = 1111111011010110B   ax = __________________   

  mov  ax, 1111111011010110B
  rol  ax, cl             ;ax = 1111111011010110B   ax = __________________   

  mov  ax, 1111111011010110B
  ror  ax, cl             ;ax = 1111111011010110B   ax = __________________   

; End program
  mov ah, 4ch
  int 21h

Logic ENDP
  END  Logic

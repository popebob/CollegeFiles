 TITLE Testing Multiply & Divide Operations
 .MODEL SMALL
 .STACK   100H
 .DATA
ByteOp    db    2
WordOp    dw    4
Quotient  dw    ?
Remainder dw    ?

 .CODE
 MAIN     PROC
 ;initialize DS
    MOV  AX,@DATA
    MOV  DS,AX
;
   MOV   BL,3  ; before: DX = ________ BL = _______
   MOV   AX,2
   MUL   BL    ; before: AX = ________ DEC ______ HEX _______________ binary
               ; after:  AX = ________ DEC ______ HEX _______________ binary
;
   MOV   AL,-2 ; before: BX = ________ BL = _______
   MUL   BL    ; before: AL = ________ DEC ______ HEX _______________ binary
               ; after:  AX = ________ DEC ______ HEX _______________ binary
;
   MOV   AL,-2 ; before  AX = ________
   IMUL   BL   ; before: AL = ________ DEC ______ HEX _______________ binary  
               ; after:  AX = ________ DEC ______ HEX _______________ binary  
;
   MOV   BX,-3
   MOV   AX,-2 ; before: DX = ________ BX = _______
   IMUL  BX    ; before: AX = ________ DEC ______ HEX _______________ binary 
               ; after:  AX = ________ DEC ______ HEX _______________ binary 
               ; after   Dx = ________ 0F=CF =_______
; 
   MOV   AX,-2  
   MUL   WordOp ; before: AX = ________ DEC ______ HEX _______________ binary 
                ; after:  AX = ________ DEC ______ HEX _______________ binary 
                ; after   Dx = ________ 0F=CF =_______

   MOV   AX,0FF04H  
   MUL   ByteOp  ; before: AL = ________ DEC ______ HEX _______________ binary 
                 ; after:  AX = ________ DEC ______ HEX _______________ binary OF=CF=__ 
                 ; afer:   Dx = ________ 0F=CF =_______

   MOV   BX,2000H
   MOV   AX,10H
   MUL   BX      ; before: DX = _______________ AX = ________________
                 ; after:  DX = _______________ AX = ________________    
                 ; afer:   DX = _________  0F=CF=__
; DIVISION examples
;; Note one or more of these instructions generates a divide error
;; make a note of the error.  Fix or comment out the instruction to
;; execute the rest of the operations.

   MOV   AX,0083H
   MOV   BL,2     
   DIV   BL      ;before: AX = ________ DEC ______ HEX _______________ binary
                 ; after: AX = ________ DEC ______ HEX _______________ binary OF=CF=__ 
   MOV   AX,-4   
   IDIV  ByteOp  ;before: AX = ________ DEC ______ HEX _______________ binary 
                 ; after: AX = ________ DEC ______ HEX _______________ binary OF=CF=__ 
   MOV   AL,-4   
   IDIV  ByteOp  ;before: AX = ________ DEC ______ HEX _______________ binary 
                 ; after: AX = ________ DEC ______ HEX _______________ binary OF=CF=__ 
   MOV   AX,-4
   DIV   WordOp  ;before: AX = ________ DEC ______ HEX _______________ binary
                 ; after: AX = ________ DEC ______ HEX _______________ binary OF=CF=__ 
;
   MOV   AL,-128  ; AX = ________ DEC ______ HEX _______________ binary OF=CF=__
   CBW
   MOV   BL,10
   IDIV  BL      ;before: AX = ________ DEC ______ HEX _______________ binary
                 ;after:  AX = ________ DEC ______ HEX _______________ binary OF=CF=__ 
   MOV   AX,-5000
   CWD
   MOV   BX,256
   IDIV  BX      ;before: DX = __________ AX_________
                 ;after:  DX = __________ AX ________
;
   MOV   AX,9
   cwd
   DIV   WORDOP  ;before: DX = __________ AX_________
                 ;after:  DX = __________ AX ________

          MOV  AH,4CH
          INT  21H
MAIN      ENDP
;INCLUDE   OUTDEC.ASM

    END       MAIN

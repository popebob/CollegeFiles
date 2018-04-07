;;                                   Name____________________________________
;; CSC 277 Lab7 - Addressing Modes
;; Look at this program and fill in the Predicted Result column, by viewing
;; the data segment and the instructions.
;; Next, Assemble and link the program, then run it in the debugger tracing
;; each instruction.  Fill in the Actual Result after each instruction 
;; executes.
.MODEL SMALL
.STACK 100h
.DATA
   num     DW   99
   list    DW   3, 6, 9, 12, 15
   char1   DB   '1'
   char2   DB   '2'
   num2    DW   64

.CODE
Start:
    mov     ax, @DATA
    mov     ds, ax
;                                    Before                     After
; immediate mode
    mov     ax, 20              ;ax=______________         ax=______________
    lea     bx,list             ;bx=______________         bx=______________

; register mode                     
    mov     ax, bx	            ;ax=______________         ax=______________	

; Direct mode memory references
    mov     ax, num	            ;ax=______________         ax=______________  
    mov     ax, num + 4         ;ax=______________         ax=______________                
    mov     ax, list	        ;ax=______________         ax=______________        
    mov     ax, list[7]	        ;ax=______________         ax=______________
    mov     ax,word ptr char1   ;ax=______________         ax=______________

;  Indirect memory references
    mov      si,6           
    mov      ax, list[si]       ;ax=______________         ax=______________  
    mov      ax, [list + si]    ;ax=______________         ax=______________
    mov      ax, list + [si]    ;ax=______________         ax=______________
    mov      ax, [si].list      ;ax=______________         ax=______________
; watch out for this one!
    mov      ax,list[si + 4]    ;ax=______________         ax=_______________
    
; bx has address of list & si still has #6 
    mov     ax, [bx]		    ;ax=______________         ax=______________
    mov     ax, [bx+3] 	        ;ax=______________         ax=______________
    mov     ax, [bx+si]         ;ax=______________         ax=______________
    mov     ax, [si][bp]        ;ax=______________         ax=______________
    mov     ax, [bx][si+2]      ;ax=______________         ax=______________
   
    mov     ax, 4c00h
    int     21h
END     Start


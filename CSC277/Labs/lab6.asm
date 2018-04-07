;;  Print a copy of this program for reference and debugger directions.
;;
;;  Based/Indexed Addressing Mode Lab, using the debugger to view data segment
;;  
;;  You are to assemble and link this program to run in the debugger:   
;;                 tasm /zi lab6
;;                 tlink /v lab6
;;                 td lab6
;; 1. In the debugger screen, select View from the pull-down menu.
;; 2. Select CPU view, then maximize the CPU window.  The CPU view displays 4 windows
;;    at once. Top Left is the Code segment program window, Top Right the registers, 
;;    Bottom Right the Stack Segment and BOTTOM LEFT is the DATA SEGMENT screen.
;; 3. Make the Data Segment screen the active screen by clicking within that area with
;;    the mouse or using the tab to change windows.  The active window is highlighted.
;; 4. Press the F7 function key twice to load the DS register with the segment address.
;; 5. Note, now the Data Segment window is loaded with the address in the ES register.
;;    To go to the place in memory where the data segment is located do the following:
;;    With The Data Segment Screen The Active Window, Press And hold the ALT key + F10 
;;    function key.   
;; 6. That should cause a shortcut menu to appear.  Select GoTo, the highlighted option.
;;    Here you need to enter the data segment address in the form: segment addr:offset
;;    Look at what is in the DS register (highlighted in white in the register display
;;    and type that first followed by an h for hex.  Then enter a colon followed by 4 
;;    zeros.  For example if  DS = 1DF2 you would enter:   1DF2h:0000
;;    When you press the return key, the display will change to allow you to view how
;;    data is stored in your data segment.   NOTE;  If you don't see Hello! Somewhere on 
;;    the right side of the data display you either need to maximize the CPU window OR 
;;    repeat step 6.
;; 7. Data in the Data window begins with an address  DS:0000 next is 8 bytes of data as
;;    it has been stored in memory.  Each byte is separated by a space for easy viewing.
;;    The right side of each line represents an ASCII display of data in memory.
;; 8. Examine the information stored in the data segment. Look at the data declarations
;;    in this program.  Notice how words are stored as low byte first followed by high,
;;    byte.  
;; 9. Single step through this program, tracing the effect of each instruction, as 
;;    indicated.  Remember when the wedge is on an instruction, it has not executed yet, 
;;    you must press the F7 key to execute the instruction.
;;
.MODEL SMALL
.STACK 100h
.DATA
let     DB   '1'
List    DW    2,4,6,8,10
Count   DB    5
OddList dw    1,3,5
Mess    DB    'Hello!',10,13,'$'
Wish    db    'Have a nice day',10,13,'$'

.CODE
Start:
    mov     ax, @DATA
    mov     ds, ax
;  Based/Indexed addressing 
    mov      si,12
    lea      bx,List
    mov      di,3
;      Base Index Registers:  bx = ___________ di= _________ si = __________
;
    mov      ax, word ptr let       ;ax=______________
;
    mov      ax, [bx]               ;ax=______________
;
    mov      ax, [bx+si]            ;ax=______________
; 
    mov      ax,[bx+6]              ;ax=______________
;    
    mov      ax,[bx+1]              ;ax=______________
;
    mov     ax, [bx+di]             ;ax=______________
;
    mov     ax, [si]                ;ax=______________
;
    mov     ax, [bx][si+2]          ;ax=______________
;
    mov     bx, offset oddlist
    mov     ax, [bx+ si]            ;ax=______________
;
    mov     ax, 4c00h
    int     21h
END     Start

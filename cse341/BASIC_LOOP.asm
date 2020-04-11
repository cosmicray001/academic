INCLUDE 'EMU8086.INC'
.MODEL SMALL
.STACK 100H
.DATA
.CODE
    MAIN PROC
        
        MOV CX, 10
        TOP:
        PRINTN "LOOP IS RUNNING"
        LOOP TOP
        
        PRINTN "LOOP IS ENDED"
        
        
        
        MOV AH, 4CH
        INT 21H
        MAIN ENDP
    END MAIN

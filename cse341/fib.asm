.MODEL SMALL
.STACK 100H
.DATA
    ANS DW ?
    TEMP DW ?
.CODE
    MAIN PROC
        MOV AX, @DATA
        MOV DS, AX
        
        MOV BX, 0
        MOV DX, 1
        MOV CX, 0
        MOV AX, 1
        
        START:
        CMP CX, 5
        JE SHOW
        INC CX
        
        MOV TEMP, DX
        ADD DX, BX
        ADD AX, DX
        MOV BX, TEMP
        
        JMP START
        
        
        SHOW:
        MOV ANS, AX
        
        MOV AH, 4CH
        INT 21H
        MAIN ENDP
    END MAIN

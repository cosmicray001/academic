INCLUDE 'EMU8086.INC'
.MODEL SMALL
.STACK 100H
.DATA
.CODE
    MAIN PROC
        
        
        MOV BX, 99
        
        CMP BX, 100
        JGE IF1
        
        CMP BX, 80
        JGE IF2
        
        CMP BX, 60
        JGE IF3
        
        CMP BX, 40
        JGE IF4
        
        JMP ELSE
        
        IF1:
        PRINTN "GREATER THEN OR EQUAL 100"
        JMP END_IF
        
        IF2:
        PRINTN "GREATER THAM OR EQUAL  80"
        JMP END_IF
        
        IF3:
        PRINTN "GREATER THAN OR EQUAL  60"
        JMP END_IF
        
        IF4:
        PRINTN "GREATER THAN OR EQUAL  40"
        JMP END_IF
        
        ELSE:
        PRINTN "THE NUMBER IS LESS THAN 40"
        
        END_IF:
        PRINTN "THE END"
        
        
        
        
        MOV AH, 4CH
        INT 21H
        MAIN ENDP
    END MAIN

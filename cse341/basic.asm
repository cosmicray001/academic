.MODEL SMALL
.STACK 100H
.DATA
    N1 DB 50   ; HERE ALL THE VARIABLE ARE DECLIARED
    N2 DB ?
    CHAR DB 'Z'
.CODE
    MAIN PROC
        
        MOV AX, @DATA  ; INPORTNG DATA
        MOV DS, AX
                       ; PRINTING FNC
        MOV AH, 2      ; BEFORE PRIONTING NEED TO MOV IN TO DL REG
        MOV DL, CHAR
        INT 21H
        
        MOV AH, 2      ; PRINTING NEWLINE
        MOV DL, 0AH
        INT 21H
        MOV DL, 0DH
        INT 21H
        
        MOV AH, 2
        MOV DL, N1
        INT 21H
        
        
        
        
        MOV AH, 1      ; TAKING INPUT
        INT 21H        ; STIRE INTO AL
        MOV BL, AL     ; MOVING TO BL               
                      
        
        
        MOV AH, 2
        MOV DL, 0AH    
        INT 21H
        MOV DL, 0DH
        INT 21H
        
        MOV DL, BL     ; ABTER STORING TO DL JUST PRINT
        INT 21H
        
        
        MOV AH, 4CH
        INT 21H
        MAIN ENDP
    END MAIN

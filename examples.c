#include "horrors.h"
// STRUCTS AND UNIONS
STRUCT
    INT B;
STRUCTNAME ST;
UNION
    FLOAT C;
UNIONNAME UNI;
MAIN BEGIN
    VAR FOO AS 2;
    VAR BAR AS 5;
    //IF CONDITONS
    IF FOO IS 4 AND BAR IS 5 THEN
        PRINT("FOO IS 4 AND BAR IS 5\n");
    ELSEIF FOO IS 2 OR BAR IS 10 THEN
        PRINT("FOO IS 2 OR BAR IS 10\n");
    ELSE
        PRINT("NON OF THE STATEMENTS ARE TRUE.\n");
    END

    INCREMENT(BAR);
    DECREMENT(FOO);
    //FOR LOOPS
    FOR EVER DO
        //CODE
    END

    FOR RANGE(I,10) DO
        //NOTE I IS DEFINED WHEN RANGE IS CALLED
    END

    // WHILE LOOPS
    WHILE TRUE DO
        //CODE
    END

    //SWITCH
    VAR C AS 10;
    SWITCH C DO
        CASE 19:
            //CODE
        CASE 10:
            //CODE
    END
    //ASSEMBLY EXECUTION
    //IDK ASSEMBLY LOL
    INLINE_ASM
    "MOV A,B"
    END_ASM;

    //READING USER INPUT
    CHAR R[12];
    READ("%s",R);

    RET 0;
END
#include <string>
#include <iostream>
#include "loT.h"

int buff_generate(char * buff, int Type, char * message, int n, loT & SloT, loT DloT = loT('-1'))
{
    if (Type == 0) {

        buff[0] = SloT.GetType();

        string SID;
        int SID_length;

        SID = SloT.GetID();
        SID_length = SloT.GetID_length();

        SID.copy(buff, SID_length, 1);
        buff[SID_length + 1] = '\0';

        return SID_length + 1;
    }
    else if (Type == 1) {
        buff[0] = SloT.GetType();

        string SID, DID;
        int SID_length, DID_length;

    }
    else {

    }
}
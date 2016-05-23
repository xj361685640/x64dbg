#ifndef _EXHANDLERINFO_H
#define _EXHANDLERINFO_H

#include "_global.h"

enum EX_HANDLER_TYPE
{
    EX_HANDLER_SEH,         // Structured
    EX_HANDLER_VEH,         // Vectored
    EX_HANDLER_VCH,         // Vectored continue
    EX_HANDLER_UNHANDLED,   // Unhandled
};

struct EX_HANDLER_INFO
{
    int count;
    duint* addresses;
};

bool ExHandlerGetInfo(EX_HANDLER_TYPE Type, EX_HANDLER_INFO* Info);
bool ExHandlerGetSEH(std::vector<duint> & Entries);
bool ExHandlerGetVEH(std::vector<duint> & Entries);
bool ExHandlerGetVCH(std::vector<duint> & Entries, bool UseVEH);
bool ExHandlerGetUnhandled(std::vector<duint> & Entries);

#endif //_EXHANDLERINFO_H
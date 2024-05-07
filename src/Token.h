// IWYU pragma: private, include Parser.h

#pragma once

#ifndef __C_NAVGATION_PARSER_TOKEN_H
#define __C_NAVGATION_PARSER_TOKEN_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "Config.h"

#include <stddef.h>

#define NAV_PARSER_MAX_NUM_OF_TOKENS (64) /// the max number of tokens

typedef enum
{
    None = 0,
    Talker,              /// Talker Satellite ID, e.g. GA
    MessageType,         /// Message Type, e.g. VTG
    DataField,           /// data
    EndOfLine    = '\r', /// '\r\n'
    Leading      = '$',  /// '$'
    ChecksumSign = '*',  /// '*'
    Seperator    = ',',  /// ','
    // Unknown      = 0xff, /// unknow token
} ETokenType;

typedef struct SToken
{
    ETokenType     type; /// token type
    char*          head; /// pointer of beginning char of this token
    size_t         len;  /// token length
    struct SToken* next; /// use single linked-list for dynamic memory management
} SToken;

#if NAV_PARSER_USE_MALLOC
extern SToken* token; /// the head token of single sentence for NEMA-0183
#else
extern SToken token[NAV_PARSER_MAX_NUM_OF_TOKENS]; /// tokens for single sentence of NEMA-0183
#endif // NAV_PARSER_USE_MALLOC

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __C_NAVGATION_PARSER_TOKEN_H

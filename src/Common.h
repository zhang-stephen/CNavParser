// IWYU pragma: private, include Parser.h

#pragma once

#ifndef __C_NAVIGATION_PARSER_COMMON_H
#define __C_NAVIGATION_PARSER_COMMON_H

#include <stdint.h>

/**
 * @brief satellite types, as transmitter identifier
 * @enum ESatelliteType
 */
typedef enum
{
    Gallieo,  /// EU
    Beidou,   /// CN
    GPS,      /// US
    QZSS,     /// JP
    NAVIC,    /// IN
    Glonass,  /// RU
    Combined, /// Combination of Multiple Satellite Systems
} ESatelliteType;

/**
 * @brief Quality Indicator for GPS signal
 * @enum EGpsQualityIndicator
 *
 */
typedef enum
{
    Invalid,
    SpsMode,
    DiffSpsMode,
    SBAS = DiffSpsMode,
    Rtk,
    FloatRtk,
    Estimated,
    ManualInput,
    Simulator,
} EGpsQualityIndicator;

/**
 * @brief directions
 *
 */
typedef enum
{
    North = 'N',
    South = 'S',
    East  = 'E',
    West  = 'W',
} EDirection;

/**
 * @brief latitude & longtitude
 *
 */
typedef struct
{
    EDirection direction;
    int8_t     degrees;
    float      minutes;
    float      final; /// degrees, minutes and seconds in a floating, the result of degrees + minutes
} SLongtitude, SLatitude;

typedef struct
{
    uint8_t  hour;
    uint8_t  minute;
    uint8_t  second;
    uint16_t millisecond;
} SUtcTimestamp;

#endif // __C_NAVIGATION_PARSER_COMMON_H

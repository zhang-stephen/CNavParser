// IWYU pragam: private, include Parser.h

#pragma once

#ifndef __C_NAVIGATION_PARSER_CONF_H
#define __C_NAVIGATION_PARSER_CONF_H

#include <stdbool.h>

// Common Configurations

#ifndef NAV_PARSER_PROTOCOL_VER_4_10
/**
 * @brief NEMA-0183 protocol version
 *
 */
#define NAV_PARSER_PROTOCOL_VER_4_10 true
#endif // NAV_PARSER_PROTOCOL_VER_4_10

#if !NAV_PARSER_PROTOCOL_VER_4_10
#error "NEMA-0183 Version 4.10 is supported only"
#endif // NAV_PARSER_PROTOCOL_VER_4_10

#ifndef NAV_PARSER_USE_MALLOC
/**
 * @brief use malloc to manage memory or not
 *
 */
#define NAV_PARSER_USE_MALLOC true
#endif // NAV_PARSER_USE_MALLOC

#ifndef NAV_PARSER_ENABLE_TEST
/**
 * @brief build for test or not
 *
 */
#define NAV_PARSER_ENABLE_TEST false
#endif // NAV_PARSER_ENABLE_TEST

// Sentence Type Enabled or Not Configuration
// RMC support
#ifndef NAV_PARSER_RMC_ENABLE
#define NAV_PARSER_RMC_ENABLE true
#endif // NAV_PARSER_RMC_ENABLE

// VTG support
#ifndef NAV_PARSER_VTG_ENABLE
#define NAV_PARSER_VTG_ENABLE true
#endif // NAV_PARSER_VTG_ENABLE

// GGA support
#ifndef NAV_PARSER_GGA_ENABLE
#define NAV_PARSER_GGA_ENABLE true
#endif // NAV_PARSER_GGA_ENABLE

// GSA support
#ifndef NAV_PARSER_GSA_ENABLE
#define NAV_PARSER_GSA_ENABLE true
#endif // NAV_PARSER_GSA_ENABLE

// GSV support
#ifndef NAV_PARSER_GSV_ENABLE
#define NAV_PARSER_GSV_ENABLE true
#endif // NAV_PARSER_GSV_ENABLE

// GLL support
#ifndef NAV_PARSER_GLL_ENABLE
#define NAV_PARSER_GLL_ENABLE true
#endif // NAV_PARSER_GLL_ENABLE

#endif // __C_NAVIGATION_PARSER_CONF_H

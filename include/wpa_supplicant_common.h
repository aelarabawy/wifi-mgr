/*
 * wpa_supplicant_common.h
 *
 *  Created on: Dec 12, 2014
 *      Author: aelarabawy
 */

#ifndef INCLUDE_WPA_SUPPLICANT_COMMON_H_
#define INCLUDE_WPA_SUPPLICANT_COMMON_H_

typedef enum {
	CLIENT_DBG_LVL_VERBOSE = 0,
	CLIENT_DBG_LVL_DEBUG,
	CLIENT_DBG_LVL_INFO,
	CLIENT_DBG_LVL_WRN,
	CLIENT_DBG_LVL_ERR
} ClientDbgLvl;


//Don't edit or re-order
typedef enum {
	EAP_NONE = 0,
	EAP_MD5,
	EAP_TLS,
	EAP_MSCHAPV2,
	EAP_PEAP,
	EAP_TTLS,
	EAP_GTC,
	EAP_OTP,
	EAP_SIM,
	EAP_LEAP,
	EAP_PSK,
	EAP_AKA,
	EAP_AKA_DASH,
	EAP_FAST,
	EAP_PAX,
	EAP_SAKE,
	EAP_GPSK,
	EAP_WSC,
	EAP_IKEV2,
	EAP_TNC,
	EAP_PWD,
	EAP_LAST
} EapMethod;

//Don't change Order
typedef enum {
	IF_STATE_UNKNOWN = 0,
	IF_STATE_INACTIVE,
	IF_STATE_SCANNING,
	IF_STATE_AUTHENTICATING,
	IF_STATE_ASSOCIATING,
	IF_STATE_ASSOCIATED,
	IF_STATE_4_WAY_HANDSHAKE,
	IF_STATE_GROUP_HANDSHAKE,
	IF_STATE_COMPLETED,
	IF_STATE_DISCONNECTED,
	IF_STATE_LAST
} IfaceState;
#endif /* INCLUDE_WPA_SUPPLICANT_COMMON_H_ */

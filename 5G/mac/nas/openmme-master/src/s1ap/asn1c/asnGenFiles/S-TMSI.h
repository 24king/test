/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "./asn1c/S1AP-IEs.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -gen-PER -findirect-choice -pdu=S1AP-PDU`
 */

#ifndef	_S_TMSI_H_
#define	_S_TMSI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MME-Code.h"
#include "M-TMSI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* S-TMSI */
typedef struct S_TMSI {
	MME_Code_t	 mMEC;
	M_TMSI_t	 m_TMSI;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S_TMSI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S_TMSI;
extern asn_SEQUENCE_specifics_t asn_SPC_S_TMSI_specs_1;
extern asn_TYPE_member_t asn_MBR_S_TMSI_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S_TMSI_H_ */
#include <asn_internal.h>

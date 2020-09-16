/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "./asn1c/S1AP-IEs.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -gen-PER -findirect-choice -pdu=S1AP-PDU`
 */

#ifndef	_Port_Number_H_
#define	_Port_Number_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Port-Number */
typedef OCTET_STRING_t	 Port_Number_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Port_Number_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Port_Number;
asn_struct_free_f Port_Number_free;
asn_struct_print_f Port_Number_print;
asn_constr_check_f Port_Number_constraint;
ber_type_decoder_f Port_Number_decode_ber;
der_type_encoder_f Port_Number_encode_der;
xer_type_decoder_f Port_Number_decode_xer;
xer_type_encoder_f Port_Number_encode_xer;
oer_type_decoder_f Port_Number_decode_oer;
oer_type_encoder_f Port_Number_encode_oer;
per_type_decoder_f Port_Number_decode_uper;
per_type_encoder_f Port_Number_encode_uper;
per_type_decoder_f Port_Number_decode_aper;
per_type_encoder_f Port_Number_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Port_Number_H_ */
#include <asn_internal.h>

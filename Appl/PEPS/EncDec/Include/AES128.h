
#ifndef	_AES128_H
#define	_AES128_H


#define kAES_ENC	0
#define kAES_DEC	1

void aes_enc_dec(unsigned char *state, unsigned char *key, unsigned char dir);

#endif	/* _AES_ENCRYPTION_H */


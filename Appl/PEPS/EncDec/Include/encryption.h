#ifndef	_ENCRYPTION_H
#define	_ENCRYPTION_H

/* TI DST40 or DST80 */
void StartEncryptionDst(u8 *Encryption, u8 *Challange);
void StopEncryptionDst(void);
u8 GetEncryptionDstStep(void);
void GetSignature(u8 *Signature, u8 cnt);
void EncryptionDst(void);

/* Passive Encryption / RKE Decryption */
void EncryptionPassiveRcv(u8 *EncData, u16 random);
void EncryptionPassiveTrs(u8 *EncData);
void Random5(u8 *RndData);
void DecryptionRKE(u8 *RcvData);

#endif	/*_ENCRYPTION_H*/


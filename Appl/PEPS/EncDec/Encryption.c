/*============================================================================*/
/*                        PLATO SOFTWARE GROUP                                */
/*============================================================================*/
/* FUNCTION COMMENT : SMK ESCL                                                */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 03/09/2009  |                               |     s.h hong     */
/*  HG SMK                                                                    */
/*============================================================================*/

#include	"type.h"
#include	"define.h"
#include "stddef.h"

#define	DST_KEY_80
/*
	TI Transponder part
	DST40 or DST_KEY_80
*/

#if defined(DST_KEY_80)
u8 brByte(u8 x);
u8 lower4upper4(u8 x1, u8 x2);
u8 upper4upper4(u8 x1, u8 x2);
#endif


static rom_tbl u8 f1a[]=
{
	8,0,8,0,0,0,8,8,
	0,0,8,8,0,8,0,8,
	8,0,8,0,8,8,0,0,
	0,8,0,8,8,8,0,0
};
static rom_tbl u8 f1b[]=
{
	0,4,4,4,0,4,0,0,
	0,0,4,0,4,4,4,0,
	4,0,4,0,4,4,0,0,
	0,0,4,4,0,4,0,4
};
static rom_tbl u8 f1c[]=
{
	2,0,0,0,2,0,2,2,
	2,2,0,2,0,0,0,2,
	2,0,2,2,2,0,0,0,
	0,0,0,2,2,2,0,2
};
static rom_tbl u8 f1d[]=
{
	0,1,0,1,1,0,1,0,
	1,1,0,0,1,1,0,0,
	0,0,1,1,0,0,1,1,
	0,1,0,1,1,0,1,0
};
static rom_tbl u8 f1e1[]=
{
	8,8,8,0,
	0,0,8,0,
	0,8,0,0,
	0,8,8,8
};
static rom_tbl u8 f1e2[]=
{
	2,2,2,0,
	0,0,2,0,
	0,2,0,0,
	0,2,2,2
};
static rom_tbl u8 f2[]=
{
	0,1,0,0,
	1,1,1,0,
	0,1,1,1,
	0,0,1,0
};
static rom_tbl u8 f3[]=
{
	0,1,3,3,2,1,2,0,
	0,2,1,2,3,3,1,0,
	0,1,1,1,0,0,1,0
};

#if	defined(DST_KEY_80)
/****************************************************************
*****************************************************************/
u8 brByte(u8 x)
{
	u8	y = x & 0xa5u;

	if( (x & kBit6)!=0 )	y |= kBit3;
	if( (x & kBit4)!=0 )	y |= kBit1;
	if( (x & kBit3)!=0 )	y |= kBit6;
	if( (x & kBit1)!=0 )	y |= kBit4;

	return	y;
}
/****************************************************************
*****************************************************************/
u8 lower4upper4(u8 x1, u8 x2)
{
	u8	y;

	y =  (x2>>4) & 0x0fu;
	y |= (x1<<4) & 0xf0u;

	return	y;
}
/****************************************************************
*****************************************************************/
u8 upper4upper4(u8 x1, u8 x2)
{
	u8	y;

	y =  (x2>>4) & 0x0fu;
	y |= x1 & 0xf0u;

	return	y;
}
#endif

static	u8	Dst_Count,Dst_Round;
static	u8	Dst_Encryption_Step;
static	u8	Dst_X[5],Dst_K[5],Dst_K0[5],Dst_K1[5];
/****************************************************************
*****************************************************************/
void StartEncryptionDst(u8 *Encryption, u8 *Challange)
{
	/* Setup Encryption Key */
	Dst_K0[0] = Encryption[0];
	Dst_K0[1] = Encryption[1];
	Dst_K0[2] = Encryption[2];
	Dst_K0[3] = Encryption[3];
	Dst_K0[4] = Encryption[4];
	Dst_K1[0] = Encryption[5];
	Dst_K1[1] = Encryption[6];
	Dst_K1[2] = Encryption[7];
	Dst_K1[3] = Encryption[8];
	Dst_K1[4] = Encryption[9];

	/* Setup Random : for DST+ support */
	if( Challange!=NULL )
	{
		Dst_X[0] = Challange[0];
		Dst_X[1] = Challange[1];
		Dst_X[2] = Challange[2];
		Dst_X[3] = Challange[3];
		Dst_X[4] = Challange[4];
	}

	/* initial value */
	Dst_Count = 2;
	Dst_Round = 200;

	/* Encryption Step initial */
	Dst_Encryption_Step = 1;	/* start encryption */
}

/****************************************************************
*****************************************************************/
void StopEncryptionDst(void)
{
	Dst_Encryption_Step = 0;
}

/****************************************************************
*****************************************************************/
u8 GetEncryptionDstStep(void)
{
	return	Dst_Encryption_Step;
}

/****************************************************************
*****************************************************************/
void GetSignature(u8 *Signature, u8 cnt)
{
	u8	i;

	for(i=0; i<cnt; i++)
	{
		*Signature++ = Dst_X[i];
	}
}

/****************************************************************
*	function		: void EncryptionDst()
*	descryption	: decryption with "Encryption_Data" and "Challange_Data"
*					  copy decryption result to signature
*	input			: none
*	output		: none
*****************************************************************/
void EncryptionDst(void)
{
	u8	Data[4];
	u8	i,loop_cnt;
	#if	defined(DST_KEY_80)
	u8	q0,q1,q2,q3,q4, q2r0,q2r1,q2r2,q2r3,q2r4;
	#endif

	/* condition check */
	if( Dst_Encryption_Step==1 )
	{
		loop_cnt = 10;
		do{
			#if	defined(DST_KEY_80)
			q0 = Dst_K0[0];
			q1 = Dst_K0[1];
			q2 = Dst_K0[2];
			q3 = Dst_K0[3];
			q4 = Dst_K0[4];

			if( q4 & 0x80 )
			{
				q4 = ~q4;
				q3 = ~q3;
				q2 = ~q2;
				q1 = ~q1;
				q0 = ~q0;
				q4 =  q4 | 0x80;	/* recover sign bit */
			}

			q4 = brByte(q4);	/* bit reversal */
			q3 = brByte(q3);
			q2 = brByte(q2);
			q1 = brByte(q1);
			q0 = brByte(q0);

			q2r0 = Dst_K1[0];
			q2r1 = Dst_K1[1];
			q2r2 = Dst_K1[2];
			q2r3 = Dst_K1[3];
			q2r4 = Dst_K1[4];
			if( q2r4 & 0x80 )
			{
				q2r4 = ~q2r4;
				q2r3 = ~q2r3;
				q2r2 = ~q2r2;
				q2r1 = ~q2r1;
				q2r0 = ~q2r0;
				q2r4 =  q2r4 | 0x80;	/* recover sign bit */
			}

			q2r4 = brByte(q2r4);	/* bit reversal */
			q2r3 = brByte(q2r3);
			q2r2 = brByte(q2r2);
			q2r1 = brByte(q2r1);
			q2r0 = brByte(q2r0);

			/* g_local = combine(q2_local, q_local); */
			/* 32 ...............................0
			   q4      q3      q2      q1      q0
			   q2r4    q2r3    q2r2/q4 q4/q3   q3/q2 */
			Dst_K[0] = lower4upper4(  q3,  q2);
			Dst_K[1] = lower4upper4(  q4,  q3);
			Dst_K[2] = upper4upper4(q2r2,  q4);
			Dst_K[3] = q2r3;
			Dst_K[4] = q2r4;
			#else	/* DST40 */
			Dst_K[0] = Dst_K0[0];
			Dst_K[1] = Dst_K0[1];
			Dst_K[2] = Dst_K0[2];
			Dst_K[3] = Dst_K0[3];
			Dst_K[4] = Dst_K0[4];
			#endif

			i=0;

			Data[0]=0;
			Data[1]=0;
			Data[2]=0;
			Data[3]=0;
			/*d15 calculate	routine*/
			if( Dst_X[4]&kBit0 )	Data[3] |= kBit4;
			if( Dst_K[4]&kBit0 )	Data[3] |= kBit3;
			if( Dst_X[3]&kBit0 )	Data[3] |= kBit2;
			if( Dst_K[3]&kBit0 )	Data[3] |= kBit1;
			if( Dst_X[2]&kBit0 )	Data[3] |= kBit0;
			/*d14 calculate	routine*/
			if( Dst_K[2]&kBit0 )	Data[2] |= kBit3;
			if( Dst_X[1]&kBit0 )	Data[2] |= kBit2;
			if( Dst_K[1]&kBit0 )	Data[2] |= kBit1;
			if( Dst_K[0]&kBit0 )	Data[2] |= kBit0;
			/*d13 calculate	routin*/
			if( Dst_X[4]&kBit1 )	Data[1] |= kBit4;
			if( Dst_K[4]&kBit1 )	Data[1] |= kBit3;
			if( Dst_X[3]&kBit1 )	Data[1] |= kBit2;
			if( Dst_K[3]&kBit1 )	Data[1] |= kBit1;
			if( Dst_X[2]&kBit1 )	Data[1] |= kBit0;
			/*d12 calculate	routin*/
			if( Dst_K[2]&kBit1 )	Data[0] |= kBit3;
			if( Dst_X[1]&kBit1 )	Data[0] |= kBit2;
			if( Dst_K[1]&kBit1 )	Data[0] |= kBit1;
			if( Dst_K[0]&kBit1 )	Data[0] |= kBit0;

			if( f2[ f1e1[Data[0]]|f1b[Data[1]]|f1e2[Data[2]]|f1d[Data[3]] ])
				i|=kBit3;

			Data[0]=0;
			Data[1]=0;
			Data[2]=0;
			Data[3]=0;
			/*d11 calculate	routine*/
			if( Dst_X[4]&kBit2 )	Data[3] |= kBit4;
			if( Dst_K[4]&kBit2 )	Data[3] |= kBit3;
			if( Dst_X[3]&kBit2 )	Data[3] |= kBit2;
			if( Dst_K[3]&kBit2 )	Data[3] |= kBit1;
			if( Dst_X[2]&kBit2 )	Data[3] |= kBit0;
			/*d10 calculate	routine*/
			if( Dst_K[2]&kBit2 )	Data[2] |= kBit4;
			if( Dst_X[1]&kBit2 )	Data[2] |= kBit3;
			if( Dst_K[1]&kBit2 )	Data[2] |= kBit2;
			if( Dst_X[0]&kBit2 )	Data[2] |= kBit1;
			if( Dst_K[0]&kBit2 )	Data[2] |= kBit0;
			/*d9 calculate	routine*/
			if( Dst_X[4]&kBit3 )	Data[1] |= kBit4;
			if( Dst_K[4]&kBit3 )	Data[1] |= kBit3;
			if( Dst_X[3]&kBit3 )	Data[1] |= kBit2;
			if( Dst_K[3]&kBit3 )	Data[1] |= kBit1;
			if( Dst_X[2]&kBit3 )	Data[1] |= kBit0;
			/*d8 calculate	routine*/
			if( Dst_K[2]&kBit3 )	Data[0] |= kBit4;
			if( Dst_X[1]&kBit3 )	Data[0] |= kBit3;
			if( Dst_K[1]&kBit3 )	Data[0] |= kBit2;
			if( Dst_X[0]&kBit3 )	Data[0] |= kBit1;
			if( Dst_K[0]&kBit3 )	Data[0] |= kBit0;

			if( f2[ f1a[Data[0]]|f1b[Data[1]]|f1c[Data[2]]|f1d[Data[3]] ])
				i|=kBit2;

			Data[0]=0;
			Data[1]=0;
			Data[2]=0;
			Data[3]=0;
			/*d7 calculate	routine*/
			if( Dst_X[4]&kBit4 )	Data[3] |= kBit4;
			if( Dst_K[4]&kBit4 )	Data[3] |= kBit3;
			if( Dst_X[3]&kBit4 )	Data[3] |= kBit2;
			if( Dst_K[3]&kBit4 )	Data[3] |= kBit1;
			if( Dst_X[2]&kBit4 )	Data[3] |= kBit0;
			/*d6 calculate	routine*/
			if( Dst_K[2]&kBit4 )	Data[2] |= kBit4;
			if( Dst_X[1]&kBit4 )	Data[2] |= kBit3;
			if( Dst_K[1]&kBit4 )	Data[2] |= kBit2;
			if( Dst_X[0]&kBit4 )	Data[2] |= kBit1;
			if( Dst_K[0]&kBit4 )	Data[2] |= kBit0;
			/*d5 calculate	routine*/
			if( Dst_X[4]&kBit5 )	Data[1] |= kBit4;
			if( Dst_K[4]&kBit5 )	Data[1] |= kBit3;
			if( Dst_X[3]&kBit5 )	Data[1] |= kBit2;
			if( Dst_K[3]&kBit5 )	Data[1] |= kBit1;
			if( Dst_X[2]&kBit5 )	Data[1] |= kBit0;
			/*d4 calculate	routine*/
			if( Dst_K[2]&kBit5 )	Data[0] |= kBit4;
			if( Dst_X[1]&kBit5 )	Data[0] |= kBit3;
			if( Dst_K[1]&kBit5 )	Data[0] |= kBit2;
			if( Dst_X[0]&kBit5 )	Data[0] |= kBit1;
			if( Dst_K[0]&kBit5 )	Data[0] |= kBit0;

			if( f2[ f1a[Data[0]]|f1b[Data[1]]|f1c[Data[2]]|f1d[Data[3]] ])
				i|=kBit1;

			Data[0]=0;
			Data[1]=0;
			Data[2]=0;
			Data[3]=0;
			/*d3 calculate	routine*/
			if( Dst_X[4]&kBit6 )	Data[3] |= kBit4;
			if( Dst_K[4]&kBit6 )	Data[3] |= kBit3;
			if( Dst_X[3]&kBit6 )	Data[3] |= kBit2;
			if( Dst_K[3]&kBit6 )	Data[3] |= kBit1;
			if( Dst_X[2]&kBit6 )	Data[3] |= kBit0;
			/*d2 calculate	routine*/
			if( Dst_K[2]&kBit6 )	Data[2] |= kBit4;
			if( Dst_X[1]&kBit6 )	Data[2] |= kBit3;
			if( Dst_K[1]&kBit6 )	Data[2] |= kBit2;
			if( Dst_X[0]&kBit6 )	Data[2] |= kBit1;
			if( Dst_K[0]&kBit6 )	Data[2] |= kBit0;
			/*d1 calculate	routine*/
			if( Dst_X[4]&kBit7 )	Data[1] |= kBit4;
			if( Dst_K[4]&kBit7 )	Data[1] |= kBit3;
			if( Dst_X[3]&kBit7 )	Data[1] |= kBit2;
			if( Dst_K[3]&kBit7 )	Data[1] |= kBit1;
			if( Dst_X[2]&kBit7 )	Data[1] |= kBit0;
			/*d0 calculate	routine*/
			if( Dst_K[2]&kBit7 )	Data[0] |= kBit4;
			if( Dst_X[1]&kBit7 )	Data[0] |= kBit3;
			if( Dst_K[1]&kBit7 )	Data[0] |= kBit2;
			if( Dst_X[0]&kBit7 )	Data[0] |= kBit1;
			if( Dst_K[0]&kBit7 )	Data[0] |= kBit0;

			if( f2[ f1a[Data[0]]|f1b[Data[1]]|f1c[Data[2]]|f1d[Data[3]] ])
				i|=kBit0;

			i = f3[i] ^ Dst_X[0];

			Dst_X[0] >>= 2;
			Dst_X[0] |= Dst_X[1]<<6;
			Dst_X[1] >>= 2;
			Dst_X[1] |= Dst_X[2]<<6;
			Dst_X[2] >>= 2;
			Dst_X[2] |= Dst_X[3]<<6;
			Dst_X[3] >>= 2;
			Dst_X[3] |= Dst_X[4]<<6;
			Dst_X[4] >>= 2;
			Dst_X[4] |= i<<6;

			#if	defined(DST_KEY_80)

			Dst_Count = 0;
			i=0;
			if( Dst_K0[0]&kBit0 )	i++;
			if( Dst_K0[0]&kBit2 )	i++;
			if( Dst_K0[2]&kBit3 )	i++;
			if( Dst_K0[2]&kBit5 )	i++;

			Dst_K0[0] >>= 1;
			Dst_K0[0] |= Dst_K0[1]<<7;
			Dst_K0[1] >>= 1;
			Dst_K0[1] |= Dst_K0[2]<<7;
			Dst_K0[2] >>= 1;
			Dst_K0[2] |= Dst_K0[3]<<7;
			Dst_K0[3] >>= 1;
			Dst_K0[3] |= Dst_K0[4]<<7;
			Dst_K0[4] >>= 1;
			Dst_K0[4] |= i<<7;

			i=0;
			if( Dst_K1[0]&kBit0 )	i++;
			if( Dst_K1[0]&kBit2 )	i++;
			if( Dst_K1[2]&kBit3 )	i++;
			if( Dst_K1[2]&kBit5 )	i++;

			Dst_K1[0] >>= 1;
			Dst_K1[0] |= Dst_K1[1]<<7;
			Dst_K1[1] >>= 1;
			Dst_K1[1] |= Dst_K1[2]<<7;
			Dst_K1[2] >>= 1;
			Dst_K1[2] |= Dst_K1[3]<<7;
			Dst_K1[3] >>= 1;
			Dst_K1[3] |= Dst_K1[4]<<7;
			Dst_K1[4] >>= 1;
			Dst_K1[4] |= i<<7;

			#else	/* DST40 */

			Dst_Count--;
			if( Dst_Count == 0 )
			{
				i=0;
				if( Dst_K0[0]&kBit0 )	i++;
				if( Dst_K0[0]&kBit2 )	i++;
				if( Dst_K0[2]&kBit3 )	i++;
				if( Dst_K0[2]&kBit5 )	i++;

				Dst_K0[0] >>= 1;
				Dst_K0[0] |= Dst_K0[1]<<7;
				Dst_K0[1] >>= 1;
				Dst_K0[1] |= Dst_K0[2]<<7;
				Dst_K0[2] >>= 1;
				Dst_K0[2] |= Dst_K0[3]<<7;
				Dst_K0[3] >>= 1;
				Dst_K0[3] |= Dst_K0[4]<<7;
				Dst_K0[4] >>= 1;
				Dst_K0[4] |= i<<7;

				Dst_Count=3;
			}
			#endif

			Dst_Round--;
			loop_cnt--;
		}while(loop_cnt);

		if( Dst_Round == 0 )
		{
			Dst_Encryption_Step = 2;	/* complete */
		}
	}
}



/*
	MTI like
	Encryption / Decryption
	
	KEY = fixed ("STFRKE00")
*/


static rom_tbl u8	tbl_key[]={'S','T','F','F','O','B','0','0'};
static rom_tbl u8	eNLF[]=
{
	0,1,1,1,0,1,0,0,
	0,0,1,0,1,1,1,0,
	0,0,1,1,1,0,1,0,
	0,1,0,1,1,1,0,0
};

void EncryptionPassiveRcv(u8 *EncData, u16 random)
{
	u8	gen_key[8];
	
	u8	KeyIndex;
	u8	NlfIndex;
	u8	XorIndex;
	u8	KeyBuff;
	u8	Count1,Count2;
	
	gen_key[0] = gen_key[2] = random & 0xff;
	gen_key[1] = gen_key[3] = random >> 8;
	gen_key[4] = EncData[0];
	gen_key[5] = EncData[1];
	gen_key[6] = EncData[2];
	gen_key[7] = EncData[3];
	
	Count2=(144/8);
	KeyIndex=0;
	
	do{
		KeyBuff = gen_key[KeyIndex];
		Count1 = 8;
		do{
			NlfIndex = (EncData[0]&2) ? 1 : 0;
			if( EncData[1] & 2 )	NlfIndex |= 2;
			if( EncData[2] & 16 )	NlfIndex |= 4;
			if( EncData[3] & 4 )	NlfIndex |= 8;
			if( EncData[3] & 128 )	NlfIndex |= 16;
		
			XorIndex = eNLF[NlfIndex] ^ EncData[0] ^ EncData[2] ^ KeyBuff;
			
			KeyBuff >>= 1;
			if(EncData[0]&1)	{KeyBuff|=0x80u;}
			EncData[0] >>= 1;
			if(EncData[1]&1)	{EncData[0]|=0x80u;}
			EncData[1] >>= 1;
			if(EncData[2]&1)	{EncData[1]|=0x80u;}
			EncData[2] >>= 1;
			if(EncData[3]&1)	{EncData[2]|=0x80u;}
			EncData[3] >>= 1;
			if(XorIndex&1)		{EncData[3]|=0x80u;}
		}while(--Count1);
		KeyIndex++;
		KeyIndex &= 7;
	}while(--Count2);
}

void EncryptionPassiveTrs(u8 *EncData)
{
	u8	KeyIndex;
	u8	NlfIndex;
	u8	XorIndex;
	u8	KeyBuff;
	u8	Count1,Count2;
	
	Count2=(144/8);
	KeyIndex=0;
	
	do{
		KeyBuff = tbl_key[KeyIndex];
		Count1 = 8;
		do{
			NlfIndex = (EncData[0]&2) ? 1 : 0;
			if( EncData[1] & 2 )	NlfIndex |= 2;
			if( EncData[2] & 16 )	NlfIndex |= 4;
			if( EncData[3] & 4 )	NlfIndex |= 8;
			if( EncData[3] & 128 )	NlfIndex |= 16;
		
			XorIndex = eNLF[NlfIndex] ^ EncData[0] ^ EncData[2] ^ KeyBuff;
			
			KeyBuff >>= 1;
			if(EncData[0]&1)	{KeyBuff|=0x80u;}
			EncData[0] >>= 1;
			if(EncData[1]&1)	{EncData[0]|=0x80u;}
			EncData[1] >>= 1;
			if(EncData[2]&1)	{EncData[1]|=0x80u;}
			EncData[2] >>= 1;
			if(EncData[3]&1)	{EncData[2]|=0x80u;}
			EncData[3] >>= 1;
			if(XorIndex&1)		{EncData[3]|=0x80u;}
		}while(--Count1);
		KeyIndex++;
		KeyIndex &= 7;
	}while(--Count2);
}

static rom_tbl u8	tbl_rnd[]={'R','a','n','d','o','m','0','5'};
void Random5(u8 *RndData)
{
	u8	KeyIndex;
	u8	NlfIndex;
	u8	XorIndex;
	u8	KeyBuff;
	u8	Count1,Count2;
	
	Count2=(80/8);
	KeyIndex=0;
	
	do{
		KeyBuff = tbl_rnd[KeyIndex];
		Count1 = 8;
		do{
			NlfIndex = (RndData[0]&2) ? 1 : 0;
			if( RndData[1] & 2 )	NlfIndex |= 2;
			if( RndData[2] & 16 )	NlfIndex |= 4;
			if( RndData[3] & 4 )	NlfIndex |= 8;
			if( RndData[3] & 128 )	NlfIndex |= 16;
		
			XorIndex = eNLF[NlfIndex] ^ RndData[0] ^ RndData[2] ^ KeyBuff;
			
			KeyBuff >>= 1;
			if(RndData[0]&1)	{KeyBuff|=0x80u;}
			RndData[0] >>= 1;
			if(RndData[1]&1)	{RndData[0]|=0x80u;}
			RndData[1] >>= 1;
			if(RndData[2]&1)	{RndData[1]|=0x80u;}
			RndData[2] >>= 1;
			if(RndData[3]&1)	{RndData[2]|=0x80u;}
			RndData[3] >>= 1;
			if(XorIndex&1)		{RndData[3]|=0x80u;}
		}while(--Count1);
		KeyIndex++;
		KeyIndex &= 7;
	}while(--Count2);
	
	RndData[4] ^= RndData[0]^RndData[1]^RndData[2]^RndData[3];
}

static rom_tbl u8	dNLF[]=
{
	0x00,0x80,0x80,0x80,0x00,0x80,0x00,0x00,
	0x00,0x00,0x80,0x00,0x80,0x80,0x80,0x00,
	0x00,0x00,0x80,0x80,0x80,0x00,0x80,0x00,
	0x00,0x80,0x00,0x80,0x80,0x80,0x00,0x00
};

void DecryptionRKE(u8 *RcvData)
{
	u8	KeyIndex;
	u8	NlfIndex;
	u8	XorIndex;
	u8	KeyBuff;
	u8	Count1,Count2;

	Count2 = (144/8);
	KeyIndex = 1;

	do{
		/*
		gcDecryptionStep	: 0 1 2 3 4 ....
		Index				: 1 0 7 6 5 ....
		start index = 1
		*/
		KeyBuff = tbl_key[KeyIndex];
		Count1 = 8;
		do{
			NlfIndex = RcvData[0] & 1;
			if( RcvData[1] & 1 )	NlfIndex |= 2;
			if( RcvData[2] & 8 )	NlfIndex |= 4;
			if( RcvData[3] & 2 )	NlfIndex |= 8;
			if( RcvData[3] & 64 )	NlfIndex |= 16;	
			
			XorIndex = dNLF[NlfIndex] ^ RcvData[1] ^ RcvData[3] ^ KeyBuff;	
			
			KeyBuff <<= 1;
			if(RcvData[3]&0x80u)	{KeyBuff|=1;}
			RcvData[3] <<= 1;
			if(RcvData[2]&0x80u)	{RcvData[3]|=1;}
			RcvData[2] <<= 1;
			if(RcvData[1]&0x80u)	{RcvData[2]|=1;}
			RcvData[1] <<= 1;
			if(RcvData[0]&0x80u)	{RcvData[1]|=1;}
			RcvData[0] <<= 1;
			if(XorIndex&0x80u)		{RcvData[0]|=1;}
		}while( --Count1 );
		KeyIndex--;
		KeyIndex &= 7;
	}while( --Count2 );
}



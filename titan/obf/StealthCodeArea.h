/*****************************************************************************
; Header: StealthCodeArea.h
; Description: Header to create a "dummy" code area to insert the protection 
;              code
;
; Authors: Rafael Ahucha 
; (c) 2013 Oreans Technologies 
;****************************************************************************/


/******************************************************************************
;                                Prototypes
;*****************************************************************************/

#define STEALTH_AUX_FUNCTION void CVSX(unsigned int i) {printf("%i", i);}

#define STEALTH_AREA_START CVSX(0xA1A2A3A4); CVSX(0xA4A3A2A1); \
                           CVSX(0xB1A1B2A2); CVSX(0xB8A8A1A1);

#define STEALTH_AREA_END CVSX(0xB6B5B3B6); CVSX(0xA2B2C2D2); \
                         CVSX(0xA9A8A2A2); CVSX(0xA0A9B9B8);

#define STEALTH_AREA_CHUNK \
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(1); CVSX(2); CVSX(1); CVSX(3); CVSX(4); CVSX(2); CVSX(10); CVSX(2);\
	  CVSX(4); CVSX(1); CVSX(12); CVSX(1); CVSX(5); CVSX(2); CVSX(3); CVSX(4);


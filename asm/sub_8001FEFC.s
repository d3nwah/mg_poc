	opt	c+, at+, e+, n-
	section .text

	xdef sub_8001FEFC
sub_8001FEFC:
	dw 0x27BDFFE8 ; 0x8001FEFC
	dw 0xAFB00010 ; 0x8001FF00
	dw 0xAFBF0014 ; 0x8001FF04
	dw 0x0C007FA0 ; 0x8001FF08
	dw 0x00A08021 ; 0x8001FF0C
	dw 0x24440003 ; 0x8001FF10
	dw 0x0C008046 ; 0x8001FF14
	dw 0x02002821 ; 0x8001FF18
	dw 0x8FBF0014 ; 0x8001FF1C
	dw 0x8FB00010 ; 0x8001FF20
	dw 0x03E00008 ; 0x8001FF24
	dw 0x27BD0018 ; 0x8001FF28
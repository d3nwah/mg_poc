	opt	c+, at+, e+, n-
	section .text

	xdef sub_80024404
sub_80024404:
	dw 0x3C03800A ; 0x80024404
	dw 0x2402FFFF ; 0x80024408
	dw 0xAC62D510 ; 0x8002440C
	dw 0x3C03800A ; 0x80024410
	dw 0x24020001 ; 0x80024414
	dw 0x03E00008 ; 0x80024418
	dw 0xAC62D514 ; 0x8002441C

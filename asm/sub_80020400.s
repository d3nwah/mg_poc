	opt	c+, at+, e+, n-
	section .text

	xdef sub_80020400
sub_80020400:
	dw 0x27BD0078 ; 0x80020400
	dw 0x03E00008 ; 0x80020404
	dw 0x24020001 ; 0x80020408

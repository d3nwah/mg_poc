	opt	c+, at+, e+, n-
	section .text

	xdef sub_8001F670
sub_8001F670:
	dw 0x8C820004 ; 0x8001F670
	dw 0x8C83000C ; 0x8001F674
	dw 0x00821021 ; 0x8001F678
	dw 0xAC820004 ; 0x8001F67C
	dw 0x8C820008 ; 0x8001F680
	dw 0x00831821 ; 0x8001F684
	dw 0xAC83000C ; 0x8001F688
	dw 0x8C830014 ; 0x8001F68C
	dw 0x00821021 ; 0x8001F690
	dw 0xAC820008 ; 0x8001F694
	dw 0x8C820010 ; 0x8001F698
	dw 0x00831821 ; 0x8001F69C
	dw 0xAC830014 ; 0x8001F6A0
	dw 0x00821021 ; 0x8001F6A4
	dw 0xAC820010 ; 0x8001F6A8
	dw 0x03E00008 ; 0x8001F6AC
	dw 0x24020001 ; 0x8001F6B0
	dw 0x03E00008 ; 0x8001F6B4
	dw 0x24020001 ; 0x8001F6B8

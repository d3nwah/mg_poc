	opt	c+, at+, e+, n-
	section .text

	xdef sub_80022CBC
sub_80022CBC:
	dw 0x8C820014 ; 0x80022CBC
	dw 0x00000000 ; 0x80022CC0
	dw 0x1440000C ; 0x80022CC4
	dw 0x00000000 ; 0x80022CC8
	dw 0x8C820008 ; 0x80022CCC
	dw 0x00000000 ; 0x80022CD0
	dw 0x8C430000 ; 0x80022CD4
	dw 0x00000000 ; 0x80022CD8
	dw 0x24620003 ; 0x80022CDC
	dw 0x00021082 ; 0x80022CE0
	dw 0xAC820018 ; 0x80022CE4
	dw 0x2442FE00 ; 0x80022CE8
	dw 0xAC82001C ; 0x80022CEC
	dw 0x3C02800A ; 0x80022CF0
	dw 0xAC43D4EC ; 0x80022CF4
	dw 0x03E00008 ; 0x80022CF8
	dw 0x24020001 ; 0x80022CFC

	.file	"q5.c"
# GNU C17 (Ubuntu 13.3.0-6ubuntu2~24.04) version 13.3.0 (x86_64-linux-gnu)
#	compiled by GNU C version 13.3.0, GMP version 6.3.0, MPFR version 4.2.1, MPC version 1.3.1, isl version isl-0.26-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -mtune=generic -march=x86-64 -O2 -fasynchronous-unwind-tables -fstack-protector-strong -fstack-clash-protection -fcf-protection
	.text
	.p2align 4
	.globl	by_value
	.type	by_value, @function
by_value:
.LFB23:  # local function begin 23
	.cfi_startproc
	endbr64	
# q5.c:10: }
	ret	
	.cfi_endproc
.LFE23:  # local functionm end 23  函数作用域
	.size	by_value, .-by_value
	.p2align 4
	.globl	by_pointer
	.type	by_pointer, @function
by_pointer:
.LFB24:
	.cfi_startproc
	endbr64	
# q5.c:14:     if (*a > *b) {
	movsd	(%rdi), %xmm1	# *a_5(D), _1
# q5.c:14:     if (*a > *b) {
	movsd	(%rsi), %xmm0	# *b_6(D), _2
# q5.c:14:     if (*a > *b) {
	comisd	%xmm0, %xmm1	# _2, _1
	jbe	.L8	#,
# q5.c:15:         *b = *a;
	movsd	%xmm1, (%rsi)	# _1, *b_6(D)
	ret	
	.p2align 4,,10
	.p2align 3
.L8:
# q5.c:17:         *a = *b;
	movsd	%xmm0, (%rdi)	# _2, *a_5(D)
# q5.c:19: }
	ret	
	.cfi_endproc
.LFE24:
	.size	by_pointer, .-by_pointer
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB25:
	.cfi_startproc
	endbr64	
# q5.c:26: }
	xorl	%eax, %eax	#
	ret	
	.cfi_endproc
.LFE25:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:

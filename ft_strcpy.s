global ft_strcpy

ft_strcpy:
	push rbp
	mov rbp, rsp
	xor r8, r8
loop:
	cmp [rsi+r8], byte 0
	je loop_end
	mov cl, [rsi+r8]
	mov [rdi+r8], cl
	add r8, 1
	jmp loop
loop_end:
	mov [rdi+r8], byte 0
	mov rax, rdi
	mov rsp, rbp
	pop rbp
	ret

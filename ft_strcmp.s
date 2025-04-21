global ft_strcmp

ft_strcmp:
	push rbp
	mov rbp, rsp
	xor rax, rax
	xor rcx, rcx
	xor r8, r8
loop:
	mov al, [rdi+r8]
	mov cl, [rsi+r8]
	cmp al, cl
	jne loop_end
	cmp al, 0
	je loop_end
	add r8, 1
	jmp loop
loop_end:
	sub rax, rcx
	mov rsp, rbp
	pop rbp
	ret

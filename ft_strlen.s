global ft_strlen
ft_strlen:
	push rbp
	mov rbp, rsp
	xor rax, rax
loop:
	cmp [rdi+rax], byte 0
	je loop_end
	add rax, 1
	jmp loop
loop_end:
	mov rsp, rbp
	pop rbp
	ret

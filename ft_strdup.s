extern ft_strlen
extern ft_strcpy
extern malloc
global ft_strdup

ft_strdup:
	push rbp
	mov rbp, rsp
	push rdi
	call ft_strlen
	mov rdi, rax
	add rdi, 1
	call malloc wrt ..plt
	cmp rax, 0
	je malloc_fail
	mov rdi, rax
	pop rsi
	call ft_strcpy
	mov rsp, rbp
	pop rbp
	ret

malloc_fail:
	mov rax, 0
	mov rsp, rbp
	pop rbp
	ret

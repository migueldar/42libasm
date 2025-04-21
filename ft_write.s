extern __errno_location
global ft_write

ft_write:
	push rbp
	mov rbp, rsp
	mov rax, 1
	syscall
	cmp rax, 0
	jge write_end
	mov r8, rax
	neg r8
	call __errno_location wrt ..plt
	mov [rax], r8
	mov rax, -1

write_end:
	mov rsp, rbp
	pop rbp
	ret
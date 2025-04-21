extern __errno_location
global ft_read

ft_read:
	push rbp
	mov rbp, rsp
	mov rax, 0
	syscall
	cmp rax, 0
	jge read_end
	mov r8, rax
	neg r8
	call __errno_location wrt ..plt
	mov [rax], r8
	mov rax, -1

read_end:
	mov rsp, rbp
	pop rbp
	ret
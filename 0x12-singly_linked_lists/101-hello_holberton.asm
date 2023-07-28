section .data		; #Data mem segment of the program
	hello db 'Hello, Holberton', 0xA ; #Declaring str,(0xA == '\n')
	len equ $ - hello 		; #STRLEN(location counter - mem address)

section .text	; #Code mem segment
	global main   ; #Make label globaly visible(main == entry point)

main:
	; sys_write (syscall numbet = 1) ; #WRITE sys_call
	mov rax, 1			; #syscall number for sys_write
	mov rdi, 1			; #file descriptor 1 (stdout)
	mov rsi, hello			; #ptr to str in .data
	mov rdx, len			; #str lenght
	syscall				; #Invoke sys_call

	; sys_exit (syscall number = 60) ; #EXIT sys_call
	mov rax,  60			; #syscall num for sys_exit
	xor rdi, rdi			; #return code 0
	syscall				; #Invoke sys_call

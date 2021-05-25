.data
	prompt1: .asciiz "Enter the Number 1 (5) : "
	prompt2: .asciiz "Enter the Number 2 (2) : "
	result: .asciiz "The Result of Left Shift Operation is : "

.text

	.globl  main

	main:

		addi $v0,$0,4
		la $a0,prompt1
		syscall

		addi $v0,$0,5
		syscall
		add $8,$0,$v0

		addi $v0,$0,4
		la $a0,prompt2
		syscall

		addi $v0,$0,5
		syscall
		add $9,$0,$v0

		add $8,$8,$9
		
		sll $9,$8,2

		addi $v0,$0,4
		la $a0,result
		syscall

		addi $v0,$0,1
		add $a0,$0,$9
		syscall
		

exit:
	ori $v0,$0,10
	syscall

	
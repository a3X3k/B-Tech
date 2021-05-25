.data
	prompt1: .asciiz "Enter the Cost of 1 Apple : "
	prompt2: .asciiz "Enter the Number of Apples (n) = (16) : "
	result: .asciiz "The Cost of (n = 16) Apples is : "

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
		
		sll $9,$8,4

		addi $v0,$0,4
		la $a0,result
		syscall

		addi $v0,$0,1
		add $a0,$0,$9
		syscall
		

exit:
	ori $v0,$0,10
	syscall

	
.data
	prompt1: .asciiz "Enter the Length : "
	prompt2: .asciiz "Enter the Breadth : "
	result: .asciiz "*"
	newline: .asciiz "\n"

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
	
		li $10,0
	
	Loop:
		li $11,0
		bne $10,$9, Print
		j Exit

	Print:
		addi $11,$11,1
		
		addi $v0,$0,4
		la $a0,result
		syscall
		
		bne $11,$8, Print
		beq $11,$8, Line

	Line:
		addi $v0,$0,4
		la $a0,newline
		syscall
		addi $10,$10,1
		j Loop
		
	Exit:
		ori $v0,$0,10
		syscall	
		
		
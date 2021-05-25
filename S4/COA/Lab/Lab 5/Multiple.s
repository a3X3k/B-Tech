.data
	prompt1: .asciiz "Enter the Number 1 : "
	prompt2: .asciiz "Enter the Number 2 : "
	prompt3: .asciiz "It is the Divisible of One Another."
	prompt4: .asciiz "It is not the Divisible of One Another."

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
	
		slt $10,$8,$9

		beq $t1,1,B_Greater
		beq $10,$zero,A_Greater

	B_Greater:
		
		div $t1, $t0
		mfhi $a0
		beq $a0,$0,P1
		j P2

	A_Greater:
		
		div $t0, $t1
		mfhi $a0
		beq $a0,$0,P1
		j P2

	P1:
		addi $v0,$0,4
		la $a0,prompt3
		syscall
		j Exit
	
	P2:
		addi $v0,$0,4
		la $a0,prompt4
		syscall
		j Exit
		
	Exit:
		ori $v0,$0,10
		syscall	
		
		
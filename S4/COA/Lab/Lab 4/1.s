.data
	input: .asciiz "Enter the Number of integers :  "
	output: .asciiz "Sum of (i) till (n) = "

.text

	.globl main

	main:
		
		li $v0,4
		la $a0,input
		syscall

		li $v0,5
		syscall
		move $t0,$v0

		li $t1,0
		li $t2,0

	Continue:
		
		addi $t1,$t1,1
		add $t2,$t2,$t1

		beq $t0,$t1,Quit 
		j Continue

	Quit:
		li $v0,4
		la $a0,output
		syscall

		li $v0,1
		move $a0,$t2
		syscall

		li $v0,10
		syscall
		
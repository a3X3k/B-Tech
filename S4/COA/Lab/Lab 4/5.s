.data
	input1: .asciiz "Enter ( i ) :  "
	input2: .asciiz "Enter ( j ) :  "
	input3: .asciiz "Enter ( k ) :  "
	output1: .asciiz "\n( i ) = " 
	output2: .asciiz "\n( j ) = "
	output3: .asciiz "\n( k ) = "

	prompt1: .asciiz "\nIf Executed\n"
	prompt2: .asciiz "\nElse Executed\n"


.text

	.globl main

	main:
		
		li $v0,4
		la $a0,input1
		syscall

		li $v0,5
		syscall
		move $t0,$v0 #i

		li $v0,4
		la $a0,input2
		syscall

		li $v0,5
		syscall
		move $t1,$v0 #j

		li $v0,4
		la $a0,input3
		syscall

		li $v0,5
		syscall
		move $t2,$v0 #j

		beq $t0,$t1,If	
		beq $t0,$t2,If

		li $v0,4 
		la $a0,prompt2 
		syscall

		add $t1,$t0,$t2
	
		j Exit
	
	
	If:

		li $v0,4 
		la $a0,prompt1 
		syscall

		addi $t0,$t0,1
		addi $t1,$t1,-1

	
	Exit:

		li $v0,4 
		la $a0,output1 
		syscall

		li $v0,1
		move $a0,$t0
		syscall

		li $v0,4 
		la $a0,output2 
		syscall

		li $v0,1
		move $a0,$t1
		syscall

		li $v0,4 
		la $a0,output3
		syscall

		li $v0,1
		move $a0,$t2
		syscall

		li $v0,10
		syscall
		
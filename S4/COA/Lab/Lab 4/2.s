.data
	input1: .asciiz "Enter ( i ) :  "
	input2: .asciiz "Enter ( j ) :  "
	output1: .asciiz "\n( i ) = " 
	output2: .asciiz "\n( j ) = "

	prompt1: .asciiz "\nIf Executed\n" 
	prompt2: .asciiz "\nIf Not Executed\n" 
	


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

		beq $t0,$t1,Increment

		li $v0,4
		la $a0,prompt2
		syscall

		j Exit 

	Increment:

		li $v0,4
		la $a0,prompt1
		syscall

		addi $t0,$t0,1
		j Exit

	Exit:

		addi $t1,$t1,-1
		
		li $v0,4
		la $a0,output1 #Sample Checking of ( i )
		syscall

		li $v0,1
		move $a0,$t0
		syscall

		li $v0,4
		la $a0,output2 #Sample Checking of ( j )
		syscall

		li $v0,1
		move $a0,$t1
		syscall

		li $v0,10
		syscall
		
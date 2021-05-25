.data
	input1: .asciiz "Enter ( i ) :  "
	input2: .asciiz "Enter ( j ) :  "
	output1: .asciiz "\n\n( i ) = " 
	output2: .asciiz "\n( j ) = "
	output3: .asciiz "\n( j ) After Adding with ( i ) = "

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

		beq $t0,$t1,Increment
		bne $t0,$t1,Decrement
		

	Increment:
		
		addi $t0,$t0,1

		li $v0,4 
		la $a0,prompt1 
		syscall

		li $v0,4 #Sample Checking of ( i )
		la $a0,output1 
		syscall

		li $v0,1
		move $a0,$t0
		syscall

		li $v0,4 #Sample Checking of ( j )
		la $a0,output2 
		syscall

		li $v0,1
		move $a0,$t1
		syscall

		j Exit
	
	Decrement:
		
		addi $t1,$t1,-1

		li $v0,4 
		la $a0,prompt2 
		syscall

		li $v0,4 #Sample Checking of ( i )
		la $a0,output1 
		syscall

		li $v0,1
		move $a0,$t0
		syscall

		li $v0,4 #Sample Checking of ( j )
		la $a0,output2 
		syscall

		li $v0,1
		move $a0,$t1
		syscall

		j Exit
		

	Exit:
		
		add $t1,$t1,$t0
	
		li $v0,4 #Sample Checking of ( i )
		la $a0,output1 
		syscall

		li $v0,1
		move $a0,$t0
		syscall

		li $v0,4 #Sample Checking of ( j )
		la $a0,output3 
		syscall

		li $v0,1
		move $a0,$t1
		syscall

		li $v0,10
		syscall
		
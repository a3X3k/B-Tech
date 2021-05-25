.data
	prompt1: .asciiz "Enter the Number 1 : "
	prompt2: .asciiz "Enter the Number 2 : "
	output1: .asciiz "\nNumber 1 : "
	output2: .asciiz "\nNumber 2 : "
	output3: .asciiz "\n\nAfter Swapping Number 1 : "
	output4: .asciiz "\nAfter Swapping Number 2 : "

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

		li $v0,4
    		la $a0,output1
    		syscall

    		li $v0,1
    		move $a0,$8 
    		syscall

		li $v0,4
    		la $a0,output2
    		syscall

    		li $v0,1
    		move $a0,$9 
    		syscall
	
		move $10,$8
		move $8,$9
		move $9,$10
		
		li $v0,4
    		la $a0,output3
    		syscall

    		li $v0,1
    		move $a0,$8 
    		syscall

		li $v0,4
    		la $a0,output4
    		syscall

    		li $v0,1
    		move $a0,$9 
    		syscall
	
		ori $v0,$0,10
		syscall	
		
		
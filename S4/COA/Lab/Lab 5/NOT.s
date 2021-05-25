.data
	prompt1: .asciiz "Enter the Number : "
	result: .asciiz "The Result of NOT is : "

.text

	.globl  main

	main:

		addi $v0,$0,4
		la $a0,prompt1
		syscall

		addi $v0,$0,5
		syscall
		add $8,$0,$v0

		nor $9,$8,$8

		li $v0,4
    		la $a0,result
    		syscall

    		li $v0,1
    		move $a0,$9 
    		syscall
	
		ori $v0,$0,10
		syscall	
		
		
.data

	prompt1: .asciiz "Enter the v : "
	prompt2: .asciiz "\nEnter the u : "
	prompt3: .asciiz "\nEnter the a : "
	v: .asciiz "\n\nv : "
	u: .asciiz "\n\nu : "
	a: .asciiz "\n\na : "
	time: .asciiz "\n\nTime Required : "
	
.text
	.globl main

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

		addi $v0,$0,4
		la $a0,prompt3
		syscall

		addi $v0,$0,5
		syscall
		add $10,$0,$v0

		addi $v0,$0,4
		la $a0,v
		syscall

		addi $v0,$0,1
		add $a0,$0,$8
		syscall

		addi $v0,$0,4
		la $a0,u
		syscall

		addi $v0,$0,1
		add $a0,$0,$9
		syscall

		addi $v0,$0,4
		la $a0,a
		syscall

		addi $v0,$0,1
		add $a0,$0,$10
		syscall
		
		sub $8,$8,$9
		div $8,$10
		mflo $8

		addi $v0,$0,4
		la $a0,time
		syscall

		addi $v0,$0,1
		add $a0,$0,$8
		syscall

exit:

	ori $v0,$0,10
	syscall
		
		 
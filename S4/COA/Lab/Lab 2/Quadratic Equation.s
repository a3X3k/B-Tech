.data

	prompt1: .asciiz "Enter the A : "
	prompt2: .asciiz "\nEnter the B : "
	a1: .asciiz "\nA : "
	b1: .asciiz "\n\nB : "
	aout: .asciiz "\n\nA^2 : "
	bout: .asciiz "\n\nB^2 : "
	cout: .asciiz "\n\n2AB : "
	finalout: .asciiz "\n\n(A+B)^2 => A^2 + B^2 + 2AB => "

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

		add $11,$0,$8
		add $12,$0,$9

		addi $v0,$0,4
		la $a0,a1
		syscall

		addi $v0,$0,1
		add $a0,$0,$11
		syscall

		addi $v0,$0,4
		la $a0,b1
		syscall

		addi $v0,$0,1
		add $a0,$0,$12
		syscall

		mult $8,$8
		mflo $13

		mult $9,$9
		mflo $14

		addi $v0,$0,4
		la $a0,aout
		syscall

		addi $v0,$0,1
		add $a0,$0,$13
		syscall

		addi $v0,$0,4
		la $a0,bout
		syscall

		addi $v0,$0,1
		add $a0,$0,$14
		syscall

		addi $15,$0,2
		mult $11,$15
		mflo $10

		mult $10,$12
		mflo $10

		addi $v0,$0,4
		la $a0,cout
		syscall

		addi $v0,$0,1
		add $a0,$0,$10
		syscall

		add $15,$13,$14
		add $15,$15,$10

		addi $v0,$0,4
		la $a0,finalout
		syscall

		addi $v0,$0,1
		add $a0,$0,$15
		syscall
		

exit:
	ori $v0,$0,10
	syscall

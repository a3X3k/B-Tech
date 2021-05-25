.data

	prompt1: .asciiz "Enter the Width : "
	prompt2: .asciiz "\nEnter the Height : "
	area: .asciiz "\nThe Area of Rectangle is : "
	perimeter: .asciiz "\n\nThe Perimeter of Rectangle is : "

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

		mult $8,$9
		mflo $10

		addi $v0,$0,4
		la $a0,area
		syscall

		addi $v0,$0,1
		add $a0,$0,$10
		syscall

		add $8,$8,$9
		addi $10,$0,2
		mult $8,$10
		mflo $10

		addi $v0,$0,4
		la $a0,perimeter
		syscall

		addi $v0,$0,1
		add $a0,$0,$10
		syscall


exit:
	ori $v0,$0,10
	syscall

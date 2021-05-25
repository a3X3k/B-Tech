.data

	prompt1: .asciiz "Enter the Area of Triangle : "
	prompt2: .asciiz "\nEnter the Height of Triangle : "
	area : .asciiz "\nArea of Triangle is : "
	height: .asciiz "\n\nHeight of Triangle is : "
	base: .asciiz "\n\nBase of Triangle : "
	unit: .asciiz " cm"

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
		la $a0,area
		syscall

		addi $v0,$0,1
		add $a0,$0,$8
		syscall
		
		addi $v0,$0,4
		la $a0,height
		syscall

		addi $v0,$0,1
		add $a0,$0,$9
		syscall

		addi $10,$0,2
		mult $10,$8
		mflo $10

		div $10,$9
		mflo $10		

		addi $v0,$0,4
		la $a0,base
		syscall
		
		addi $v0,$0,1
		add $a0,$0,$10
		syscall

		addi $v0,$0,4
		la $a0,unit
		syscall

exit:

	ori $v0,$0,10
	syscall
		
		 
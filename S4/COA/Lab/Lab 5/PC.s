.data
	nl: .asciiz	"\n"

.text

	.globl main
main:	
	li    $t0, 0  
	li    $t1, 10
loop: 
	addi  $t0, $t0, 1                
	bne   $t1, $t0, loop 
	sll   $t0,$t1,2
	li	$v0,1		
	move	$a0, $t0	
	syscall
	li	$v0,4		
	la	$a0, nl
	syscall
	li	$v0,10		
	syscall
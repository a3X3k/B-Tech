.data
MSG1: .asciiz " The numbers 5 and 6 are added together : "
           .text


main:

li $t1,5

li $t2,6

add $t1,$t1,$t2

li $v0,4

la $a0, MSG1

syscall

li $v0,1

move $a0, $t1

syscall 

jr $ra
{-

5 - Create a simple calculator with the operations +, -, /, *. Read two numbers and the operation, compute the operation and print the result. 

-} 

sumOf a b c | c == 1 = a + b 
 | c == 2 = a - b
 | c == 3 = a * b
 | c == 4 = a / b

main = do 

    putStrLn "Enter the Number 1"

    a <- readLn

    putStrLn "Enter the Number 2"

    b <- readLn

    putStrLn "Enter the 1 for Addition - 2 for Subtraction - 3 for Multiplication - 4 for Division"

    c <- readLn

    print (sumOf a b c)


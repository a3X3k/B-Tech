{-

2 - Read an integer and print the factorial of the number.  

-}

main = do 

    putStrLn "Enter the Number : "

    n <- readLn

    print (product [1..n])
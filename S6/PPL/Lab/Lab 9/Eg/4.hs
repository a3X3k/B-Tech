{-

4 - To read a list of integers from the user and print it.

-}

main = do 

    putStrLn "Enter a list of integers : "

    list <- getLine

    putStr "The entered list is : "

    print (read list :: [Int])
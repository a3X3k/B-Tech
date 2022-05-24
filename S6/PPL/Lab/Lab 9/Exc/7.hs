{-

7 - Read a list of integers from the user which prints a list of integers, except that each odd element of the list is replaced by the square of that element. 

-}

main = do 

    putStrLn "Enter a list of integers : "

    list <- getLine

    let ls = read list :: [Int]

    print ([if i `mod` 2 /= 0 then i*i else i | i <- ls])
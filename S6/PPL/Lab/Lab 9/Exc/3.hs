{-

3 - Display the count of even and odd numbers from the list of integers.

-}

main = do 

    putStrLn "Enter a list of integers : "

    list <- getLine

    let ls = read list :: [Int]

    putStrLn "Odd Count"

    print (length (filter odd ls))

    putStrLn "Even Count"

    print (length (filter even ls))
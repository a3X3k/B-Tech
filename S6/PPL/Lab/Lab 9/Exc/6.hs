{-

6 - Read the list of integers from the user and prints a tuple pair with an even sum and the odd sum of the elements from the list. 

-}

find :: Integral a => [a] -> (a,a)

find x = (sum [i | i <- x, i `mod` 2 == 0], sum [i | i <- x, i `mod` 2 /= 0])

main = do 
    
    putStrLn "Enter a list of integers : "

    list <- getLine

    let ls = read list :: [Int]

    print (find ls)
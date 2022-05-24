{-

1 - Read a string and display its length. 

-}

main = do 

    putStrLn "Enter the String : "

    s <- getLine

    print (length(s))
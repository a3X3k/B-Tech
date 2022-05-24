{-

4 - Print n Fibonacci numbers

-}

fib a b = a : fib b (a+b)

main = do 

    putStrLn "Enter the number"

    n <- readLn

    print (take n (fib 0 1))
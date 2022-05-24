-- 1 Question

print_Me :: String -> String
print_Me s = "Hello " ++ s

-- 2 Question

thrice x = [x, x, x]

sums (x : y : ys) = x : sums (x + y : ys)
sums xs           = xs

-- 3 Question Method 1

myproduct x = product x 

-- 3 Question Method 2

triProduct :: [Integer] -> Integer

triProduct [] = 1

triProduct (x : xs) = x * triProduct xs 


-- 7 Question

always0 :: Int -> Int

always0 x = 0

-- 8 Question

sub :: Int -> Int -> Int

sub x y = x - y

sub1 :: Float -> Float -> Float

sub1 x y = x - y

-- 9 Question

addmult :: Int -> Int -> Int -> Int

addmult p q r = (p + q) * r 


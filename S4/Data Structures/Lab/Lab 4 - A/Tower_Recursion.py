def hanoi(n, source, destination, dummy):
    if n == 1:
        print("Move Disk 1 from Rod", source, "to Rod", destination)
        return
    hanoi(n - 1, source, dummy, destination)
    print("Move Disk", n, "from Rod", source, "to Rod", destination)
    hanoi(n - 1, dummy, destination, source)


n_rod = int(input("Enter the Number of Disk : "))
print()
hanoi(n_rod, 'A', 'C', 'B')

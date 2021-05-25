class s:
    def __init__(self, v):
        self.V = v
        self.s = []

    def add(self, u, v, w):
        self.s.append([u, v, w])

    def find(self, root, i):
        if root[i] == i:
            return i
        return self.find(root, root[i])

    def merge(self, root, count, x, y):
        x = self.find(root, x)
        y = self.find(root, y)
        if count[x] < count[y]:
            root[x] = y
        elif count[x] > count[y]:
            root[y] = x
        else:
            root[y] = x
            count[x] += 1

    def min_span(self):
        arr = []
        i, j = 0, 0
        self.s = sorted(self.s, key=lambda item: item[2])
        root = []
        count = []
        for node in range(self.V):
            root.append(node)
            count.append(0)
        while j < self.V - 1:
            u, v, w = self.s[i]
            i = i + 1
            x = self.find(root, u)
            y = self.find(root, v)
            if x != y:
                j = j + 1
                arr.append([u, v, w])
                self.merge(root, count, x, y)
        for u, v, val in arr:
            print("\t\t Edge : (", u, v, ")", end=" ")
            print("-", val)


if __name__ == '__main__':
    root = s(6)
    root.add(0, 1, 7)
    root.add(0, 3, 8)
    root.add(1, 2, 6)
    root.add(1, 3, 3)
    root.add(2, 4, 2)
    root.add(2, 5, 5)
    root.add(3, 2, 4)
    root.add(3, 4, 3)
    root.add(4, 5, 2)

    print("\n\t\tMinimum Spanning Tree\n")
    root.min_span()

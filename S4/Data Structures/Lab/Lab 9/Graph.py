class Graph(object):

    def __init__(self, row_col):
        self.arr = []
        for i in range(row_col):
            self.arr.append([0 for i in range(row_col)])
        self.row_col = row_col

    def add(self, v1, v2):
        if v1 == v2:
            print("Same vertex %d and %d" % (v1, v2))
        self.arr[v1][v2] = 1
        self.arr[v2][v1] = 1

    def display(self):
        for row in self.arr:
            for val in row:
                print('{}'.format(val),end="  ")
            print()


if __name__ == '__main__':
    graph = Graph(7)
    graph.add(0, 1)
    graph.add(0, 3)
    graph.add(1, 2)
    graph.add(1, 3)
    graph.add(1, 5)
    graph.add(1, 6)
    graph.add(2, 3)
    graph.add(2, 4)
    graph.add(2, 5)
    graph.add(3, 4)
    graph.add(4, 6)

    graph.display()
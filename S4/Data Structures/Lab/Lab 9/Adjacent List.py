class Node:
    def __init__(self, value):
        self.vertex = value
        self.next = None


class Graph:
    def __init__(self, data):
        self.V = data
        self.graph = [None] * self.V

    def add(self, x, y):
        node = Node(y)
        node.next = self.graph[x]
        self.graph[x] = node

        node = Node(x)
        node.next = self.graph[y]
        self.graph[y] = node

    def display(self):
        for i in range(self.V):
            print("Vertex " + str(i) + " :", end="")
            ptr = self.graph[i]
            while ptr:
                print(" -> {}".format(ptr.vertex), end="")
                ptr = ptr.next
            print(" \n")


if __name__ == "__main__":
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

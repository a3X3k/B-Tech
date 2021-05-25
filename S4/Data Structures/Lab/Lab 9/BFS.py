from collections import defaultdict


class Node:
    def __init__(self):
        self.graph = defaultdict(list)

    def add(self, u: int, v: int):
        self.graph[u].append(v)
        self.graph[v].append(u)

    def bfs(self, source: int):

        bfs_traverse = []

        is_visited = [False] * len(self.graph)
        queue = [source]

        is_visited[source] = True

        while len(queue) > 0:

            curr_node = queue.pop(0)
            bfs_traverse.append(curr_node)

            for neighbour_node in self.graph[curr_node]:
                if not is_visited[neighbour_node]:
                    queue.append(neighbour_node)
                    is_visited[neighbour_node] = True

        return bfs_traverse


def run_bfs(node: Node, source: int):
    return node.bfs(source)


if __name__ == "__main__":
    graph = Node()
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

    bfs_traverse = run_bfs(graph, 0)

    print("\nBreadth First Search Traversal : ", end="")
    print(' '.join(str(ele) for ele in bfs_traverse))

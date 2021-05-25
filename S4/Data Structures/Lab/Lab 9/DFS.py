from collections import defaultdict

class Node:
    def __init__(self):

        self.graph = defaultdict(list)

    def add(self, u: int, v: int):
        self.graph[u].append(v)
        self.graph[v].append(u)

    def dfs(self, source: int):

        dfs_traverse = []

        is_visited = [False] * len(self.graph)
        stack = [source]

        is_visited[source] = True

        curr_node = source
        while len(stack) > 0:
            dfs_traverse.append(curr_node)

            flag_found_next = False

            while not flag_found_next and len(stack) > 0:

                for neighbour_node in self.graph[curr_node]:
                    if not is_visited[neighbour_node]:
                        is_visited[neighbour_node] = True
                        stack.append(neighbour_node)
                        curr_node = neighbour_node
                        flag_found_next = True
                        break

                if not flag_found_next and len(stack):
                    curr_node = stack.pop()

        return dfs_traverse


def run_dfs(node: Node, source: int):
    return node.dfs(source)


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

    dfs_traverse = run_dfs(graph, 0)

    print("\nDepth First Search Traversal : ", end="")
    print(' '.join(str(ele) for ele in dfs_traverse))

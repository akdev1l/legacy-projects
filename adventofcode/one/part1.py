#!/usr/bin/env python

from functools import reduce

def solve():
    with open("input.txt") as input_file:
        lines = input_file.readlines()
        numbers = [int(num) for num in lines]
        candidates = [
            (x, y)
            for x in numbers
                for y in numbers
        ]
        print(f"part1.results_length: {len(candidates)}")
        solution = list(filter(lambda el: el[0] + el[1] == 2020, candidates))
        print(f"part1.solution: {solution}")
        

    return reduce(lambda a,b: a*b, solution[0])

if __name__ == "__main__":
    solve()

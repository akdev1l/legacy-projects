#!/usr/bin/env python

from logging import getLogger, basicConfig, INFO
from functools import reduce

basicConfig(level=INFO)

logger = getLogger(__name__)

class PasswordPolicy:
    def __init__(self, min_len, max_len, char):
        self.min_len = min_len
        self.max_len = max_len
        self.char = char

    def validate(self, password):
        logger.debug(f"validating: {self.min_len}-{self.max_len} {self.char} => {password}")
        result = (password[self.min_len-1] == self.char) != (password[self.max_len-1] == self.char)
        logger.debug(f"result: {result}")
        return  result

    @staticmethod
    def parse(policy_str):
        policy_parts = policy_str.split(" ")
        policy_char = policy_parts[-1]
        policy_min_len = int(policy_parts[0].split("-")[0])
        policy_max_len = int(policy_parts[0].split("-")[1])

        return PasswordPolicy(policy_min_len, policy_max_len, policy_char)
        
def validate_password(input_line):
    password = input_line.split(":")[-1].strip()
    password_policy = PasswordPolicy.parse(input_line.split(":")[0])

    return (password, password_policy.validate(password))
        
def solve():
    with open("input.txt") as input_file:
        lines = input_file.readlines()
        password_validation_results = map(validate_password, lines)
        valid_password_count = reduce(
            lambda a,b: a+1, 
                filter(lambda result: result[1], password_validation_results),
            0
        )
        solution = valid_password_count
        print(f"part2.solution: {solution}")
        

    return solution

if __name__ == "__main__":
    solve()

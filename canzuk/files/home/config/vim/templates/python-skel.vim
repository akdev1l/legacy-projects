#!/usr/bin/env python

from argparse import ArgumentParser
from json import (
    loads,
    dumps
)
from os import path
from logging import (
    basicConfig,
    getLogger,
    INFO
)
from sys import argv

basicConfig(
    level=INFO,
    format="%(asctime)s - %(name)s - %(levelname)s - %(message)s"
)
logger = getLogger(path.basename(argv[0]))

def main():
    arg_parser = ArgumentParser()

    cli_args = arg_parser.parse_args()

    logger.info(f"{cli_args}")

if __name__ == "__main__":
    main()

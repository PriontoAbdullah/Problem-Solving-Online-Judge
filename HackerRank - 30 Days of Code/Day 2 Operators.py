#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(meal_cost, tip_percent, tax_percent):
    tip=float(tip_percent/100)
    tax=float(tax_percent/100)
    tip=meal_cost*tip
    tax=meal_cost*tax
    total_cost=meal_cost+tip+tax
    print(round(total_cost))

meal_cost = float(input())

tip_percent = int(input())

tax_percent = int(input())

solve(meal_cost, tip_percent, tax_percent)
